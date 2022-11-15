#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

int main()
{
    char name[203] = "chocolate";
    char name2[203]= "choose";
    bool found = true;
    int c = 0;
    for(int i=0;i<strlen(name2);i++)
    {
        for(int j=0;j<strlen(name);j++)
        {
            if(name2[i]==name[j])
            {
                c++;
                break;
            }

        }
    }
    if(c==strlen(name2))
    {
        cout<<"In the String";
    }
    else{
        cout<<"Not in the string";
    }

    return 0;
}
