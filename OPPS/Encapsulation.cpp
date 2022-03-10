#include<bits/stdc++.h>
using namespace std;

class student{

    string name;
    int age;

    public:
    string getName(){
        return this->name;
    }
    int getage(){
        return age;
    }
    void setNameAndAge(string name, int age){
        this->name = name ;
        this->age = age;
    }
};

int main(){

    student s1;
    s1.setNameAndAge("Mohan",22);
    cout<<"Name of Student is : "<<s1.getName()<<endl;

    return 0;
}