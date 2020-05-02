#include <bits/stdc++.h>
using namespace std;
# define M_PI 3.14159265358979323846
using ll = long long int;
const int MOD = 1e9 + 7;
int main()
{
    int n;
    cin>>n;
    map<int,int> mp;
    for(int i=0;i<n-1;i++)
    {
        int temp;
        cin>>temp;
        if(mp[temp]==0)
        {
            mp[temp]=1;
        }
        else
        {
            mp[temp]+=1;
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<mp[i]<<endl;
    }
}