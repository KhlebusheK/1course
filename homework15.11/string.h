
int length(char array[]);
void toUpper(char array[]);
bool isAlphabet(char ch);
bool isAlphabetLowerCase(char ch);
bool isAlphabetUpperCase(char ch);
bool equals(char lhs[], char rhs[], bool foo= false);
bool simpleEquals(char firstString[], char secondString[]);
bool fMoreS(char firstString[], char secondString[]);

int length(char array[])
{
	int i = 0;

	while (array[i])
	{
		i++;
	}

	return i;
}
void toUpper(char array[]) // ??????????????????????????
{
	int l = length(array);
	int diff = 'a' - 'A';
		for (int i = 0; i < l; i++)
		{
			char ch = array[i];
			if (isAlphabetLowerCase)
			{
				array[i] = ch - diff;
			}
		}
}
bool isAlphabet(char ch)
{
	return (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z');
}
bool isAlphabetLowerCase(char ch)
{
	return (ch >= 'a' && ch <= 'z');
}
bool isAlphabetUpperCase(char ch)
{
	{
		return (ch >= 'A' && ch <= 'Z');
	}
}
bool equals(char lhs[], char rhs[], bool foo)
{
	if (length(lhs) != length(rhs))
	{
		return false;
	}

	int l = length(lhs);

	for (int i = 0; i < l; i++)
	{
		char lchar = lhs[i];
		char rchar = rhs[i];
		if (!foo)
		{
			if (isAlphabetLowerCase(lhs[i]))
			{
				lchar -= 32;
			}
		}
		if (lhs[i] != rhs [i])
		{
			return false;
		}
	}
	return true;
}
bool simpleEquals(char firstString[], char secondString[])
{
	if (length(firstString) != length(secondString))
	{
		return false;
	}
	int l = length(firstString), j = 0;
	for (int i = 0; i < l; i++)
	{
		if (firstString[i] == secondString[i])
			j++;
	}
	return (j == l);
}
bool fMoreS(char firstString[], char secondString[])
{
		return (length(firstString) > length(secondString));
}