#include<iostream>
using namespace std;

int main(){
    int size,i,j,count;
    cin>>size;
    int A[size];

    for(i=0;i<size;i++){
        cin>>A[i];
    }

    for(i=0;i<size;i++){
        count=0;
        for(j=0;j<size;j++){
            if(A[i]==A[j]){
                count++;
            }
        }
        if(count==1){
            cout<<A[i];
        }
    }
}
