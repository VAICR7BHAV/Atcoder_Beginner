#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const int MOD = 1e9 + 7;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int turn=0;//0 represents Takahashi's turn while 1 represent Aoki's turn
    while(true)
    {
        if(turn==0)
        {
            c-=b;
            if(c<=0)
            {
                cout<<"Yes";
                break;
            }
            turn=1;
        }
        if(turn==1)
        {
            a-=d;
            if(a<=0)
            {
                cout<<"No";
                break;
            }
            turn=0;
        }
    }
}