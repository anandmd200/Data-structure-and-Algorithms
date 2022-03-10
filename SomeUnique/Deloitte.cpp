#include<bits/stdc++.h>
using namespace std;

class area{
  public:
      int length;
      int breadth;
};

int main(){

    int n;
    cin>>n;

    area *temp=new area[n];

    for(int i=0;i<n;i++){
	  cin>>temp[i].length>>temp[i].breadth;

    }
    int *Array=new int[n];
    for(int i=0;i<n;i++){
        Array[i]=temp[i].length*temp[i].breadth;
    }

    int minArea=INT_MAX;
    int index1=0,index2=0;
	
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
        {
            if(abs(Array[i]-Array[j])<minArea)
            {
                minArea=abs(Array[i]-Array[j]);
                index1=i;
                index2=j;
            }
        }
    }

	cout<<"output is: "<<endl; 
    cout<<temp[index1].length<<" "<<temp[index1].breadth<<endl;
    cout<<temp[index2].length<<" "<<temp[index2].breadth<<endl;

	return 0;
}