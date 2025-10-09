#include <stdio.h>
int ApplyExtraCredit(int scores[]);
void PrintLetterDistribution(int scores[]);
int main(){
    printf("Enter Scores:\n");
    int scores[10];
    for(int i=0;i<10;i++){
        scanf("%d",&scores[i]);
    }
    int hundred = ApplyExtraCredit(scores);
    printf("This many scores reached 100: %d\n",hundred);
    PrintLetterDistribution(scores);
    return 0;
}
int ApplyExtraCredit(int scores[]){
    int count = 0;
    for(int i=0;i<10;i++){
        if((scores[i] + 5)>=100){
            scores[i] = 100;
            count++;
        }else{
            scores[i] = scores[i] + 5;
        }
    }
    return count;
} 
void PrintLetterDistribution(int scores[]){
    int grades[5] = {0,0,0,0,0};
    for(int i=0;i<10;i++){
        if(scores[i] >= 90){
            grades[0]++;
        }else if(scores[i] >= 80 && scores[i] <= 89){
            grades[1]++;
        }else if(scores[i] >= 70 && scores[i] <= 79){
            grades[2]++;
        }else if(scores[i] >= 60 && scores[i] <= 69){
            grades[3]++;
        }else if(scores[i] < 59){
            grades[4]++;
        }
    }
    for(int i=0;i<5;i++){
        if(i == 0){
            printf("NumAs: %d\n",grades[i]);
        }else if(i == 1){
            printf("NumBs: %d\n",grades[i]);
        }else if(i == 2){
            printf("NumCs: %d\n",grades[i]);
        }else if(i == 3){
            printf("NumDs: %d\n",grades[i]);
        }else if(i == 4){
            printf("NumFs: %d\n",grades[i]);
        }
    }
}