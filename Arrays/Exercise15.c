#include<stdio.h>

#define N 6
int main()
{
    int i,j,a[N]={1};
    for(i=0;i<N;i++)
    for(j=i+1;j<i;j++)
a[i]+=a[j];
for(i=0;i<N;i++)
printf("%d",a[i]);
return 0;
}
