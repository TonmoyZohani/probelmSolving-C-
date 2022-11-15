#include<iostream>
using namespace std;
int main(){
	string str[100];
	int i=0,p=1;
    
	do{
		p++;
		getline(cin,str[i]);
		if(str[i]==" *"){
			break;
		}else if(str[i]==" Hajj") {
			
			str[i]={"Hajj-e-Akbar"};
		}else if(str[i]==" Umrah"){
			str[i]={"Hajj-e-Ashghar"};
		}
		i++;
		
	}while(str[i]!=" *");
	
	for (int i = 0; i <= p; i++)
	if(str[i]!=" *"){
        cout << str[i] << "\n"; 
   }	
}


