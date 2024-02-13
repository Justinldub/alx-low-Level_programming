#include "main.h"
/**
 * @Author: Justin Dube
 * @Date: 2024-02-13
 * @disc: This algorith create a new file in the file system and write text into it.
 * =================================================================================
 * create_file - function to create a new text file or truncate a file.
 * Sets permissions to rw-------
 * Writes text content into the file
 * =================================================================================
 * @filename: the name of the file to be created.
 * @text_content: the text to be written into the file.
 * Return: -1 on failure other 1 on success.
 */
int create_file(const char *filename, char *text_content)
{
	if(filename == NULL)
	{
		return -1;
	}

	int fd;

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if(fd == -1)
	{
		perror("Failed to open or create a file");
		return -1;
	}

	if(text_content != NULL)
	{
		ssize_t bytes_written = write(fd, text_content, strlen(text_content));
		if(bytes_written == -1)
		{
			perror("Failed to write to file");
			close(fd);
			return -1;
		}
	}

	close(fd);
	return 1;
}
