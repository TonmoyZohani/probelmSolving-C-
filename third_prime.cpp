#include<iostream>
using namespace std;
int main(){

    int prime=1,count=1;
    while(count<3){
        if(prime%2==0){
            count++;
        }
        prime++;
    }

    cout<<prime;
}
