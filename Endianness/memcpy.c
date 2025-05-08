#include <string.h>
#include <stdio.h>

#define MAX_LEN 80

char source[MAX_LEN] = "If you work hard now, after completion of the course!!";
char target[MAX_LEN] = "You will get the job and you will become successful";

int main(void)
{
    printf("Before memcpy, target is \"%s\"\n", target);
    
    // Copy contents of source to target
    memcpy(target, source, sizeof(source));
    
    printf("After memcpy, target becomes \"%s\"\n", target);
    
    return 0;
}