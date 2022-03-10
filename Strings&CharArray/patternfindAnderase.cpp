#include<bits/stdc++.h>
using namespace std;


int main(){

    string str = "Hi my work is almost done work is not a work but it is a fun work";
    string part = "works";

    cout<<"Part is found on index : "<<str.find(part)<<endl;

    // while(!str.empty() && str.find(part)<str.size()){
    //     str.erase(str.find(part),part.size()+1);
    // }
    // cout<<str<<endl;

    return 0;
}