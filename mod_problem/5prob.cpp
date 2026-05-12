#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
ll mod=pow(10,9)+7;
ll fibo[1001];
int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    fibo[1]=1; fibo[2]=1;
    for (int i=3; i <= n; i++) {
        fibo[i-1] %= mod;
        fibo[i-2] %= mod;
        fibo[i] = 2*fibo[i-1]+3*fibo[i-2];
        fibo[i] %= mod;
    }
    cout << fibo[n];

}