#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int partition(int a[], int l, int r) {
    int x = a[r]; // pivot
    int j=l-1;
    for (int i=l; i < r; i++) {
        if (a[i] <= x) {
            ++j;
            swap(a[i], a[j]);
        }
    }
    ++j;
    swap(a[j], a[r]);
    return j; // index of pivot
}

void quickSort(int a[], int l, int r) {
    if (l < r) {
        int p = partition(a, l, r);
        quickSort(a, l, p-1);
        quickSort(a, p+1, r);
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // quick sort
    // phan hoach Lomuto
    int n; cin >> n; 
    // cout << n;
    int a[n];
    for (int &x : a) cin >> x;

    quickSort(a, 0, n-1);
    for (int x : a) cout << x << " ";
}