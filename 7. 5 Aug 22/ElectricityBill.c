#include<stdio.h>
#include<stdlib.h>
int main(){
    int id, units;
    float  total, finaltotal,cgst,sgst;
    char name[10];

    printf("\nEnter consumer ID : ");
    scanf("%d", &id);

    printf("\nEnter consumer Name : ");
    scanf("%s", name);

    printf("\nEnter consumer Units : ");
    scanf("%d", &units);

    if(units<100){
        total = units * 3.33;
    }
    else if(units>=100 && units < 300){
        total = (100 * 3.33) + (units-100)*7.77;
    }
    else if(units>=300 && units < 500){
        total = (100 * 3.33) + (200*7.77) + (units - 300)*11.11;
    }
    else{
        total = (100 * 3.33) + (200*7.77) + (200*11.11)+ (units-500) * 17.11;
    }
    
    cgst = total * 0.06;
    sgst = total * 0.06;
    finaltotal = total + cgst + sgst;

    printf("\n----------------------Electricity Bill----------------------\n");
    printf("\nDATE : 1-JAN-2022\t|\tInvoice NO : #3204");
    printf("\n------------------------------------------------------------\n");
    printf("\n\tConsumer Number\t\t : \t%d",id);
    printf("\n\tConsumer Name\t\t : \t%s",name);
    printf("\n\tNo of Units\t\t : \t%d",units);
    printf("\n\tTotal is \t\t : \t%f",total);
    printf("\n\tCGST\t\t\t : \t%f",cgst);
    printf("\n\tSGST\t\t\t : \t%f",sgst);
    printf("\n\tTotal Payable Bill\t : \t%f",finaltotal);
    
    
    
    
    
    
    // printf("\nName : %s",name);
    // printf("\nID : %d", id);
    // printf("\nUnits : %d", units);
    // printf("\ncgst : %d",cgst);
    // printf("\nsgst : %d",sgst);
    // printf("\ntotal : %d",total);
    // printf("\nFinalTotal : %d",finaltotal);


    return 0;
}