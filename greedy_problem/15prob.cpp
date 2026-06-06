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

    int s; int d; cin >> s >> d;

    int a[d] = {0};

    if (d * 9 < s) cout << -1;

    for (int i=d-1; i >= 0; i--) {
        if (s > 9) {
            a[i] = 9;
            s -= 9;
        } else {
            if (i == 0) {
                a[i] = s;
            } else {
                a[0] = 1;
                a[i] = s - 1;
                break;
            }
        }
    }

    for (int x : a) cout << x;

}