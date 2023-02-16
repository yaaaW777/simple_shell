<<<<<<< HEAD
nclude "shell.h"

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
=======
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
>>>>>>> 6ec6c49871a199f5813dd3dec98284ab9d123b4c
 * Return: integer length of string
 */
int _strlen(char *s)
{
int i = 0;
<<<<<<< HEAD
if (!s)
return (0);
=======

if (!s)
return (0);

>>>>>>> 6ec6c49871a199f5813dd3dec98284ab9d123b4c
while (*s++)
i++;
return (i);
}

/**
 * _strcmp - performs lexicogarphic comparison of two strangs.
 * @s1: the first strang
 * @s2: the second strang
 *
 * Return: negative if s1 < s2, positive if s1 > s2, zero if s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2)
{
if (*s1 != *s2)
return (*s1 - *s2);
s1++;
s2++;
}
if (*s1 == *s2)
return (0);
else
return (*s1 < *s2 ? -1 : 1);
}

<<<<<<< HEAD

/**
 * starts_with - checks if needle starts with haystack
 * @haystack: string to search
 *
 * @needle: the substring to find
=======
/**
 * starts_with - checks if needle starts with haystack
 * @haystack: string to search
 * @needle: the substring to find
 *
>>>>>>> 6ec6c49871a199f5813dd3dec98284ab9d123b4c
 * Return: address of next char of haystack or NULL
 */
char *starts_with(const char *haystack, const char *needle)
{
while (*needle)
if (*needle++ != *haystack++)
return (NULL);
return ((char *)haystack);
}

<<<<<<< HEAD

=======
>>>>>>> 6ec6c49871a199f5813dd3dec98284ab9d123b4c
/**
 * _strcat - concatenates two strings
 * @dest: the destination buffer
 * @src: the source buffer
 *
 * Return: pointer to destination buffer
 */
char *_strcat(char *dest, char *src)
{
char *ret = dest;
<<<<<<< HEAD
=======

>>>>>>> 6ec6c49871a199f5813dd3dec98284ab9d123b4c
while (*dest)
dest++;
while (*src)
*dest++ = *src++;
*dest = *src;
return (ret);
}

<<<<<<< HEAD



=======
>>>>>>> 6ec6c49871a199f5813dd3dec98284ab9d123b4c
