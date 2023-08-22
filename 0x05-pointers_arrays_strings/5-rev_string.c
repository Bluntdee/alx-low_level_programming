/**
  * rev_string - reverses a string
  * @s: string parameter input
  * Return: Nothing
  */
void rev_string(char *s)
{int X, x;
char c;
	for (X = 0; s[X] != '\0'; ++X)
	for (x = 0; x < X / 2; ++x)
{
	c = s[x];
	s[x] = s[X - 1 - x];
	s[X - 1 - x] = c;
}
}
