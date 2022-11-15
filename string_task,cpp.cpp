#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string str;
	char c;
	int i,count=0;
	getline(cin,str);
	//cout<<str;
	
	for(i=0;str[i];i++){
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||  str[i] == 'o' || str[i] == 'u' ||str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||  str[i] == 'O' || str[i] == 'U'){
			c=str[i];
			str.erase(remove(str.begin(),str.end(), str[i]), str.end());
			//cout<<str;
		}
	}
	
	cout<<str;
	
	for(i=0;str[i];i++){
		if(str[i]>=65 && str[i]<=92){
			str[i]=str[i]+32;
	}
}

	for(i=0;str[i];i++){
		cout<<"."<<str[i];
    }

	
	
	//cout<<str;
	//cout<<count;	
	
	
	
	
	
	
	
	
}
