// Write a program in C++ to find the sum of the series 1 + 1/2^2 + 1/3^3 + …..+ 1/n^n.
#include<iostream> 
#include<math.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number";
    cin>>num;
    float valu=0,sum=0;
    for (int i = 1; i <= num; i++)
    {
        valu=1/pow(i,i);
        sum+=valu;
    }
    cout<<sum;
    return 0;
    
}