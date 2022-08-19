#include<stdio.h>
#include<stdlib.h>
int main(){

int arr[20];
int i, n, search,j;
int temp = 0;
int x;
int ch;  
int c=0;
int newval,loc;
do{
    printf("\n1-Create Array\n2-Display Array\n3-Sort Array\n4-search Array\n5-Insert value\n6-Delete Array\n7-Exit.");
    printf("\nenter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            // Create Array
            printf("\nEnter size of array");
            scanf("%d",&n);
            for(i = 0; i<n;i++){
                scanf("%d",&arr[i]);
            }
            break;

        case 2:
            // Display
            printf("\nArray is : ");
            for (i = 0; i<n; i++){
                printf(" %d",arr[i]);
            }
            break;

        case 3:
            // Sort
            for (i = 0; i<n; i++){
                for(j = i + 1; j<n ;j++){
                    if(arr[i]>arr[j]){
                        temp=arr[i];
                        arr[i]=arr[j];
                        arr[j]=temp;
                    }
                }
            }
            break;
        
        case 4:
            x=0;
            printf("\n Enter no : ");
            scanf("%d", &search);
            for (int i = 0; i<n;i++){
                if(arr[i]==search){
                    x=1;
                    break;
                }        
            }
            if(x){
                printf("\nNumber Found.");
            }
            else{
                printf("\nNumber couldn't Found.");
            }
            break;

        case 5:
            // Insert array
            printf("Enter new value and location.");
            scanf("%d%d",&newval, &loc);
            for (i=n-1; i>=loc-1;i--){
                arr[i+1]=arr[i];
            }
            arr[loc-1]=newval;
            n++;
            break;
            
        case 6:
            // Delete value
            printf("\nEnter location to delete value.");
            scanf("%d",&loc);
            temp=arr[loc-1];
            for(i = loc -1; i<n; i++){
                arr[i]=arr[i+1];
            }
            printf("Element delete from array is : %d",temp);
            n--;
            

    }
    printf("\nDo you want to continue. preass 1");
    scanf("%d",&c);
}
while(c==1);
}

