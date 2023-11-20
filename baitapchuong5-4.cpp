#include <stdio.h>

int main() {
  int n;
  int a = 0, b = 1, c;

  printf("Nhap n: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    c = a + b;
    a = b;
    b = c;
    printf("%d ", c);
  }
}
