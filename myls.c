//P1-SSOO-23/24

/*Next, we'll implement the *myls* program. This program lists entries in a directory, requiring use of the opendir, readdir, and closedir system calls from the POSIX standard to read directory contents.

### Pseudocode for myls

1. Check if the directory path is provided; if not, use the current directory.
2. Open the directory using opendir.
3. If the directory cannot be opened, return -1.
4. Loop through directory entries using readdir.
5. For each entry, print the entry name.
6. Close the directory using closedir.
7. Return 0 if the program executes successfully.*/

#include <stdio.h>		// Header file for system call printf
#include <unistd.h>		// Header file for system call gtcwd
#include <sys/types.h>	// Header file for system calls opendir, readdir y closedir
#include <dirent.h>
#include <string.h>


int main(int argc, char *argv[]) {
    DIR *dir;
    struct dirent *entry;

    if (argc < 2) {
        // If no directory is specified, use the current directory
        dir = opendir(".");
    } 
	else {
        dir = opendir(argv[1]);
    }

    if (dir == NULL) {
        perror("opendir failed");
        return -1;
    }

    while ((entry = readdir(dir)) != NULL) {
        printf("%s\n", entry->d_name);
    }
    closedir(dir);
    return 0;
}


