// Write a program in C++ to find LCM of any two numbers using HCF.
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter the num1,num2:";
    cin>>num1>>num2;
    int hcf,lcm;
    for (int i = 1; i < num1 || i<num2; i++)
    {
         if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }
    
    lcm=(num1*num2)/hcf;
    cout<<lcm;
    
return 0;
}