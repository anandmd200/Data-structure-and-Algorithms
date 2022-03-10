#include<bits/stdc++.h>
using namespace std;

int main(){

	cout<<"bubble sort Algorithm:  "<<endl;
	int arr[] = {3,4,1,2,6,4,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}

	for(auto x : arr){
		cout<<x<<" ";
	}

	cout<<endl<<"Selection Sort Algorithm: "<<endl;
	for(int i = 0;i<n;i++){

		int min1 = i;
		for(int j =i; j<n; j++){
			if(arr[min1]>arr[j]){
				min1 = j;
			}
		}
		swap(arr[i],arr[min1]);
	}

	for(auto x : arr){
		cout<<x<<" ";
	}

	cout<<endl<<"Incertion Sort : "<<endl;


	return 0;
}
