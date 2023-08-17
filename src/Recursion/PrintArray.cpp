
/*
Bismillahir Rahmanir Rahim
Author: Md Nurul Amin
Information and Communication Engineering, NSTU
*/

/// input and print array without loop;

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void input(ll a[], ll i, ll n){
    if(i==n-1){
        cin>>a[i];
        return;
    }
    cin>>a[i];
    input(a, i+1, n);
}

void printt(ll a[], ll i, ll n){
    if(i==n-1){
        cout<<a[i]<<endl;
        return;
    }
    cout<<a[i]<<" ";
    printt(a, i+1, n);
}

void solve()
{
    ll n; cin>>n;
    ll a[n];
    input(a, 0, n);
    printt(a, 0, n);


}

int main()
{

    ll t=1;
    //cin>>t;
    while(t--)
    {

        solve();
    }


}

