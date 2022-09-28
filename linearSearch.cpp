#include<iostream>
using namespace std;

void linearSearch(int a[] ,int n,int p){
	int temp= -1;
	for(int i=0;i<p;i++){
		if(a[i]== n){
			cout<<"Element found at location: "<<i<<endl;
			temp=0;
		}
	}
	if(temp == -1)
		cout<<"No element found"<<endl;
}

int main(){
	int x, k;
	cout<<"Enter the size of the array"<<endl;
	cin>>x;
	int arr[x];
	cout<<"Enter the elements of the array"<<endl;
	for(int i=0;i<x;i++){
		cin>>arr[i];
	}
	
	cout<<"Enter the element to be searched"<<endl;
	cin>>k;
	linearSearch(arr,k,x);
	 return  0;
}
