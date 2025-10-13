#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    printf("What word would you like to check?\n");
    char word[16];
    scanf("%s",&word);
    printf("The word %s ",word);
    for(int i=0;i<strlen(word);i++){
        word[i] = tolower(word[i]);
    }
    char reversedWord[strlen(word)+1];
    int count = 0;
    for(int i=strlen(word)-1;i>=0;i--){
        reversedWord[count] = word[i];
        count++;
    }
    reversedWord[count] = '\0';
    if(strcmp(reversedWord,word) == 0){
        printf("is a palindrome!");
    }else{
        printf("is not a palindrome!");
    }
    return 0;
}


