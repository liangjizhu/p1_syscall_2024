# Operating System Lab 1

## Description
This repository contains the source code and related files for the Operating System Lab 1 project. The project includes several C programs that perform basic file and directory operations, as well as a Python script for verifying the format and basic functionality of the programs.

## Purpose
The purpose of this project is to provide students with hands-on experience in working with system calls and basic file operations in C. The project includes the following programs:
- `myishere.c`: Checks if a specified file exists in a given directory.
- `myls.c`: Lists the contents of a specified directory.
- `mywc.c`: Counts the number of lines, words, and bytes in a specified file.

## Usage Instructions
1. Clone the repository:
   ```
   git clone https://github.com/liangjizhu/p1_syscall_2024.git
   ```
2. Navigate to the repository directory:
   ```
   cd p1_syscall_2024
   ```

## Compiling the Programs
To compile the programs, use the provided `Makefile`. Run the following command:
```
make
```
This will generate the executables `myishere`, `myls`, and `mywc`.

## Running the Programs
To run the programs, use the following commands:
- `myishere`: 
  ```
  ./myishere <directory_path> <filename_with_the_type>
  ```
- `myls`: 
  ```
  ./myls <directory_path>
  ```
- `mywc`: 
  ```
  ./mywc <file_path>
  ```

## Verifying the Programs
To verify the format and basic functionality of the programs, use the provided Python script `checker_os_p1.py`. Run the following command:
```
python3 checker_os_p1.py <submission.zip>
```

## Authors
The authors of this project are listed in the `authors.txt` file.

## Additional Files
- `Makefile`: Used for compiling the C programs.
- `checker_os_p1.py`: Python script for verifying the format and basic functionality of the programs.
- `.vscode/settings.json`: Configuration file for the VSCode editor.
- `p1_tests/f1.txt`: Test file for the programs.
