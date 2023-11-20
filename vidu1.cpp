#include <conio.h>
#include <stdio.h>
void main()
{ char ch;
for (ch='a'; ch<='z'; ch++)
printf("%3c",ch);
for (ch='z'; ch<='a'; ch--)
printf("%3c",ch);
getch();
}
