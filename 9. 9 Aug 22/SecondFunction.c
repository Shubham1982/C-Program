// Type 2
// With argument without return type...
#include<stdio.h>

void addData(int a, int b){
    int add;
    add = a + b;
    printf("\nAddition of %d and %d is : %d",a, b, add);
}

int main(){
    int a, b;
    printf("\nEnter any two no : ");
    scanf("%d%d",&a,&b);
    addData(a,b);
    return 0;
}

// 1.circle
// 2.trinagle 
// 3.rectangle
// 4.square