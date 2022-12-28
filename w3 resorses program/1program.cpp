// Write a program in C++ to find the perfect numbers between 1 and 500.
#include<iostream>
using namespace std;
int main(){
   int n1,n2;
    cin>>n1>>n2;
    int sum=0;
    for (int i = n1; i < n2; i++)
    {
        sum=0;
        for (int j = 1; j < i; j++)
        {
             if (i%j==0)
        {
            sum+=j;
            
        }
        }   
        if (i==sum)
        cout<<i<<"\n";
    }
    
    
    return 0;
}