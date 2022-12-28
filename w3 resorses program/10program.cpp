#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the upper limit";
    cin>>num;

    for (int i = 2; i <= num; i++)
    {
        int choice=0;
        for (int j = 2; j < i; j++)
        {
            if (i%j==0)
            {
                choice++;
            }
        }
        if (choice != 0)
        {
            cout<<"  "<<i;
        }  
    }
    return 0;
}