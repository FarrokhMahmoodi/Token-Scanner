#include <stdio.h>
#include <stdlib.h>
#include "testscanner.h"
#include <string.h>

int main(int argc, char** argv)
{

    char* filename;
    char* fileNameWithExtenssion = NULL;
    FILE *filePointer;

    // Read from File.
    if(argc == 2)
	{
		filename = argv[1];
		fileNameWithExtenssion = (char*)malloc(sizeof(char)*(strlen(filename)+8));
		strcpy(fileNameWithExtenssion, filename);
		strcat(fileNameWithExtenssion, ".fs");
		filePointer = fopen(fileNameWithExtenssion, "r");
		if(filePointer==NULL)
		{
			fprintf( stderr, "Can not open file: %s.fs", filename);
			return -1;
		}
	}
    // Read the std-in file for the data
	else
	{
		filePointer = stdin;
		filename = "input";
	}

    testScan(filePointer);



    /// Closing the file
	fclose(filePointer);
	/// Free the memory for file names;
	if(fileNameWithExtenssion)
        free(fileNameWithExtenssion);
	return 0;
}





