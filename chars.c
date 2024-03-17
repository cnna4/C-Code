// Hello World Program

#include <stdio.h>
#include <math.h>
int isVowel(char);


int main (){
    char character;
    int number;
    printf(" Enter a char ");
    scanf("%c", &character);
    number = isVowel(character);

   if (number ==1)
    printf("It is a Vowel");
   else if (number ==2)
    printf("Its not a Vowel");
   else
    printf("Invalid Char");


    printf(" ")


    return 0;

}


int isVowel(char ch)
{
    int value;

    ch = tolower(ch);

    if ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u') || (ch == 'y'))
        return 1;
    else
        return 2;
return 0;
}




