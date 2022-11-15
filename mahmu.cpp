#include<iostream>

#include<math.h>

#include<algorithm>

using namespace std;

int main()

{

    int ar[100009]= {0},m,n,i,j,c=0;

    while(cin>>n)

    {

        c=0;

        for(i=0; i<n; i++)

            cin>>ar[i];

        sort(ar,ar+n);

        for(i=0; i<n-2; i++)

            if(ar[i]+ar[i+1]>ar[i+2])

            {

            c=1;break;

            }

        if(c==1)

            cout<<"YES"<<endl;

        else

            cout<<"NO"<<endl;

    }

    return 0;

}
