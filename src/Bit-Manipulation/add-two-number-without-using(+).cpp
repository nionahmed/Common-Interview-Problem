/*Author: Md Nurul Amin
Noakhali Science and Technology University*/

///Add two numbers without using + operator

#include<bits/stdc++.h>
using namespace std;



typedef long long ll;

int sum(int a, int b){
    if(b==0)return a;
   int add=a^b;
   int carry=(a&b)<<1;
   sum(add,carry);

}


void solve(){
    int a,b; cin>>a>>b;
    cout<<sum(a,b)<<endl;
}

int main(){
    int t=1;
    //cin>>t;
    for(ll i=1; i<=t; i++){
        solve();
    }
}

