// Write a program in C++ to display the cube of the number upto given an integer.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the upper limit : ";
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        cout<<"Number is : "<< i <<" and the cube of "<< i <<" is: "<<i*i*i<<endl;
    }
    return 0;
}
