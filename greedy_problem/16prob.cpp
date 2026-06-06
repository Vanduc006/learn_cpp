#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int gcdd(int a, int b) {
    return b == 0 ? a : gcd(b, a%b);
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll p; ll q; cin >> p >> q;
    ll gcd = gcdd(p, q);
    p /= gcd;
    q /= gcd;

    ll num = p/q;

    while(p > 0) {
        if (q % p == 0) {
            cout << "1/" << q/p;
            break;
        } else {
            ll x = q/p+1;
            cout << "1/" << x << "+";

            p = p * x - q;
            q = q * x;
            
            ll g_new = gcdd(p, q);
            p /= g_new;
            q /= g_new;
        }
    }
}