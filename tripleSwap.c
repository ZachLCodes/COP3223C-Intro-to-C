#include <stdio.h>
void TripleSwap(int *a,int *b,int *c);
int main(){
    printf("Please enter the values of A, B, and C:\n");
    int a;
    int b;
    int c;
    scanf("%d %d %d",&a,&b,&c);
    TripleSwap(&a,&b,&c);
    printf("The final values are: A=%d B=%d C=%d",a,b,c);
    return 0;
}
void TripleSwap(int *a,int *b,int *c){
    int temp1 = *a;
    int temp2 = *b;
    *a = *c;
    *b = temp1;
    *c = temp2;
}