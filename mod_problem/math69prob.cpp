#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; cin >> n;
    ll res = n;
    for (int i=2; i < sqrt(n); i++) {
        if (n%i==0) { // divisible
            int mu=0;
            while (n%i==0) {
                ++mu;
                n /= i;
            }
            if (mu%2==1) {
                res *= i;
            }
        }
    }
    if (n>1) res *= n;
    cout << res;
}