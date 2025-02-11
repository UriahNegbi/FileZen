# FileZen - The Easy-to-Use File Manager

**FileZen** is a simple, fast, and efficient file manager designed to help you organize your files easily. With an intuitive interface and powerful terminal commands, FileZen makes managing your files a breeze.

---

## What We Offer

- **Ease of Use**: FileZen is designed to be simple and intuitive, so you can get started without any hassle.
- **Speed**: FileZen is optimized for performance and gets the job done quickly.
- **Terminal Commands**: Interact with FileZen via the terminal to automate tasks and improve your workflow.

---

## Installation

You have two options for setting up **FileZen**:

---

### Option 1: Clone & Build from Source

1. **Clone the repository**  
   Clone the repository using the following command:
   ```bash
   git clone https://github.com/UriahNegbi/FileZen.git
   ```
   
2. **Navigate to the project folder**  
   After cloning, navigate to the `FileZen` directory:
   ```bash
   cd FileZen
   ```

3. **Build the project with g++**  
   Compile the project using the following command:
   ```bash
   g++ -std=c++17 -o filemanager main.cpp FileOrganizer.cpp
   ```
   This will generate the `filemanager.exe` executable in your project folder.

---

### Option 2: Clone & Build + Add to PATH

1. **Clone the repository**  
   Clone the repository using the following command:
   ```bash
   git clone https://github.com/UriahNegbi/FileZen.git
   ```
   
2. **Navigate to the project folder**  
   After cloning, navigate to the `FileZen` directory:
   ```bash
   cd FileZen
   ```

3. **Build the project with g++**  
   Compile the project using the following command:
   ```bash
   g++ -std=c++17 -o filemanager main.cpp FileOrganizer.cpp
   ```
   This will generate the `filemanager.exe` executable.

4. **Add `filemanager.exe` to the system PATH**  
   To use `filemanager` from any location in the terminal, add the `filemanager.exe` to your system’s PATH.  
   Alternatively, you can place it in a folder that is already in your PATH.

---

### Running FileZen

Once you have built the executable, you can run `filemanager.exe` via the terminal:
```bash
filemanager.exe
```

When running the program, you'll see the following prompt:
```bash
type 'exit' to close
Enter command:
```
Type commands and press **Enter** to interact with the file manager. Type **`exit`** to close the program.

---

## Authors

- [@octokatherine](https://www.github.com/UriahNegbi)

---

### Notes
- **Customization**: Feel free to tweak the code and contribute to the project!
- **Support**: If you run into issues, please check the Issues tab or create a new issue.
