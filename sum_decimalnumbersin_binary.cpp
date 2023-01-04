/* Programmer =  Roshan Mehra
Purpose = Q1 - Print the sum of the first 5 decimal numbers from 1 to 5 in binary format.
Date = 01/11/2022  */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0, ans=0, i=0;

    for(int i=1; i<=n; i++){
        sum +=i;
    }

    while (sum!=0)
    {   int digit = sum&1;
        ans = ans + (pow(10, i) * digit);
        sum = sum>>1;
        i++;
    }

    cout<<ans;

    return 0;
}