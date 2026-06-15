#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int F[100];

string find(int n, int k) {
    if (n == 1) return "28tech";
    if (n == 2) return "C++";
    if (n == 3) {
        if (k == 1) return "DSA";
        if (k == 2) return "JAVA";
    }
    if (k <= F[n-3]) {
        return find(n-3, k);
    } else if (k <= F[n-3] + F[n-2]) {
        return find(n-2, k-F[n-3]);
    } else {
        return find(n-1, k-F[n-3]-F[n-2]);
    }

}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    F[1] = 1; 
    F[2] = 1; 
    F[3] = 2;
    for (int i=4; i <= 60; i++) {
        F[i] = F[i-3] + F[i-2] + F[i-1];
    }

    int t; cin >> t;

    while (t--) {
        int n; int k;
        cin >> n >> k;
        cout << find(n, k) << endl;
    }
}