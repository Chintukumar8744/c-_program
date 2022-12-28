#include<iostream>
#include<cstdio>
using namespace std;
class student{
    string name;
    public:
    int age;
    bool gender;
    student(){
        cout<<"Default constructor"<<endl;
    }
    student(string s,int a,bool g){
        cout<<"perameterised constructor"<<endl;
        name=s;
        age=a;
        gender=g;
    }//perameterised constructor
    student(student &a){
        cout<<"copy constructor"<<endl;
        name=a.name;
        age=a.age;
        gender=a.gender; 
    }
    ~student(){
        cout<<"Destructor called"<<endl;
    }
    // operator overloading
    bool operator == (student &a){
        if (name==a.name && age==a.age && gender==a.gender)
        {
            return true;
        }
        return false;
        
    }
    void setname(string s){
        name=s;
    }
    void getname(){
        cout<<name;
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
    student a("Raj kishore",45,1);
    student b;
    student c=a;
    // a.getname();
    // a.printinfo();
    if (c==a)
    {
        cout<<"same"<<endl;
    }
    else
    cout<<"Not same"<<endl;
return 0;
}