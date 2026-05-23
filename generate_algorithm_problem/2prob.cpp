#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int n; int k;
int a[100005];
bool final = false;

void generate() {
    int i=k;
    // cout << a[k] << endl;
    if (a[i] == n) {
        final = true;
    }
    while (i >= k && a[i] > n) {
        i--;
    }
    a[i]++;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    for (int i=1; i <= k; i++) {
        int value; cin >> value;
        a[i] = value;
    }
    generate();
    if (final) {
        for (int i=1; i <= k; i++) cout << i << " ";
    } else {
        // cout << "res" << endl;
        for (int i=1; i <= k; i++) cout << a[i] << " ";
    }
    
}