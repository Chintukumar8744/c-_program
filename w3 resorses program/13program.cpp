// Write a program in C++ to display the multiplication table vertically from 1 to n.
#include<iostream>
using namespace std;
void table(int num){
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= num; j++)
        {
           cout<<j<<"*"<<i<<"="<<j*i<<"\t";
        }
        cout<<"\n";
    }
}
int main(){
    int num;
    cout<<"enter the upper limit : ";
    cin>>num;
    table(num);
    return 0;
    }
