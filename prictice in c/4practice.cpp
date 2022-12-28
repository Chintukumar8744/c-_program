#include<iostream>
#include<cstdio>
using namespace std;
void sieveof(int n){
    int prime[100]={0};
    for (int i = 2; i <= n; i++)
    {
        if (prime[i]==0)
        {
           for (int j =i*i; j <= n; j+=i)
        {
            prime[j]=1;
        }
        }
    }
    
    for (int i = 0; i <= n; i++)
    {
        if (prime[i]==0)
        {
            cout<<i<<endl;
        }
        
    }
    
}
int main(){
    int n;
    cin>>n;
    sieveof(n);

}