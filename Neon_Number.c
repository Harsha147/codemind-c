#include <stdio.h>
int main()
{
  int num, square, i, sum = 0;
  scanf("%d", &num);
  square = num * num;
  i = square;
  while (i > 0)
  {
    sum += i % 10;
    i = i / 10;
  }
  if(sum == num)
    printf("Neon Number", num);
  else
    printf("Not Neon Number", num);
 
  return 0;
}
