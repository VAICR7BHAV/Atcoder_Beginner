#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const int MOD = 1e9 + 7;
int main()
{
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.size();i++)
    {
        for(int j=1;j<=s.size()-i;j++)
        {
            string temp=s.substr(i,j);
            stringstream ss(temp);
            ll val;
            ss>>val;
            //cout<<temp<<" "<<val<<endl;
            if(val%2019==0)
            {
                //cout<<i<<" "<<j<<endl;
                count+=1;
            }
        }
    }
    cout<<count;
}