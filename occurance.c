#include <stdio.h>
int main(){
    printf("Please enter 10 numbers between 1 and 5:\n");
    int numbers[10];
    for(int i=0;i<10;i++){
        scanf("%d",&numbers[i]);
    }
    int count[5][2] = {{1,0},{2,0},{3,0},{4,0},{5,0}};
    for(int i=0;i<10;i++){
        switch(numbers[i]){
            case 1:
                count[0][1]++;
                break;
            case 2:
                count[1][1]++;
                break;
            case 3:
                count[2][1]++;
                break;
            case 4:
                count[3][1]++;
                break;
            case 5:
                count[4][1]++;
                break;
            default:
                printf("Invalid Input");
                return 0;
            }
    }
    printf("Which number would you like the frequency of:\n");
    int num;
    scanf("%d",&num);
    for(int i=0;i<5;i++){
        if(count[i][0] == num){
            printf("The number %d appears %d times",num,count[i][1]);
            break;
        }
    }
    return 0;
}