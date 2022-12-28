// Write a program in C++ to calculate the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n).
#include<iostream> 
using namespace std;
int main(){
    int num;
    cout<<"Input the value of n tarm :";
    cin>>num;
    int sum=0;
    for (int i = 0; i <= num; i++)
    {
        cout<<i<<"*"<<i<<"="<<i*i<<endl;
        sum+=(i*i);
    }
    cout<<"\n"<<sum;
    return 0;
}