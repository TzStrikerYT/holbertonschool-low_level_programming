/**
 * cap_string - Capitalize the String.
 *
 * @s: contais a String.
 *
 * Return: Capitalized String.
 */

char *cap_string(char *s)
{
	char sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	int i;
	int j;

	if (*s >= 97 && *s <= 122)
	{
		*s -= 32;
	}

	for (i = 0; *s; s++, i++)
	{
		for (j = 0; sep[j] && *(s + 1) >= 97 && *(s + 1) <= 122; j++)
		{
			if (sep[j] == *s)
			{
				*(s + 1) -= 32;
			}
		}

	}

	return (s - i);
}
