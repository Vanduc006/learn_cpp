#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n;
int a[1001][1001];

void update(int i) {
    if (i%2==0) {
        // int j=0;
        for (int k=0; k < n; k++) {
            cout << a[i][k] << " ";
        }
    } else {
        // int j=n-1;
        for (int k=n-1; k >= 0; k--) {
            cout << a[i][k] << " ";
        }
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
    for (int i=0; i < n; i++) {
        for (int j=0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    // for (int i=0; i < n; i++) {
    //     for (int j=0; j < n; j++) {
            
    //     }
    // }
    for (int i=0; i < n; i++) {
        update(i);
        cout << endl;
    }
}