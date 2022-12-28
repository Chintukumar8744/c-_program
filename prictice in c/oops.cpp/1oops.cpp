// what is constructor;
// 1.constructor is a member function of a class.
// 2.The name of the constructor is same as the name of the calss;
// 3.It has no return type, so can't use return keyword.
// 4.it must be an instance member function , that is, it can never be static.
// 5.constructor is implicitly invoked when an object is created.
// 6.constructor is used to solve problem of initialization.

#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
class student{
    public:
    string name;
    int age;
    bool gender;
    void printinfo(){
        cout<<"Name =";
        cout<<name<<endl;
        cout<<"Age =";
        cout<<age<<endl;
        cout<<"Gender =";
        cout<<gender<<endl;
    }
};
int main(){
    student stu[5];
    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter the name :";
        cin>>stu[i].name;
        cout<<"Enter the age :";
        cin>>stu[i].age;
        cout<<"Enter the gender :";
        cin>>stu[i].gender;
    }
    for (int i = 0; i < 3; i++)
    {
        stu[i].printinfo();
    }
    
return 0;
    
}