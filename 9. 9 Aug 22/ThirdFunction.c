// Type 3
#include<stdio.h>
// Without argument with return type...

int addData(){
    int n1, n2, add;
    printf("\nEnter any two no : ");
    scanf("%d%d",&n1,&n2);
    add = n1 + n2;
    return add;
}
int main(){
    int x;
    x = addData();
    printf("\n Addition is : %d",x);
}


