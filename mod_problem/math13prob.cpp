#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int dem(int n, int m) {
    int count=0;
    for (ll i=m; i <= n; i += m) {
        ll j=i;
        while(j%m==0) {
            ++count;
            j /= m;
        }
    }
    return count;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; int m; cin >> n >> m;
    cout << dem(n, m);
}