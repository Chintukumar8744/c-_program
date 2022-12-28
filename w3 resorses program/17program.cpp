// Write a program in C++ to display the first n terms of Fibonacci series. 4
#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int sum=0;
    int temp,num1=0,num2=1;
    cout<<0<<"\n"<<1<<endl;
    for (int i = 2; i < num; i++)
    {
        temp=num1+num2;
        cout<<temp<<endl;
        num1=num2;
        num2=temp;
    }
    
return 0;
}