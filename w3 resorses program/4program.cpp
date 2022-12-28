// Write a program in C++ to find prime number within a range.
#include<iostream>
using namespace std;
int main(){
    int num,num2;
    cin>>num>>num2;
    int count=0,last=0;
    for (int i = num+1; i <= num2; i++)
    {
        count=0;
        for (int j = 2; j < i; j++)
        {
        if (i%j==0)
        {
            count++;
        }
        }
         if (count==0)
    {
        last=i;
    }  
    }
    cout<<last;
    
return 0;
    
}