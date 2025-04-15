#include <stdio.h>  
#include <string.h> 

int main()  
{
    char s[] = "31298 87.375";  
    int x;                     
    double y;                   
    sscanf(s, "%d%lf", &x, &y); 
    printf("%s\n %s%d \n%s%8.3lf\n", "The values stored in character array s are:","integer:", x, "double:", y);
    
    return 0;  
}