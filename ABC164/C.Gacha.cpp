#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const int MOD = 1e9 + 7;
int main()
{
    int n;
    cin>>n;
    unordered_set<string> unique;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        unique.insert(s);
    }
    cout<<unique.size();   
}