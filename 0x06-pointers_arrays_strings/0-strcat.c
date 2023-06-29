#include "main.h"
/** strcat - concatenates two strings.
* an inputed number of bytes from src
* @dest - the string to append upon
* @src - the string to be appended to dest
* Return: pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
        int index = 0, dest_len = 0;

        while (dest[index++])
                dest_len++;
        for (index = 0; src[index]; index++)
                dest[dest_len++] = src[index];
/*Add null terminator to mark the end of the concatenated string */
        dest[dest_len] = '\0';
        return (dest);
}

