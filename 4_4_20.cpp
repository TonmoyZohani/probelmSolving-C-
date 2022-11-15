#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
 string str;
 string container[100];
 int p=0;
 int i=0;
 do{
 getline(cin,str);
 /*int cnt = 0;
 for(int i=0; str[i]; i++)
 	cnt++;
 	if(cnt<=10){
 		cout<<str;
 		
	 }
	else{
		cout<<str[0]<<cnt-2<<str[cnt-1]<<" ";
	} */
 	
 //cout << cnt << endl; 
 

 container[p]=str;
  p++;
 
}while(p<3);


for (i = 0; i < 3; i++){
	
	//container[];
	
	int cnt;
	//cnt=container[i].size();
	cout<<container[i].size()<<" ";
	//cout<<"Bal"<<" ";
	
	//cout<<container[1].size()<<" ";
	
	
 for(int j=0; container[i][j]; i++){
 	//cnt++;
 	
 	if(container[i].size()<=10){
 		cout<<container[i];
 		
	 }
	else{
		cout<<container[i][0]<<container[i].size()-2<<container[i][container[i].size()-1]<<" ";
	} 
} 


        //cout << container[i] << "\n"; 
   } 
   
   

//cout<<container[1]; */

} 


