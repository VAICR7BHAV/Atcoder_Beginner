#include <bits/stdc++.h>
using namespace std;
# define M_PI 3.14159265358979323846
using ll = long long int;
const int MOD = 1e9 + 7;
int main()
{
    int n,m;
    cin>>n>>m;
    int days_needed=0;
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin>>temp;
        days_needed+=temp;
    }
    if(days_needed>n)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<n-days_needed<<endl;
    }
    
}