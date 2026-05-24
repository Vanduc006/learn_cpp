#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int n; int k;
int a[10005];
bool final=false;

void create() {
    for (int i=1; i <= n; i++) a[i]=0;
}

void generate() {
    int i=n;
    while (i >= 1 && a[i] == 1) {
        a[i]=0;
        i--;
    } if (i == 0) {
        final=true;
    } else {
        a[i]=1;
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    create();
    int b[n];
    for (int i=1; i <= n; i++) cin >> b[i];

    ll ans = LONG_MAX;
    while(!final) {
        ll s1=0;
        ll s2=0;
        for (int i=1; i <= n; i++) {
            if (a[i] == 1) s1 += b[i];
            else s2 += b[i];;
        }
        ans = min(ans, abs(s1-s2));
        generate();
    }
    cout << ans;
}