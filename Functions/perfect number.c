#include<stdio.h>
int perfect(int num);
int main()
{
    int number;
    printf("Enter the value:");
    scanf("%d",&number);
    perfect(number);
    return 0;
}
int perfect(int num)
{
    int sum=0,rem;
    for(int i=1;i<num;i++)
    {
        rem=num%i;
        if(rem==0)
        {
           sum+=i;
        }
    }
    if(sum==num)
    {
        printf("%d is a perfect number",num);
    }
    else 
       printf("%d is not a perfect number",num);
  
       return 0;
}