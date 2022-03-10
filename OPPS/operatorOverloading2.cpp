#include<bits/stdc++.h>
using namespace std;

class oprload{

	int a;
	public:
	oprload(int val){
		this->a = val;
	}
	 void operator + (oprload &obj){ 
		 int temp1 = this->a;
		 int temp2 = obj.a;
		 cout<<temp1-temp2<<endl;
	 }
		
};

int main(){

	oprload obj1(7),obj2(5);
	obj1.operator+(obj2);

	return 0;

}