#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll N=300;

int sum(int n){
    if(n==0) return n;
    int ans=sum(n-1);
    return ans+n;

}

void solve()
{
    ll n; cin>>n;
    cout<<sum(n)<<endl;

}

int main()
{
    ll t=1;
    cin>>t;
    for(ll i=1; i<=t; i++)
    {
        //cout<<"Case "<<i<<":"<<endl;
        solve();
    }
    return 0;
}
