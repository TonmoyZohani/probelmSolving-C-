#include<iostream>
using namespace std;
int main(){
	
	int A[100],n,i,j,temp;
	cout<<"Enter the number of the elements:"<<endl;
	cin>>n;
	cout<<"Enter the elements:";
	for(i=0;i<n;i++){
		cin>>A[i];
	}
	
	/*cout<<"Element before sorting:"<<endl;
	for(i=0;i<n;i++){
		cout<<A[i]<<" ";
	} */
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(A[j]>A[j+1]){
				temp=A[j+1];
				A[j+1]=A[j];
				A[j]=temp;
			}
		
		}
	}
	
	/*
	cout<<"Element after sorting:"<<endl;
	for(i=0;i<n;i++){
		cout<<A[i]<<" ";
	} */
	
	cout<<"The second largest number:"<<A[n-2]<<endl;
	cout<<"The second smallest number:"<<A[1]<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
