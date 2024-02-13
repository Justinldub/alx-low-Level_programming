#include "main.h"

int main(void)
{
	const char *filename = "file.txt";
	char *text_content = "This is text to write";
	int result;

	result = append_text_to_file(filename,text_content);
	if(result == 1)
	{
		printf("Text appended successful\n");
	}
	else
	{
		printf("Faild to append text \n");
	}
	return (0);
}
