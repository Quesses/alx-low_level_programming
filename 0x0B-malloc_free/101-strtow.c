#include "main.h"
#include <stdlib.h>

void util(char **tow, char *str);
void create_word(char **, char *, int, int, int);

/**
 * strtow - splits a string into words
 * @str: given string
 *
 * Return: pointer to an array of strings(word)
 * NULL if @str is NULL or empty or on failure.
 */
char **strtow(char *str)
{
	int i, len, flag;
	char **tow;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);
	i = flag = len = 0;
	while (str[i])
	{
		if (flag == 0 && str[i] != ' ')
			flag = 1;
		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			flag = 0;
			len++;
		}
		i++;
	}

	len += flag == 1 ? 1 : 0;
	if (len == 0)
		return (NULL);

	tow = (char **)malloc(sizeof(char *) * (len + 1));
	if (tow == NULL)
		return (NULL);

	util(tow, str);
	tow[len] = NULL;
	return (tow);
}

/**
 * util - a util function for fetching words into an array
 * @tow: the strings array
 * @str: the string
 */
void util(char **tow, char *str)
{
	int i, j, start, flag;

	i = j = flag = 0;
	while (str[i])
	{
		if (flag == 0 && str[i] != ' ')
		{
			start = i;
			flag = 1;
		}

		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			create_word(tow, str, start, i, j);
			j++;
			flag = 0;
		}

		i++;
	}

	if (flag == 1)
		create_word(tow, str, start, i, j);
}

/**
 * create_word - creates a word and insert it into the array
 * @tow: the array of strings
 * @str: given string
 * @start: the starting index of the word
 * @end: the stopping index of the word
 * @index: the index of the array to insert the word
 */
void create_word(char **tow, char *str, int start, int end, int index)
{
	int i, j;

	i = end - start;
	tow[index] = (char *)malloc(sizeof(char) * (i + 1));

	for (j = 0; start < end; start++, j++)
		tow[index][j] = str[start];
	tow[index][j] = '\0';
}
