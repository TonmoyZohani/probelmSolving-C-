#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int t,l;
    cin>>t;


    for(int i=1;i<=t;i++){
        cin>>l;

        double a,b,r,g;
        a=0.6*l;
        b=0.2*l;
        r= 3.1416 *b*b;
        g=(l*a)-r;
        cout<<fixed<<setprecision(2)<<r;
        cout<<' ';
        cout<<fixed<<setprecision(2)<<g<<endl;
    }
}
