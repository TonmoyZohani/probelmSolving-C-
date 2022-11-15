#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    
    /*vector<int> vec;

    vec.push_back(10);
    vec.push_back(13);
    vec.push_back(15);

    for(auto i=vec.begin();i!=vec.end();i++){
        cout<<*i<<" ";
    }

    vec[0]=20;
    cout<<endl;

     for(auto i=vec.begin();i!=vec.end();i++){
        cout<<*i<<" ";
    }

    cout<<vec.size()<<endl;
*/

vector<int> vec;
int x,size;

cout<<"How many elements do you want to insert?"<<endl;
cin>>size;

for(int i=0;i<size;i++){
    cin>>x;
    vec.push_back(x);
}

cout<<"Before sorting:"<<endl;
for(auto i=vec.begin();i!=vec.end();i++){
    cout<<*i<<" ";
}

sort(vec.begin(),vec.end());

cout<<"\nAfter sorting"<<endl;
for(auto i=vec.begin();i!=vec.end();i++){
    cout<<*i<<" ";
}

if(vec.empty()){
    cout<<"The vector is empty."<<endl;
}else
{
    cout<<"\nThe vector is not empty"<<endl;
}

vec.resize(4);

for(auto i=vec.begin();i!=vec.end();i++){
    cout<<*i<<" ";
}

}