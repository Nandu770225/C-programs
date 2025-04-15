#include<stdio.h>
int strong(int number);
int main()
{
   int num;
   printf("Enter the value:");
   scanf("%d",&num);
   strong(num);
   return 0;
}
int strong(int number)
{
    int rem,fact,sum=0;
    int temp=number;
    while(number>0)
    {
        fact=1;
        rem=number%10;
        for(int i=1;i<=rem;i++)
        {
            fact*=i;
        }
        sum+=fact;
        number/=10;
    }
    if(temp==sum)
    {
        printf("%d is strong number",temp);
    }
    else
       printf("%d is not a strong number",temp);

       return 0;
}