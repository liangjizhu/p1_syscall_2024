//P1-SSOO-23/24

#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <string.h>
//alba es demasiado guapa para este trabajo
// siiiiiiiiuuuuuuuuuuuuuuuuuuuuu

int main(int argc, char *argv[])
{
	/* If less than three arguments (argv[0] -> program, argv[1] -> directory to search, argv[2] -> file to find) print an error y return -1 */
	if(argc < 3)
	{
		printf("Too few arguments\n");
		printf();
		return -1;
	}

	return 0;
}
