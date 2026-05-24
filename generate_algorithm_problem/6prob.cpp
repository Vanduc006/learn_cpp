#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

using ll = long long;
int n; 
bool final=false;
vector<vector<int>> v;
vector<int> a;

void generate() {
    int i=n-2;
    while (i >= 0 && a[i] > a[i+1]) {
        i--;
    } if (i < 0) {
        final=true;
    } else {
        // a[j] nho nhat ma > a[i]
        int j=n-1;
        while (a[i] > a[j]) --j;
        swap(a[i], a[j]);
        // xep tang dan tu i+1, n;
        sort(a.begin()+i+1, a.end());
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

    for (int i=1; i <= n; i++) a.push_back(i);

    while (!final) {
        v.push_back(a);
        generate();
    }

    for (int i=v.size()-1; i >= 0; i--) {
        for (int x : v[i]) cout << x << " ";
        cout << endl;
    }
}