char *leet(char *str)
{
	char *letters = "aAeEoOtTlL";
	char *leet_nums = "4433007711";
	int i, j;
	
	for (i = 0; str[i] != '\0'; i++)
	{
	for (j = 0; letters[j] != '\0'; j++)
	{
	if (str[i] == letters[j])
	{
	str[i] = leet_nums[j];
	break;
	}
	}
	} 

	return (str);
}
