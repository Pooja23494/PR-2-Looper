#include<iostream>
using namespace std;

int main(){

    int n,firstDigit,lastDigit,sum=0;

    cout<<"Enter Number: ";
    cin>>n;

    lastDigit=n%10;
    while(n>0)
    {
        firstDigit=n%10;
        sum+=firstDigit;
        n=n/10;
    }
    cout<<"Sum of First and Last Digits: "<<firstDigit+lastDigit;
    return 0;
}