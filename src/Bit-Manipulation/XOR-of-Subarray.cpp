
/*
Bismillahir Rahmanir Rahim
Author: Md Nurul Amin
Information and Communication Engineering, NSTU
*/

///Find subarray xor. 10^5 query. each query should be done in O(1) time.

#include <bits/stdc++.h>
using namespace std;

int bit[100005][33];
void solve()
{
    int n; cin>>n;
    int a[n];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

    for(int i=1; i<=n; i++){
        int k=a[i];
        int j=1;
        while(k>0){
           int rem=k%2;
           bit[i][j]+=(bit[i-1][j]+rem);
           j++;
           k/=2;
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=8; j++){
            cout<<bit[i][j]<<" ";
        }
        cout<<endl;
    }
    int query; cin>>query;
    while(query--){
        int l,r; cin>>l>>r;
        int ans=0;
        for(int i=1;i<=32; i++){
            if((bit[r][i]-bit[l-1][i])%2==1){
                int jog=pow(2,i-1);
                ans+=jog;
            }
        }
        cout<<ans<<endl;
    }

}

int main()
{

    int t=1;
    //cin>>t;
    while(t--)
    {

        solve();
    }


}


