/**
 * leet - encode a string into 1337.
 *
 * @String: contains a string for encode.
 *
 * Return: encoded String.
 */

char *leet(char *String)
{
	char toRep[] = {'4', '3', '0', '7', '1', '\0'};
	char cOrg [] = {'A', 'E', 'O', 'T', 'L', '\0'};

	int i;
	int j;

	for (i = 0; *String; String++, i++)
	{
		for (j = 0; cOrg[j]; j++)
		{
			if (cOrg[j] + 32 == *String || cOrg[j] == *String)
			{
				*String = toRep[j];
				break;
			}
		}
	}
	return (String -= i);
}
