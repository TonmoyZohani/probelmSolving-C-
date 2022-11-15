#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  
  int arr[100],size,i;
  cin>>size;
  
  for(i=0;i<size;i++){
      cin>>arr[i];
  }
  
  sort(arr, arr + size, greater<int>()); 
  
  for(i=0;i<size;i++){
      cout<<arr[i]<<" ";
  }
  
  cout<<"\nPrint the third maximum number:"<<endl;
  cout<<arr[3];
  
    
}
