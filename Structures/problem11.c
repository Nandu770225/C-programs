// Add Line and Page Numbers
#include<stdio.h>

int main() 
{
    FILE *src, *dest;
    char line[1000];
    int line_num = 1, page_num = 1;

    src = fopen("source.txt", "r");
    dest = fopen("numbered.txt", "w");
    
    fprintf(dest, "Page %d\n", page_num++);
    while(fgets(line, sizeof(line), src)) 
    {
        fprintf(dest, "%d: %s", line_num++, line);
        if(line_num % 50 == 0) 
        {
            fprintf(dest, "\nPage %d\n", page_num++);
        }
    }
    fclose(src);
    fclose(dest);
    return 0;
}