#include<iostream> 
using namespace std;
int main(){
    int num;
    cout<<"Enter the number";
    cin>>num;
    int sum=0,remender=0;
   while(true){
     remender=num%10;
        sum=sum+remender;
        num=num/10;
        if (num==0)
        {
            break;
        }
    }
    cout<<sum;
    return 0;
    
}