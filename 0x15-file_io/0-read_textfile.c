#include "main.h"
/**
 * Author: Justin Dube
 * read_textfile - Function that reads a text file and print to the STD_OUT
 * Then closes the files and frees the allocated memmory
 * @filename: The name of the file to be loaded from the file input stream
 * @letters: the size of the letters to be able to read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	/*Create variable*/
	FILE *file;
	char *buffer;
	ssize_t bytes_read;

	/*Opening file*/
	file = fopen(filename, "r");
	if(file == NULL)
	{
		perror("Could not open file specified");
		return -1;
	}

	/*Allocate memory to buffer*/
	buffer = (char *)malloc(sizeof(char) * (letters + 1));
	if(buffer == NULL)
	{
		perror("Error allocating memory");
		fclose(file);
		return -1;
	}

	/*Read from file into the buffer*/
	bytes_read = fread(buffer, sizeof(char),letters, file);
	if(bytes_read == -1)
	{
		perror("counld not read from the file");
		fclose(file);
		free(buffer);
		return -1;
	}

	/*Null terminate the buffer*/
	buffer[bytes_read] = '\0';
	printf("%s",buffer);

	/*Free resources*/
	fclose(file);
	free(buffer);

	return bytes_read;

}


