// Write a program in C++ to calculate the series (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n).
#include<iostream> 
using namespace std;
int main(){
    int num;
    cout<<"Input the value of n tarm :";
    cin>>num;
    int sum=0,sum2=0;
    for (int i = 1; i <= num; i++)
    {   
        sum=0;
        
        for (int j = 1; j <= i; j++)
        {   
            
            cout<<j;
            if (j<i)
            {
              cout<<"+";  
            }
           sum+=j;
        }
        cout<<"="<<sum<<endl;
        sum2+=sum; 
    }

    cout<<sum2;
    return 0;
    }