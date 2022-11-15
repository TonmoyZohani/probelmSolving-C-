#include<iostream>
using namespace std;
int main(){
	int A[100];
	int i,n,l,s,m,sm;
	
	cout<<"Enter the number of elements:"<<endl;
	cin>>n;
	
	cout<<"Enter the elements:"<<endl;
	for(i=0;i<n;i++){
		cin>>A[i];
	}
	
	if(A[0]<A[1]){
		l=A[1];
		s=A[0];
	}else{
		l=A[0];
		s=A[1];
	}
	
	for(i=2;i<n;i++){
		if(A[i]>l){
			A[i]=l;
			s=l;
		}else if(A[i]>s &&A[i]<l){
			s=A[i];
		}
	}
	cout<<"The second largest number is:"<<s<<endl;
	
	if(A[0]<A[1]){
		m=A[0];
		sm=A[1];
	}else{
		m=A[1];
		sm=A[0];
	}
	
	for(i=2;i<n;i++){
		if(A[2]<m){
			m=A[2];
			sm=m;
		}else if(A[i]>sm && A[i]<m){
			sm=A[i];
		}
	}
	
	cout<<"The second smallest number is:"<<sm<<endl;
	
	
}
