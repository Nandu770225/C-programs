#include<stdio.h>

int main() 
{
    int arr[] = {5, 10, 15, 20}; 
    int *p = arr;                
    printf("%d\n", *p++);        
    printf("%d\n", (*p)++);      
    printf("%d\n", *p);          

    return 0;
}
// key points:
// arr[] = {5, 10, 15, 20}, p points to arr[0] → value is 5
// first printf("%d\n", *p++);   *p++ means: post-increment on a pointer.
// *p = 5 → printed  ,then p++ moves p to arr[1]  

//second printf("%d\n", (*p)++);  , (*p)++)- this means post-increment on the value at pointer.
// Here get the current value at p (arr[1] = 10) and then increment that value by 1.
// (*p) = 10 → printed ,Then arr[1] becomes 11.
 
// third printf("%d\n", *p);   here *p now points to arr[1], which has been updated to 11.
// so then  *p = 11 → printed.
// the output will be 5,10,11
