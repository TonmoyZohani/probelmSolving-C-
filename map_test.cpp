#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main() {

    map<string,int>m;
    map<string,int>::iterator it;
    m["Tonmoy"]=14;

    string name;
    int number;
   // cin>>name>>number;

    //cin>>name;
    //cin>>number;



    m[name]=number;
    it=m.find(name);
    //m.insert(make_pair(name,number));

    cout<<it->second;


}

