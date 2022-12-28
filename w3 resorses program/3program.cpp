// Write a program in C++ to find the factorial of a number.
#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for (int i = n; i > 1; i--)
    {
        fact*=i;
    }
    return fact;
}
int main(){
    int num;
    cin>>num;
    cout<<factorial(num);
}