#include <stdio.h>
#define FLOUNDER 0
#define SNAPPER 1
#define TUNA 2
int ReleaseFish(int fishCount, int matrix[3][fishCount]);
double CalculateAverageWeight(int fishCount, int matrix[3][fishCount]);
int main(){
     int fishCount = 5;
    int matrix[3][5];
    for (int i = 0; i < fishCount; i++) {
    printf("Enter species, length, and weight for fish %d: ", i+1);
    scanf("%d %d %d", &matrix[0][i], &matrix[1][i], &matrix[2][i]);
    }
    int released = ReleaseFish(fishCount, matrix);
    double weight = CalculateAverageWeight(fishCount, matrix);
    printf("This many fish were released %d\n",released);
    printf("The average fish weight is %.2f",weight);
    return 0;
}
int ReleaseFish(int fishCount, int matrix[3][fishCount]){
    int count = 0;
    for(int i=0;i<fishCount;i++){
        if(matrix[0][i] == FLOUNDER){
            if(matrix[1][i] < 14){
                matrix[0][i] = -1;
                matrix[1][i] = -1;
                matrix[2][i] = -1;
                count++;
            }
        }else if(matrix[0][i] == SNAPPER){
            if(matrix[1][i] < 20){
                matrix[0][i] = -1;
                matrix[1][i] = -1;
                matrix[2][i] = -1;
                count++;
            }
        }else if(matrix[0][i] == TUNA){
            if(matrix[1][i] < 27){
                matrix[0][i] = -1;
                matrix[1][i] = -1;
                matrix[2][i] = -1;
                count++;
            }
        }
    }
    return count;
}
double CalculateAverageWeight(int fishCount, int matrix[3][fishCount]){
    double average = 0;
    int count = 0;
    for(int i=0;i<fishCount;i++){
        if(matrix[0][i] != -1){
            average = average+matrix[2][i];
            count ++;
        }
    }
    if(count == 0){
        return 0.00;
    }
    average = average/count;
    return average;
}