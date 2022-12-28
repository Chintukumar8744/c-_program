// Write a program in C++ to display the sum of the series [ 9 + 99 + 999 + 9999 ...]. 
#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int sum=0;
    int count=0;
    int i=9;
    while(true){
        sum+=i;
        i=i*10+9;
        count++;
        if (count==num)
    {
       break;
    }
    }
    cout<<sum;
    
return 0;
}