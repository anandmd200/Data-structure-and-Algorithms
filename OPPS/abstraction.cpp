#include<bits/stdc++.h>
using namespace std;


class abstractEmployee{
    
    virtual void getpromotion() = 0;
};

class employee : abstractEmployee{

    int age;
    string name;

    public:

    void setdata(int x , string Name){

        age = x;
        name = Name;
    }

    void getpromotion(){
        if(age > 30){
            cout<<"Congrechulations You got promoted"<<endl;
        }else{
            cout<<"Sorry! Your age is less then the requirement!"<<endl;
        }
    }

};

int main(){

    employee e1;
    e1.setdata(31,"Amamn");
    e1.getpromotion();

    return 0;
}