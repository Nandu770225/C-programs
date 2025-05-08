#include<stdio.h>
#include<string.h>

int main()
{
    union tag
    {
        char name[15];
        int age;
    }rec;
    strcpy(rec.name,"somika");
    rec.age=23;
    printf("name=%s\n",rec.name);
    return 0;
}
