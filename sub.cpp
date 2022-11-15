#include<iostream>
using namespace std;
int main(){

    int number,c,in=0;
    cin>>number>>c;

    while(in<c){
        if(number%10!=0){
            number-=1;
        }else
        {
            number=number/10;
        }
        in++;
    }

    cout<<number;


}