#include <stdio.h>

int main(void)
{
char lowercase, uppercase;
for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
putchar(lowercase);
for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
putchar(uppercase);
putchar('\n');
return 0;
}
