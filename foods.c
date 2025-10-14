#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    printf("How many foods are on your shopping list?\n");
    int num;
    scanf("%d",&num);
    char food[13];
    for(int i=0;i<num;i++){
        printf("Please enter a food:\n");
        scanf("%s",&food);
        printf("%s",food);
        for(int i=0;i<strlen(food);i++){
            food[i] = tolower(food[i]);
        }
        if(strcmp(food,"banana") == 0 || strcmp(food,"apple") == 0 || strcmp(food,"orange") == 0 || strcmp(food,"lettuce") == 0 || strcmp(food,"tomato") == 0){
            printf(" is healthy!\n");
        }else{
            printf(" is unhealthy!\n");
        }
    }
    return 0;
}