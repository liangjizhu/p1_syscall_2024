//P1-SSOO-23/24

#include <stdio.h>
/*The first program, mywc, will open a file specified as an argument, count the number
of lines, words, and bytes on it, and show these through the standard output (the console)
using the appropriate system calls. To do this:
	• It will open the file passed as a parameter.
	• It will read the contents of the file byte by byte.
	• It will update the counters based on the bytes read. It is understood that two lines
	are separated by the character ‘\n’, while two words can be separated by the
	characters ‘ ’ (blank space) or ‘\t’. In addition, there will be no more than one
	successive space or line break.
	• It will show the results on the console, followed by the file name. Separating each value
	from the next with a blank space.
	• Finally, it will close the file.*/


int main(int argc, char *argv[])
{

	/*If less than two arguments (argv[0] -> program, argv[1] -> file to process) print an error y return -1*/
	if(argc < 2)
	{
		printf("Too few arguments\n");
		return -1;
	}

	return 0;
}

