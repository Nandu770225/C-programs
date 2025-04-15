#include<stdio.h>
int prime(int n);
int main()
{
    int number;
    printf("Enter the value:");
    scanf("%d",&number);
    prime(number);
    return 0;
}
int prime(int n)
{
    int flag=0;
    if (n == 0 || n == 1)
    flag = 1;

  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }
  if (flag == 0)
    printf("%d is a prime number.", n);
  else
    printf("%d is not a prime number.", n);

  return 0;
}