#include<bits/stdc++.h>
using namespace std;

void callbyref(int *a){
	*a = 23;
}
void callbyrefway2(int& a){
	a = 5;
}

int main(){

	int a = 10;
	callbyref(&a);
	cout<<a<<endl;

	callbyrefway2(a);
	cout<<a<<endl;

	return 0;
}
