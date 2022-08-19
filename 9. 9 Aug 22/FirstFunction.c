#include<stdio.h>
// Type 1
// Without argument without return type...

void addData();
int main(){
    addData();
    return 0;
}
void addData(){
    int n1, n2, add;
    printf("\nEnter any two no : ");
    scanf("%d%d",&n1,&n2);
    add = n1 + n2;
    printf("\nAddition of %d and %d is : %d",n1, n2, add);
}

