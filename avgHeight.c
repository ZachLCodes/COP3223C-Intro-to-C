#include <stdio.h>
int main(){
    printf("What is the name of the file?\n");
    char name[50];
    scanf("%s",name);
    FILE *height;
    height = fopen(name,"r");
    int count;
    fscanf(height,"%d",&count);
    double total = 0;
    int current; 
    for(int i=0;i<count;i++){
        fscanf(height,"%d",&current);
        total += (double)current;
    }
    total = total/count;
    printf("The average height is: %.2lf",total);
    fclose(height);
    return 0;
}