#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const int MOD = 1e9 + 7;
int main()
{
    int x;
    cin>>x;
    ll n=1;
    ll p=100;
    while(true)
    {
        //double a=100*pow(1.01,n);
        double ci=p/100;
        p+=ci;
        if(p>=x)
        {
            cout<<n<<endl;
            break;
        }
        n+=1;
    }
}
