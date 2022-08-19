// Type 4
#include<stdio.h>
// With argument with return type...

int addData(int n1, int n2){
    int add;
    add = n1 + n2;
    return add;
}
int main(){
    int a, b, x;
    printf("\nEnter any two no : ");
    scanf("%d%d",&a,&b);
    x = addData(a,b);
    printf("\n Addition is : %d",x);
}


