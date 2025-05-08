#include <stdio.h>
#include <math.h>

int func(int n);
int main(void)
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("%d",func(n));
    return 0;
}
int func(int n)
{
    int i, flag=0;
    for(i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    return flag;
}