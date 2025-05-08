// Copy File Without Blank Lines
#include<stdio.h>
#include<ctype.h>

int main() 
{
    FILE *src, *dest;
    char ch, prev = '\n';
    
    src = fopen("source.txt", "r");
    dest = fopen("dest.txt", "w");
    while((ch = fgetc(src)) != EOF) 
    {
        if(!(prev == '\n' && ch == '\n')) 
        {
            fputc(ch, dest);
        }
        prev = ch;
    }
    fclose(src);
    fclose(dest);
    return 0;
}