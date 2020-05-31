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
    int n;
    cin>>n;
    int rem=n%10;
    if(rem==2 || rem==4 || rem==5 || rem==7 || rem==9)
    {
        cout<<"hon";
    }
    else if(rem==0 || rem==1 || rem==6 || rem==8)
    {
        cout<<"pon";
    }
    else
    {
        cout<<"bon";
    }
    
}