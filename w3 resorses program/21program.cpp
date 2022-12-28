// Write a program in C++ to find out the sum of an A.P. series.
#include<iostream>
using namespace std;
int main(){
        int s_num,n_item,c_difference;
        cout<<"Input the starting number of the A.P. series:";
        cin>>s_num;
        cout<<"Input the number of items for the A.P. series:";
        cin>>n_item;
        cout<<"Input the common difference of A.P. series:";
        cin>>c_difference;
        int sum=0;
        int num;
    for (int i =s_num; i <=(n_item*c_difference); )
    {
        sum+=i;
        cout<<i;
        num=n_item*c_difference;
        if (i<num-5)
        {
            cout<<"+";
        } 
        i+=c_difference;
    }
    cout<<"="<<sum;
    return 0;
}