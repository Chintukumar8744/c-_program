//  Write a program in C++ to find the number and sum of all integer between 100 and 200 which are divisible by 9.
#include<iostream>
using namespace std;
int main(){
    int num,num2;
    cout<<"enter the number num,num2:";
    cin>>num>>num2;
    int sum=0;
    for (int i = num; i < num2; i++)
    {
        if (i%9==0)
        {
            sum+=i;
        } 
    }
    cout<<sum;
    return 0;
    
}