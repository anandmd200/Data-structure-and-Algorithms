#include<bits/stdc++.h>
using namespace std;

class functionOverloading{

    public:
    int getsum(int a, int b, int c){
        return a + b + c;
    }

    double getsum(double a, double b){
        return a + b;
    }

    string getsum(string a,string b){
        return a + " "+ b;
    }

};

int main(){

    functionOverloading f1;
    cout<<f1.getsum(1,2,3)<<endl;
    cout<<f1.getsum(3.9,5.6)<<endl;
    cout<<f1.getsum("hello","world")<<endl;

    return 0;
}

