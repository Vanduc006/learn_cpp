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

    int n; int s; int m; cin >> n >> s >> m;
    // du tru cho ngay chu nhat
    int tong_an = s * m;

    int tong_di_cho = (s - s/7) * n;
    if (tong_di_cho >= tong_an) {
        cout << (int) (tong_an/n); 
    } else cout << -1;
}