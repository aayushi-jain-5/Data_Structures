#include<iostream>
using namespace std;

void insertionSort(int arr [], int x){
	int j=0;
	int key;
	
	for(int i=0;i<x;i++){
		key = arr[i]; //picking the element
		j= i-1; 
		while(j>=0 && arr[j] > key){
			arr[j+1]= arr[j];
			j=j-1;
		}
		arr[j+1] = key;
	}
}

int main(){
	int n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	int myarr[n];
	cout<<"Enter the elements of the array"<<endl; //array input
	for(int i=0;i<n;i++){
		cin>>myarr[i];
	}
	
	cout<<"Unsorted array"<<endl;
	for(int i=0;i<n;i++){
		cout<<myarr[i]<<" ";
	}
	cout<<endl;
	insertionSort(myarr ,n); // Sorting actually happening
	
	cout<<"Sorted array"<<endl;
	for(int i=0;i<n;i++){
		cout<<myarr[i]<<" ";
	}
	
	return 0;
}
