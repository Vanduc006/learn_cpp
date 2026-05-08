#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int num_sum(int n) {
    int sum=0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool cmp(int x, int y) {
    if (num_sum(x) == num_sum(y)) {
        return x < y;
    }
    return num_sum(x) < num_sum(y);
}

using ll = long long;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int a[n];
    for (int i=0; i < n; i++) cin >> a[i];
    sort(a, a+n, cmp);

    for (int x : a) cout << x << " ";
}