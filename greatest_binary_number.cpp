/* Programmer =  Roshan Mehra
Purpose = Q3 - Given two binary numbers, return the greatest of these numbers in decimal format.
Date = 01/11/2022  */

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num1, num2;
    cout<<"Enter num1: "<<endl;
    cin>>num1;
    cout<<"Enter num2: "<<endl;
    cin>>num2;
    int i1=0, i2=0, n1=0, n2=0;
    while(num1!=0){
        int digit = num1%10;
        n1 += (pow(2,i1)*digit);
        num1=num1/10;
        i1++;
    }

    while(num2!=0){
        int digit = num2%10;
        n2 += (pow(2,i2)*digit);
        num2/=10;
        i2++;
    }

    if(n1>n2){
        cout<<n1<<" is greater than "<<n2<<endl;
    }
    else{
        cout<<n2<<" is greater than "<<n1<<endl;
    }

    return 0;
}