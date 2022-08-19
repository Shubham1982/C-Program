#include<stdio.h>
// Type 1
// Without argument without return type...

void addData();
int main(){
    addData();
    return 0;
}
void addData(){
    int r;
    float Area;
    printf("\nEnter radius of Circle : ");
    scanf("%d",&r);
    Area = 3.14 * r * r;
    printf("\nArea of Circle is :%.2f",Area);
}

