#include<iostream>
#include<math.h>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,len=0,rem,sum=0;
    cin>>n;

    len=floor(log10(n)+1);

    while(n>0)
    {
        rem=n%10;
        sum=sum+pow(rem,len);
        n=n/10;
        cout<<sum<<" ";
    }

    if(n==sum)
    {
        cout<<"Armstrong"<<endl;
    }
    else
    {
        cout<<"Not Armstrong"<<endl;
    }
}
