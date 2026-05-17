#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int cnt[1000005];
int n; 
ll mod = pow(10,9)+7;

void dem_uoc(int n) {
    for (int i=0; i < sqrt(n); i++) {
        while(n%i==0) {
            cnt[i]++;
            n /= i;
        }
    }
    if (n>1) cnt[n]++;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i=0; i < n; i++) {
        int value; cin >> value;
        dem_uoc(value);
    }

    ll kq=1;
    for (int i=0; i < pow(10,6); i++) {
        if (cnt[i] != 0) {
            kq *= cnt[i] + 1;
            kq %= mod;
        }
    }

    cout << kq;
    
}