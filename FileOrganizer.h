#ifndef FILE_ORGANIZER_H
#define FILE_ORGANIZER_H

#include <filesystem>
#include <string>

std::string lookPath(const std::filesystem::path& input);
extern std::filesystem::path savePath;
extern std::filesystem::path configZen;
void loadPath(const std::string& targetStr, const std::string& targetFilePath);
void Organizer(const std::filesystem::path& installFolder, const std::filesystem::path& configFile);

#endif
