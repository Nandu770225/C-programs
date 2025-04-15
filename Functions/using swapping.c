#include<stdio.h>
int swap(int a,int b);
int main()
{
    int x,y;
    printf("Enter the x and y values:");
    scanf("%d %d",&x,&y);
    swap(x,y);
    return 0;
}
int swap(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swappring of two values is:");
    printf("%d %d",a,b);
    return 0;
}