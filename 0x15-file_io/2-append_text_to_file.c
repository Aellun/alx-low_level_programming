#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist or the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileDescriptor, bytesWritten, contentLength = 0;

	/* Check if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* Calculate the length of text_content if it's not NULL */
	if (text_content != NULL)
		contentLength = strlen(text_content);

	/* Open the file in write-only mode with append flag */
	fileDescriptor = open(filename, O_WRONLY | O_APPEND);
	if (fileDescriptor == -1)
		return (-1);

	/* Write text_content to the end of the file */
	bytesWritten = write(fileDescriptor, text_content, contentLength);

	/* Close the file */
	close(fileDescriptor);

	/* Check if the write operation was successful */
	if (bytesWritten == -1)
		return (-1);

	/* Return 1 on success */
	return (1);
}

