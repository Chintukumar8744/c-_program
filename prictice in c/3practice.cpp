#include<cstdio>
#include<iostream>
using namespace std;
void insertion_short(int arr[],int size){
    for (int i = 1; i < size; i++)
    {
        int current=arr[i];
        int j=i-1;
        while (arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}
int main(){
    int size;
    printf("Enter the size");
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the array element[%d]",i);
        cin>>arr[i];
    }
    insertion_short(arr,size);
    return 0;
    

}