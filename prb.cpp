#include <iostream>
using namespace std
/*int fun(int A[],int n);
;

int
main ()
{
  int i,p=0, n,test=3;
  int A[100];
  int number[100];

  cin >> n;
  
  do{
      for (i = 0; i < n; i++)
	  {
	  cin >> A[i];
	  }
	  
	 
	  number[p]=fun(A,n);
	   p++;
	  
	  
	  test--;
	}while (test!=0);
	
	cout<<"Now print:"<<endl;
	
	for(i=0;i<n;i++){
     cout<<number[i]<<" ";
     }
	
  cout<<endl;
 }
 
   int fun(int A[],int n)
   {
	  int i,max=A[0],number=0;
	  int largest,second;
	  
		
	  
	  /*for (i = 1; i < n; i++)
	  {
	     //cout << A[i] << " ";
	     if(max<A[i]){
	     	max=A[i];
		 }
	     
	  }
	  return max; */
	  
	 /* 
	if(A[0]<A[1]){ 
      largest = A[1];
      second = A[0];
   }
   else{ 
      largest = A[0];
      second = A[1];
   }
   for (int i = 2; i< n ; i ++) {
     
      if (A[i] > largest) {
         second = largest;
         largest = A[i];
      }
   
      else if (A[i] > second && A[i] != largest) {
         second = A[i];
      }
   }
   
   return second;
	  
	} */
	
	
	
	
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	cout << "The length of the array is " << size(arr);

	return 0;
}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
