#include<iostream>
#include<cstdio>
using namespace std;
class student{
    // string name
    public:
    string name;
    int age;
    int marks;
    void setname(string name1){
        name=name1;
    }
    student(string n,int a,int m){
        name=n;
        age=a;
        marks=m;
        print();
    };
    student(){
        cout<<"defalt caonstactor";
    }
    void print(){
        cout<<"Name :";
        cout<<name<<endl;
        cout<<"age:";
        cout<<age<<endl;
        cout<<"marks";
        cout<<marks<<endl;
    }
};
int main(){
    student s1;
    // string name1;
    getline(cin,s1.name);
    cin>>s1.age;
    cin>>s1.marks;
    // s1.print();
return 0;
}