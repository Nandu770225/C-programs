#include<stdio.h>
int palindrome(int number);
int main()
{
    int num;
    printf("Enter the value:");
    scanf("%d",&num);
    palindrome(num);
    return 0;
}
int palindrome(int number)
{
    int rem,rev=0;
    int temp=number;
    while(number!=0)
    {
        rem=number%10;
        rev=rev*10+rem;
        number/=10;
    }
    if(temp==rev)
    {
        printf("%d is a palindrome",temp);
    }
    else
      printf("%d is not a palindrome",temp);

    return 0;
}