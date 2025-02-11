#include "FileOrganizer.h"
#include <iostream>
#include <fstream>
#include <vector>

std::filesystem::path savePath;
std::filesystem::path configZen;  // Ensure it's defined

void loadPath(const std::string& targetStr, const std::string& targetFilePath) {
    std::ifstream file(targetFilePath);
    if (!file) {
        std::cerr << "Error: Unable to open " << targetFilePath << "\n";
        return;
    }

    std::string line;
    while (std::getline(file, line)) {
        if (line.find(targetStr) != std::string::npos) {
            size_t start = line.find("-") + 1;
            if (start != std::string::npos) {
                savePath = line.substr(start);
                return;
            }
        }
    }
    savePath.clear();
}

std::string lookPath(const std::filesystem::path& input) {
    std::ifstream file(configZen);
    if (!file) {
        std::cerr << "Error: Cannot open config file.\n";
        return "";
    }

    std::string lookPath;
    std::getline(file, lookPath);
    size_t start = lookPath.find(":") + 1;
    return (start != std::string::npos) ? lookPath.substr(start) : "";
}

void Organizer(const std::filesystem::path& installFolder, const std::filesystem::path& configFile) {
    if (!std::filesystem::exists(installFolder) || !std::filesystem::is_directory(installFolder)) {
        std::cerr << "Error: Install folder does not exist or is not a directory.\n";
        return;
    }

    std::vector<std::filesystem::path> pathsToFolder;
    for (const auto& entry : std::filesystem::directory_iterator(installFolder)) {
        pathsToFolder.push_back(entry.path());
    }

    for (const auto& entry : pathsToFolder) {
        loadPath(entry.extension().string(), configFile.string());

        if (!savePath.empty()) {
            std::filesystem::path targetFile = savePath / entry.filename();

            if (std::filesystem::exists(targetFile)) {
                std::cerr << "Error: File " << targetFile << " already exists. Skipping move.\n";
                continue;
            }

            try {
                std::filesystem::rename(entry, targetFile);
            }
            catch (const std::filesystem::filesystem_error& e) {
                std::cerr << "Error moving file: " << e.what() << "\n";
            }
        }
    }
}
