#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

using ll = long long;
bool compare(int x, int y) {
    return x > y;
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a+n, compare);
    // for (int x : a) cout << x << " ";
    int docung = a[0];
    int count=1;
    for (int i=1; i < n; i++) {
        if (docung - a[i] >= 0) {
            docung = min(docung-1, a[i]);
            count++;
        }
    }
    cout << count;

}