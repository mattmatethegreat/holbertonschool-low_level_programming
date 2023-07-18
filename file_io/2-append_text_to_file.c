#include "main.h"

/*
 * append_text_to_file appends the text at end of file
 * filename is the pointer to the name
 * text_content is the string to add
 * return filename NULL --1 on fail if it doesnt exist then --1, otherwise -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;
	
	if (filename == NULL)
	return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);
	
	if (o == -1 || w == -1)
		
	return (-1);
	
	close(o);
	
	return (1);
}

