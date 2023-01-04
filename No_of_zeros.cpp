/* Programmer =  Roshan Mehra
Purpose = Q2 - Given a natural number, find the number of 0’s in the binary representation of that number.
Note: Don’t count the preceding zeros.
For example: 001001 has 2 zeros as the first two zeros from left are preceding zeros.
Date = 01/11/2022  */

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    int count = 0; 

    while(n!=0){
        int digit = n&1;
        if(digit == 0){
            count++;
        }
        n = n>>1;
    }

    cout<<" no.of 0's are: "<<count;
    return 0;
}