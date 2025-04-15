#include<stdio.h>
char vowel(char ch);
int main()
{
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    vowel(ch);
    return 0;

}
char vowel(char ch)
{
   int upper_case=(ch == 'A' || ch== 'E' || ch == 'I' || ch == 'O' || ch == 'U');
   int lower_case=(ch == 'a' || ch== 'e' || ch == 'i' || ch == 'o' || ch == 'u');
   if(upper_case || lower_case)
   {
    printf("%c is a vowel",ch);
   }
   else
    printf("%c is a consonant",ch);

 return 0;
}