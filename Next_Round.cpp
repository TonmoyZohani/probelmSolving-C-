#include<iostream>
using namespace std;
int main(){
	int A[100],n,p,i,count=0;
	cin>>n;
	cin>>p;
	
	for(i=0;i<n;i++){
		cin>>A[i];
	}
	
	//cout<<A[p-1];
	
	for(i=0;i<n;i++){
		if(A[p-1]==0){
			count=0;
		}
		else if(A[i]>=A[p-1]){
			count++;
		}
	}
	
	cout<<count;
}
