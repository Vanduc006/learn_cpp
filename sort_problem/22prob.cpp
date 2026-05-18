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
    int count[10] = {0};
    for (int i=0; i < n; i++) {
        int x; cin >> x;
        while (x != 0) {
            count[x%10] = 1;
            x /= 10;
        }
    }

    for (int i=0; i < 10; i++) {
        if(count[i]) cout << i << " ";
    }
}