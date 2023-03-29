#include "main.h"
/**
 * _strcat - Concatenates two string together and stores it in the src variable
 * @src, @dest: input
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;
	while (*ptr != '\0') 
	{
		ptr++;
    	}
	while (*src != '\0') {
        	*ptr = *src;
        	ptr++;
        	src++;
    	}
    *ptr = '\0';
    return dest;
}
