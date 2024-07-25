char *strcpy(char *s1, char *s2)
{
	int i;
	i = 0;
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return s2;
}
int main()
{
	char s1[] = "dhuwhd";
	char s2[] = "dudhiw"
	strcpy(s1,s2)
