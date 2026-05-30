#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int n;
int a[10005];
// Hoan vi
int used[10005];
// void bactracking(int i) {
//     for (int j=1; j <= n; j++) {
//         if (used[j] == 0) {
//             a[i]=j;
//             used[j]=1;
//             if (i == n) {
//                 for (int k=1; k <= n; k++) cout << a[k] << " ";
//                 cout << endl;
//             } else {
//                 backtracking(i+1);
//             }
//             used[j]=0;
//         }
//     }
// }

// X[i] ? Eg 01
// To hop n, k : j=x[i-1]+1 ; j <= n-k+i
void backtracking(int i) {
    for (int j=0; j <= 1; j++) {
        a[i] = j;
        if (i == n) {
            for (int k=1; k <= n; k++) {
                cout << a[k] << " ";
            }
            cout << endl;
        } else {
            backtracking(i+1);
        }
    }
}

// n=3
// backtracking(1)
// ├── j = 0
// │   └── backtracking(2)
// │   ├── j = 0
// │   │   └── backtracking(3)
// │   │   ├── j = 0
// │   │   │   => 0 0 0
// │   │   ├── j = 1
// │   │   │   => 0 0 1
// │   ├── j = 1
// │   │   └── backtracking(3)
// ...

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Backtracking
    // X[n] = {x1, x2, x3, ...}
        // Check all valid for x1 

    n=2;
    backtracking(1);

    // nhanh can
    // else if (d + (n-i+1)*cmin < ans)

}