#include<iostream>
using namespace std;
int main(){

    float prodID,prodPrice,prodQty,prodTotal;
    float cgst, sgst;
    double finaltotal;
    string prodName;

    cout<<"Enter product Id :"<<endl;
    cin>>prodID;

    cout<<"Enter product Name :"<<endl;
    cin>>prodName;

    cout<<"Enter product Price :"<<endl;
    cin>>prodPrice;

    cout<<"Enter product Quantity :"<<endl;
    cin>>prodQty;

    //calculation

    prodTotal = prodPrice * prodQty;
    cgst = prodTotal * 0.06;
    sgst = prodTotal * 0.06;
    finaltotal = prodTotal + cgst + sgst;


    //Display Bill
    cout<<"------------Bill------------"<<endl;
    cout<<"      "<<"prodID "<< " "<<prodID<<endl;
    cout<<"      "<<"prodName "<< " "<<prodName<<endl;
    cout<<"      "<<"prodPrice "<< " "<<prodPrice<<endl;
    cout<<"      "<<"prodQty "<< " "<<prodQty<<endl;
    cout<<"      "<<"cgst "<< " "<<cgst<<endl;
    cout<<"      "<<"sgst "<< " "<<sgst<<endl;
    cout<<"      "<<"prodTotal"<< " "<<prodTotal<<endl;
    cout<<"      "<<"prodtotal "<< " "<<finaltotal<<endl;





return 0;
}