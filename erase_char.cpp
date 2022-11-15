#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string str;
	char c;
	getline(cin,str);
	cout<<str<<endl;
	
	cin>>c;
	cout<<endl;
	str.erase(remove(str.begin(),str.end(), c), str.end());
	
	cout<<str;
	
}
	
