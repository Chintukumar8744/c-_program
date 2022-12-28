// Write a program in C++ to display the n terms of harmonic series and their sum. 
#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    float sum=0;
    for (float i = 1; i <= num; i++)
    {
        sum+=(1/i);
    }
    cout<<sum;
    return 0;
}
