#include <bits/stdc++.h>

using namespace std;
# define M_PI 3.14159265358979323846
# define epsi 1e-9
# define F first
# define S second
# define REP(i,a,b) for(int i=a;i<=b;i++)
using ll = long long int;
const int MOD = 1e9 + 7;
int main()
{
    int k;
    cin>>k;
    string s;
    cin>>s;
    if(s.length()<=k)
    {
        cout<<s;
    }
    else
    {
        string temp=s.substr(0,k);
        cout<<temp<<"...";
    }
    
}