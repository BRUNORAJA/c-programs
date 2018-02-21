#include <stdio.h>
#include <ctype.h>
#include<conio.h>

void main()
{
    char c;
    int isLowercaseVowel, isUppercaseVowel;
    clrscr():

    do {
        printf("Enter an alphabet: ");
        scanf(" %c", &c);
    }
    while (!isalpha(c));

    
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

   
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

  
    if (isLowercaseVowel || isUppercaseVowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    getch();
}
