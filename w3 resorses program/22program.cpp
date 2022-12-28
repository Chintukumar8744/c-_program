//  Write a program in C++ to find the Sum of GP series
#include<iostream>
using namespace std;
int main(){
    int s_num,n_item,C_ratio;
    cout<<"Input the starting number of the G.P. series:";
    cin>>s_num;
    cout<<"Input the number of items for the G.P. series:";
    cin>>n_item;
    cout<<"Input the number of items for the G.P. series:";
    cin>>C_ratio;
    int sum=0;
    for (int i =1;i<=n_item;i++)
    {
        cout<<s_num<<"  ";
        sum+=s_num;
        s_num*=2;
    }
    cout<<"\n"<<sum;

}