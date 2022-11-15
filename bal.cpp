#include <iostream>  
using namespace std;  
void printArray(int arr[5]);  
int main()  
{  
        int arr1[5] = { 10, 20, 30, 40, 50 };    
        int arr2[5] = { 5, 15, 25, 35, 45 }; 
		int size=5;   
        printArray(arr1,size); //passing array to function    
        printArray(arr2);  
}  
void printArray(int arr[],int size)  
{  
    cout << "Printing array elements:"<< endl;  
    for (int i = 0; i < size; i++)  
    {  
                   cout<<arr[i]<<"\n";    
    }  
}
