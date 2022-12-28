#include<iostream>
using namespace std;
int main(){
    char num;
    cout<<"enter the upper limit";
    cin>>num;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<num;
        }
        cout<<"\n";
    }
    return 0;
}