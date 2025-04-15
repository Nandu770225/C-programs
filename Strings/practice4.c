/* using %s in the control string of scanf() and printf()*/
#include<stdio.h>
#include<string.h>

int main()
{
    char name[40];
    printf("Enter a name: ");
    scanf("%s", name);
    printf("%s %s\n", name, "nanda gopal reddy");
    return 0;
}
