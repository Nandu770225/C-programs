#include<stdio.h>

int main()
{
    int arr[4]={10,20,30,40};
    int x=100,*ptr=arr;
    printf("%p   %d     %d\t",ptr,*ptr,x);
    x=*ptr++;
    printf("%p     %d    %d\t",ptr,*ptr,x);
    x=*++ptr;
    printf("%p     %d    %d\t",ptr,*ptr,x);
    x=++*ptr;
    printf("%p     %d    %d\t",ptr,*ptr,x);
    x=(*ptr)++;
    printf("%p     %d    %d\t",ptr,*ptr,x);
 return 0;

}
