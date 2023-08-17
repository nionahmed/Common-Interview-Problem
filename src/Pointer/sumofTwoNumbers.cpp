/*
Bismillahir Rahmanir Rahim
Author: Md Nurul Amin
Information and Communication Engineering, NSTU
*/

/// find some of two number using pointers and passing pointers as parameter

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int func(int *ptr1, int *ptr2){
    return *ptr1+*ptr2;
}

void solve()
{
    int *p1, *p2;
    int a=10;
    int b=15;
    p1=&a;
    p2=&b;
    //cout<<*p1+*p2<<endl;
    cout<<func(p1, p2)<<endl;;

}

int main()
{

    int t=1;
    //cin>>t;
    while(t--)
    {

        solve();
    }

    return 0;
}


