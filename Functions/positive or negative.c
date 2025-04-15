#include<stdio.h>
int func(int num);
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    func(number);
    return 0;
}
int func(int num)
{
    if(num<0)
    {
        printf("%d is the negative number",num);
    }
    if(num>0)
    {
        printf("%d is the positive number",num);
    }
    else if(num==0)
     printf("It is zero");

    return 0;
    
}