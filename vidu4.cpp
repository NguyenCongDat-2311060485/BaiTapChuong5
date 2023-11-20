#include <stdio.h>
#include <conio.h>
void main()
{
int i, j, max;
printf("\nNhap gia tri toi da: ");
scanf("%d", &max);
for (i = 0, j = max; i <= max; i++, j--)
printf("\n%d+%d = %d", i, j,i+j);
getch();
}
