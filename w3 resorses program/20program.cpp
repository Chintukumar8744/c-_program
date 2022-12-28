#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
   int remender;
    while (true)
    {
            remender=num%10;
            cout<<remender;
            num=num/10; 
            if (num==0)
            {
                break;
            }    
    }
    
    return 0;
}
