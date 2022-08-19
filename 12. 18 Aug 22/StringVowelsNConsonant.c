#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[10];
    int i, count = 0, vowel=0,consonant =0;
    printf("\nEnter your name here : ");
    scanf("\n%s", name);//string doesn't need & sign.
    for( i = 0; name[i]!='\0'; i++){
        count++;
    }
    for(i =0; i<count; i++){
        printf("%c",name[i]);
        if (name[i]=='a' || name[i]=='e' || name[i]=='i'|| name[i]=='o' || name[i]=='u'){
            vowel++;
        }    
    }
    consonant= count - vowel;
    printf("\nVowels are : %d",vowel);
    printf("\nConsonats are : %d",consonant);
 return 0;
}