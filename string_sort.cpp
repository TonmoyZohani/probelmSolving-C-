#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str[]={"Anan","Tonmoy","Inan","Silmun"};

    sort(str,str+4);

    for(int i=0;i<4;i++){
        cout<<str[i];
    }
}

