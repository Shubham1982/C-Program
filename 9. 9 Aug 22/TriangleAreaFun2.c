// Type 2
// With argument without return type...
#include<stdio.h>

void AreaOfTringle(int a, int b){
    float Area;
    Area = 0.5 * a * b;
    printf("\nArea of Tringle is : %f,",Area);
}

int main(){
    int a, b;
    printf("\nEnter Base of Triangle : ");
    scanf("%d",&a);
    printf("\nEnter height of Trinagle : ");
    scanf("%d",&b);
    AreaOfTringle(a,b);
    return 0;
}

// 1.circle
// 2.trinagle 
// 3.rectangle
// 4.square