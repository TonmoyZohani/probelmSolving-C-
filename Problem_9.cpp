#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int A[10];
	int n,i;
	cin>>n;
	
	for(i=0;i<n;i++){
		cin>>A[i];
	}
	sort(A,A+n);
	
	for(i=0;i<n;i++){
		if(A[i]!=i){
			cout<<A[i-1];
			break;	
		}
      }
}
