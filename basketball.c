#include <stdio.h>
int main(){
    printf("What is the name of the file?\n");
    char name[50];
    scanf("%s",name);
    FILE *stats;
    stats = fopen(name,"r");
    int count = 1;
    int data = 0;
    double c = 0;
    int cCount = 0;
    int gCount = 0;
    int fCount = 0;
    double g = 0;
    double f = 0;
    char type;
    while((fscanf(stats,"%d %c",&data,&type)) == 2){
       if(type == 'C'){
        c += (double)data;
        cCount++;
       }else if(type == 'G'){
        g += (double)data;
        gCount++;
       }else if(type == 'F'){
        f += (double)data;
        fCount++;
       }
    }
    c = c/cCount;
    g = g/gCount;
    f = f/fCount;
    printf("The average center points is %.2lf\n",c);
    printf("The average guard points is %.2lf\n",g);
    printf("The average forward points is %.2lf",f);
    return 0;
}