#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int A[100]={0};
    vector<int>v;
    int n;

    while(cin>>n)
    {
        if(A[n]==0)
        {
            v.push_back(n);
            A[n]=1;
        }
        else
        {
        A[n]=A[n]++;
        }
    }

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" "<<A[v[i]]<<endl;
    }

    return 0;
}
