#include<bits/stdc++.h>
using namespace std;


class employee{

    public:
    virtual void sayhi(){
        cout<<"Hi from parent Class"<<endl;
    }
};

class overriding : public employee{

    public:
    void sayhi(){
        cout<<"Hi from child class"<<endl;
    }
};

int main(){

    employee *e1;
    overriding obj;

    e1 = &obj;
    e1->sayhi();

    return 0;
}