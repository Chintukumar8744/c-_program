#include<iostream>
#include<cstdio>
using namespace std;
class student{
    string name;
    public:
    int age;
    bool gender;
    void setname(string s){
        name=s;
    }
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
        string s;
        cout<<"Enter the name :";
        cin>>s;
        stu[i].setname(s);
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