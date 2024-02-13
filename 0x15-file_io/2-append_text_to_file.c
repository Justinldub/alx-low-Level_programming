#include "main.h"
/**
 * @Author: Justin Dube
 * @Date: 2024-02-13
 * ========================================================================================
 * append_text_to_file - function that opens file from the file system and append text inside
 * @filename: The name of the file
 * @text_content: the text content to append to file
 * Return - 1 success -1 otherwise 
 */
int append_text_to_file(const char *filename, char *text_content)
{
	if(filename == NULL)
	{
		return -1;
	}
	
	if(text_content == NULL)
	{
		return 1;
	}

	FILE *file;

	file = fopen(filename, "a");
	if(file == NULL)
	{
		perror("File not found.\n");
		return -1;
	}

	if(fputs(text_content, file) == EOF)
	{
		perror("Failed to append text to file.\n");
		fclose(file);
	}

	fclose(file);
	return 1;
}
