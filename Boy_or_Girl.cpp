#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int A[10];

    for(int i=0;i<5;i++){
        cin>>A[i];
    }
    //cin>>s;
    cout<<"Before sorting:"<<endl;
      for(int i=0;i<5;i++){
        cout<<A[i]<<" ";
    }

    sort(A,A+5);

   cout<<"After sorting:"<<endl;
      for(int i=0;i<5;i++){
        cout<<A[i]<<" ";
    }








}
