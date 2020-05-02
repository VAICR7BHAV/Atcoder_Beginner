#include <bits/stdc++.h>
#include<iostream>
using namespace std;
# define M_PI 3.14159265358979323846
using ll = long long int;
const int MOD = 1e9 + 7;
int gcd(int a, int b) 
{ 
   if (b == 0) 
      return a; 
   return gcd(b, a % b);  
} 
int main()
{
    int k;
    cin>>k;
    ll sum=0;
    for(int i=1;i<=k;i++)
    {
        for(int j=1;j<=k;j++)
        {
            for(int r=1;r<=k;r++)
            {
                sum+=gcd(i,gcd(j,r));
            }
        }
    }
    cout<<sum;
}