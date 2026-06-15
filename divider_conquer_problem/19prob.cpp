#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void merge(int a[], int left, int mid, int right) {
    vector<int> v_left(a+left, a+mid+1); // [l,m]
    vector<int> v_right(a+mid+1, a+right+1); // [m+1,r]
    int i=0; int j=0;
    int len1= v_left.size();
    int len2= v_right.size();

    while (i < len1 && j < len2) {
        if (v_left[i] <= v_right[j]) {
            a[left] = v_left[i];
            i++;
            ++left;
        } else {
            a[left] = v_right[j];
            j++;
            ++left;
        }
    }

    while (i < len1) {
        a[left] = v_left[i];
        i++;
        ++left;
    }

    while (j < len2) {
        a[left] = v_right[j];
        j++;
        ++left;
    }

}

void mergeSort(int a[], int l, int r) {
    if (l < r) {
        int mid = (l+r)/2;
        mergeSort(a, 1, mid-1);
        mergeSort(a, mid+1, r);
        merge(a, l, mid, r);
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // merge sort
    int n; cin >> n;
    int a[n];
    for (int &x: a) cin >> x;

    mergeSort(a, 0, n-1);
    for (int x : a) cout << x << " ";
}