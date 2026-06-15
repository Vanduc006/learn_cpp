#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int merge(int a[], int left, int mid, int right) {
    vector<int> v_left(a+left, a+mid+1); // [l,m]
    vector<int> v_right(a+mid+1, a+right+1); // [m+1,r]
    int i=0; int j=0;
    int len1= v_left.size();
    int len2= v_right.size();
    int ans=0;

    while (i < len1 && j < len2) {
        if (v_left[i] > v_right[j]) {
            a[left] = v_right[i];
            ans += v_left.size()-i;
            j++;
            ++left;
        } else {
            a[left] = v_left[i];
            // ans += j+1;
            i++;
            ++left;
        }
    }

    while (i < len1) {
        a[left] = v_left[i];
        i++;
        ++left;
        // ans += len2;
    }

    while (j < len2) {
        a[left] = v_right[j];
        j++;
        ++left;
    }
    return ans;
}

int mergeSort(int a[], int l, int r) {
    if (l < r) {
        int ans=0;
        int mid = (l+r)/2;
        ans += mergeSort(a, 1, mid-1);
        ans += mergeSort(a, mid+1, r);
        ans += merge(a, l, mid, r);
        return ans;
    }
    return 0;
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

    cout << mergeSort(a, 0, n-1) << endl;
}