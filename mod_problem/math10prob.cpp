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

    int n; cin >> n;
    ll mod = pow(10,9)+7;
    ll uoc = 1;

    while(n--) {
        int p; int e;
        cin >> p >> e;
        e %= mod; 
        uoc *= e + 1;
        uoc %= mod;
    }

    cout << uoc;
}