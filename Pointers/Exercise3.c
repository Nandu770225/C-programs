#include<stdio.h>
int main()
{
    int i,arr[5]={25,30,35,40,45},*p;
    for(i=0;i<5;i++)
    printf("%p",arr+i);
    printf("\n enter 5 number :");
    for(i=0;i<5;i++)
    scanf("%d",arr+i);
for(i=0;i<5;i++)
printf("%d",*(arr+i));
return 0;
}
