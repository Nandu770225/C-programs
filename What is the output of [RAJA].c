#include <stdio.h>

int main() 
{
    printf("%c\n", 3["RAJA"]);   
    printf("%c\n", "RAJA"[3]);       // array[index] == index[array]
    printf("%c\n", 1["RAJA"]);       // "RAJA"[3] == 3["RAJA"]
    printf("%c\n", 2["RAJA"]);       // Index:   0   1   2   3   4 
                                     // Value:   R   A   J   A   \0  ('\0' is the null terminator marking the end of the string.)
    return 0;
}
