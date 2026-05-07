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

    // Mang cong don (tien to) giup tinh sum tu left -> right

    // 1D array
    // F[0] = A[0]; F[i] = F[i-a] + A[i], i > 0
    int n; cin >> n;
    int a[] = {1,2,3,4,5,6,7,8};
    int pre[n];
    for (int i=0; i < n; i++) {
        if (i == 0) {
            pre[i] = a[i];
        } else pre[i] = pre[i-1] + a[i];
    }

    // 2D array
    // f[0][0] = a[0][0]
    // f[i][j] = f[i-1][j] + f[i][j-1] - f[i-1][j-1] + a[i][j]
    // top - down ,left - right


}