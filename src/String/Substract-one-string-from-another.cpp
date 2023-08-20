/*Author: Md Nurul Amin
Noakhali Science and Technology University*/

///remove all token(string) from text(string)

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

string removesub(string text, string token){
    map<int, int>mp;
    for(int i=0; i<=(text.size()-token.size()) ; i++){
        int cnt=0;
        for(int j=0; j<token.size(); j++){
            if(text[i+j]==token[j]){
                cnt++;
            }

            else break;
        }
        if(cnt==token.size()){
            mp[i]++;

        }
    }
    for(auto i:mp)cout<<i.first<<" "<<i.second<<endl;
    string ans;
    for(int i=0; i<text.size(); i++){
        if(mp[i]>0){
            i+=(token.size()-1);
            ans+=" ";
        }
        else ans+=text[i];
    }
    return ans;
}

void solve(){
    string s1,s2; cin>>s1>>s2;
    string f=removesub(s1, s2);
    cout<<f<<endl;
}

int main(){
    int t=1;
    //cin>>t;
    for(ll i=1; i<=t; i++){
        solve();
    }
}

