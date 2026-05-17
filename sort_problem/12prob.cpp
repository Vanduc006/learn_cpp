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

    int n; int m;
    cin >> n >> m;
    int a[n]; int b[m];
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;

    // for (int x : a) cout << x;

    int i=0; int j=0;
    int count=0;
    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            i++;
        } else if (a[i] > b[j]) {
            count++;
            i++;
            j++;
        }
    }
    cout << count;
}