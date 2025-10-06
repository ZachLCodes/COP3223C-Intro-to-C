#include <stdio.h>
int main(){
    printf("How many class sections are there?\n");
    int sessions;
    scanf("%d",&sessions);
    double averages[sessions];
    int sum;
    for(int i=0;i<sessions;i++){
        int students;
        sum = 0;
        printf("How many students are in section %d\n",i);
        scanf("%d",&students);
        printf("Please enter the scores:\n");
        for(int j=0;j<students;j++){
            int score;
            scanf("%d",&score);
            sum += score;
        }
        averages[i] = (double)sum/students;
        printf("The class section %d had an average of %.2lf\n",i,averages[i]);
    }
    double best = averages[0];
    int index = 0;
    for(int i=1;i<sessions;i++){
        if(averages[i] > best){
            best = averages[i];
            index = i;
        }
    }
    printf("The section with the best average is section %d with an average of %.2lf",index,best);
    return 0;
}