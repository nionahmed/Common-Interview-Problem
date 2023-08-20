/*Author: Md Nurul Amin
Noakhali Science and Technology University*/

///check multiple of a and b is divisible by 10 or not. you can not use long long data type.
/// a and b can be largest number of integer.

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isdivide(int a, int b){
    map<int , int>mp;
    if(a%2==0)mp[2]++;
    if(a%5==0)mp[5]++;
    if(b%2==0)mp[2]++;
    if(b%5==0)mp[5]++;

    if(mp[2]>0 and mp[5]>0){
        return true;
    }
    return false;
}

void solve(){
    int a,b; cin>>a>>b;

    if(isdivide(a,b))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    int t=1;
    //cin>>t;
    for(ll i=1; i<=t; i++){
        solve();
    }
}


