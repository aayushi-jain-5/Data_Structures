#include<iostream>
using namespace std;

void selectionSort(int arr[], int x ){
	for(int i=0;i<x-1;i++){
		
		int min =i;
		
		for(int j=i+1;j<x;j++){ //check min element
			
			if(arr[j]<arr[min]){
				
				min=j;
			}
		}
		if(min!=i){ //swap
			int temp =arr[min];
			arr[min]= arr[i];
			arr[i]=temp;
		}
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
	selectionSort(myarr ,n); // Sorting actually happening
	
	cout<<"Sorted array"<<endl;
	for(int i=0;i<n;i++){
		cout<<myarr[i]<<" ";
	}
	return 0;
}
