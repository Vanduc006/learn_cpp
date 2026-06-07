#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll f[100]; // danh dau so ki tu

// di tuoi tren xuong duoi
char find(int n, ll k) {
    cout << n << " " << k << endl;
    if (n == 1) return 'A';
    if (n == 2) return 'B';
    if (k <= f[n-2]) {
        return find(n-2, k);
    } else {
        return find(n-1, k-f[n-2]);
    }
}
// n, k recursive
// 5 3
// 4 1
// 2 1

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    f[1] = 1; f[2]=1;
    for (int i=3; i <= 92; i++) {
        f[i]=f[i-1] + f[i-2];
    }

    int n; ll k; cin >> n >> k;
    cout << find(n, k);
}