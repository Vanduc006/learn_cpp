#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int n;
int a[10005];
bool final = false;

void generate() {
    int i=n;
    if (a[0] == n && a[i] == 1) {
        final = true;
    }
    while(i >= 1 && a[i] > i) {
        i--;
    }
    int tmp=a[i];
    a[i] = a[i-1];
    a[i-1] = tmp;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for (int i=1; i <= n; i++) {
        cin >> a[i];
    }
    generate();
    if (final) {
        for (int i=1; i <= n; i++) cout << i << " ";
    } else {
        for (int i=1; i <= n; i++) cout << a[i] << " ";
    }
}