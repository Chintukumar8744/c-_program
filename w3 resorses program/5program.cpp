// Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers.
#include<iostream> 
using namespace std;
int main(){
    int num,num1;
    cout<<"Enter the number";
    cin>>num>>num1;
    int gcd=0;
    for (int i = 1; i < num&& i<num1; i++)
    {
        if (num%i==0 &&num1%i==0)
        {
            gcd=i;
        }
    }
    cout<<gcd;
    return 0;
    
}