
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char** AllocateShoppingList(int numFoods);
char* AllocateItem();
int DetermineNumberOfCandy(char** list, int numFoods);
int main()
{
printf("How many items are on your list?\n");
int numFoods;
scanf("%d",&numFoods);
char** list = AllocateShoppingList(numFoods);
for(int i=0;i<numFoods;i++){
     list[i] = AllocateItem();
}
int numCandy = DetermineNumberOfCandy(list,numFoods);
printf("Candy appeared this many times on the list: %d",numCandy);
for(int i=0;i<numFoods;i++){
    free(list[i]);
}
free(list);
}
int DetermineNumberOfCandy(char** list, int numFoods)
{
int count = 0;
for(int i=0;i<numFoods;i++){
    if(strcmp(list[i],"candy") == 0){
        count++;
    }
}
return count;
}
char** AllocateShoppingList(int numFoods)
{
    char** list = malloc(numFoods*sizeof(char*));
    return list;
}
char* AllocateItem()
{
printf("What is the item?\n");
char temp[100];
scanf("%s",temp);
char* item = malloc(strlen(temp)+1);
strcpy(item,temp);
return item;
}