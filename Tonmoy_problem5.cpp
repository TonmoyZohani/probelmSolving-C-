#include <iostream>
#include <string>
using namespace std;
 
int main()
{
 int n,p=0,i=0;
 string str;
 string container[100];
 cin>>n;
 
 do{
    getline(cin,str);
    container[p]=str;
    p++;
 }while(p<=n);

cout<<endl;

for (i = 0;i<p; i++){
	
	for(int j=0; container[i][j]; i++){
 	
 	if(container[i].size()<=10){
 		cout<<container[i]<<endl;
 	}
	else{
		cout<<container[i][0]<<container[i].size()-2<<container[i][container[i].size()-1]<<endl;
	} 
   } 

} 
   
} 

