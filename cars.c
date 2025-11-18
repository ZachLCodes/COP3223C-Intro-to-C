#include <stdio.h>
#include <stdlib.h>
double GetAverage(int* houseArray, int numHouses);
void FillArray(int* array, int numHouses);
int* AllocateMemory(int numberOfHouses);
int main()
{
///////////////////////////////////////////////////////////
//Do not touch the Main function! Everything is fine here!
int numberOfHouses;
printf("How many houses are there?\n");
scanf("%d", &numberOfHouses);
int* houseArray = AllocateMemory(numberOfHouses);
FillArray(houseArray, numberOfHouses);
double avgCarCount = GetAverage(houseArray, numberOfHouses);
printf("The average car count is: %.2f", avgCarCount);
///////////////////////////////////////////////////////////
}
double GetAverage(int* houseArray, int numHouses)
{
    double total = 0;
    for(int i=0;i<numHouses;i++){
        total += (double)houseArray[i];
    }
    total = total/numHouses;
    return total;
}
void FillArray(int* array, int numHouses)
{
    for(int i=0;i<numHouses;i++){
        printf("House %d: ",i+1);
        scanf("%d",&array[i]);
    }
}
int* AllocateMemory(int numberOfHouses)
{
    return malloc(numberOfHouses*sizeof(int));
}
