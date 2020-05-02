#include <bits/stdc++.h>
using namespace std;
# define M_PI 3.14159265358979323846
using ll = long long int;
const int MOD = 1e9 + 7;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<3;i++)
    {
        if(s[i]=='7')
        {
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
}