#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    long long n;
    int len;
    cin>>n;

    len=floor(log10(n) + 1);
    cout << "Number of digits : " <<len;
    return 0;
}
