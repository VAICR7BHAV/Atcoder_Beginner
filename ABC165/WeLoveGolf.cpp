#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const int MOD = 1e9 + 7;
int main()
{
    int k;
    cin>>k;
    int a,b;
    cin>>a>>b;
    bool found=false;
    for(int i=a;i<=b;i++)
    {
        if(i%k==0)
        {
            found=true;
            break;
        }
    }
    if(found)
    {
        cout<<"OK"<<endl;
    }
    else
    {
        cout<<"NG"<<endl;
    }
    
}
