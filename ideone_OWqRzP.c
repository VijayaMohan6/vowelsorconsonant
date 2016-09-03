#include <stdio.h>
int main(void) {
char c;
printf("Enter a character");
scanf("%c",&c);
if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' ||c=='i' || c=='o' || c=='u')
printf("The character %c is VOWEL",c);
else
printf("The character %c is CONSONANT",c);
	return 0;
}
