#include<stdio.h>

int main()
{
    int i,arr[3][4]={{10,11,12,13},{20,21,22,23},{30,31,33,34}};
    int *pa[3];
    int (*p)[4];
    p=arr;
    for(i=0;i<3;i++)
    pa[i]=arr[i];
printf("%d %d  %d\n",pa[0][0],pa[0][1],pa[2][3]);
printf("%d %d  %d\n",pa[0][0],pa[0][1],pa[2][3]);
return 0;
}
