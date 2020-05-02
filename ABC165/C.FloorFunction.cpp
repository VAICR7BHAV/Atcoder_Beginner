#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const int MOD = 1e9 + 7;
int main()
{
    ll A,B,N;
    cin>>A>>B>>N;
    ll x=min(B-1,N);
    cout<<floor(A*x/B)-A*floor(x/B)<<endl;
}