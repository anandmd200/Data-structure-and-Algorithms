#include<bits/stdc++.h>
using namespace std;

class hero{
    int health;
    char level;

    public:
    static int timetocomplete;

    // an static method can conly be access static member only
    static int method(){
        return timetocomplete;
    }
};

int hero :: timetocomplete = 5;

int main(){

    //accessing static member without using object
    cout<<hero::timetocomplete<<endl;

    // Accessing static method without using object
    cout<<hero::method()<<endl;


    return 0;

}