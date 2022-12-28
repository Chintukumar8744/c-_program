#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int ruppay;
   printf("Enter the rupay");
   cin>>ruppay;
   int choclate=ruppay;
   int wraper=choclate;
   int remender=0;
   while(true){
    // if (wraper<=3)
    //     break;
    // remender=wraper%3;
    // wraper=wraper/3;
    // choclate+=wraper;
    // if (remender==2)
    // {
    //     choclate=choclate+1;
    // }
    if (remender>=3)
    {
        choclate+=1;
        break;
    }
    choclate+=(wraper/3);
    remender+=wraper%3;
    wraper=wraper/3;
   }
   cout<<choclate;
return 0;
}

    