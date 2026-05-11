#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int a[200000];
int pre_a[200000];
int diff_a[200000] = {0};
// int pre_a[2000]

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; int k; int q;
    cin >> n >> k >> q;
    while(n--) {
        int left; int right;
        cin >> left >> right;
        diff_a[left] += 1;
        diff_a[right + 1] -= 1;
    }

    int sugar=0;
    for (int i=0; i < 200000; i++) {
        sugar += diff_a[i];
        if (sugar >= k) {
            a[i] = 1;
        } else {
            a[i] = 0;
        }
    }

    for (int i=0; i < 20000; i++) {
        pre_a[i] = pre_a[i-1] + a[i];
    }

    while(q--) {
        int count = 0;
        int left; int right;
        cin >> left >> right;
        // --left; --right;
        cout << pre_a[right] - pre_a[left-1] << endl;
    }
}