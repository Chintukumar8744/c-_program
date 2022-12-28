// Write a program in C++ to display the n terms of odd natural number and their sum.
#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int  sum=0;
    cout<<"The even numbers are:";
    int i=2,count=0;
  while (true){
        if (i%2==0)
        {
            cout<<i<<"\t";
            sum+=i;
            count++;
        }
        i++;
        if(num==count)
           break;
    }
    cout<<"The sum of even natural number"<<sum;
    return 0;

}
