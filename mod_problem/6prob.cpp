#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll binpow(int a, int b) {
    if (b==0) {
        return 1;
    } 
    ll x = binpow(a, b/2);
    if (b%2==0) {
        return x * x;
    } else {
        return x * x + a;
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a; int b;
    cin >> a >> b;

    ll mod = pow(10,9)+7;
    a %= mod; b %= mod;
    ll value = pow(a,b);
    cout << value % mod;
}