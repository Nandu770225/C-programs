#include<stdio.h>
int evenorodd(int num);
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    evenorodd(number);
    return 0;
}
int evenorodd(int num)
{
    if(num%2==0)
    {
        printf("%d is a even number",num);
    }
    else
     printf("%d is a odd number",num);

    return 0;
}