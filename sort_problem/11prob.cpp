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

    int n; int m; cin >> n >> m;
    int b[n]; int c[m];
    for (int &x : b) cin >> x;
    for (int &x : c) cin >> x;

    int i=0; int j=0;
    while (i < n && j < m) {
        if (b[i] <= c[j]) {
            cout << "b" << i+1 << " "; 
            i++;
        } else {
            cout << "c" << j+1 << " ";
            j++;
        }
    }

    while (i < n) {
        cout << "b" << i+1 << " ";
        i++;
    }
    while (j < m) {
        cout << "c" << j+1 << " ";
        j++;
    }

}