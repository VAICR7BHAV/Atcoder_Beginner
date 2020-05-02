#include <bits/stdc++.h>
using namespace std;
# define M_PI 3.14159265358979323846
using ll = long long int;
const int MOD = 1e9 + 7;
int main()
{
    int n;
    cin>>n;
    ll sum=0;
    for (int i = 1; i < n+1; i++)
    {
        if(i%3!=0 && i%5!=0)
        {
            sum+=i;
        }
    }
    cout<<sum;
}