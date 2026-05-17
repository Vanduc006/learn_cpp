#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

using ll = long long;

bool binary_s(int a[], int l, int r, int x) {
    while (l <= r) {
        int mid = (l+r)/2;
        if (a[mid] == x) return true;
        else if (a[mid] > x) r = mid - 1;
        else l = mid + 1;
    }
    return false;
}


// first index of x in array
int firstPost(int a[], int n, int x) {
    int l=0; int r=n-1; int res = -1;
    while (l <= r) {
        int mid = (l+r)/2;
        if (a[mid] == x) {
            res = mid;
            r = mid - 1;
        } else if (a[mid] > x) r = mid - 1;
        else l = mid + 1;
    }
    return res;
}

// last index of x in array 
int lastPost(int a[], int n, int x) {
    int l=0; int r=n-1; int res = -1;
    while (l <= r) {
        int mid = (l+r)/2;
        if (a[mid] == x) {
            res = mid;
            l = mid + 1;
        } else if (a[mid] > x) r = mid - 1;
        else l = mid + 1;
    }
    return res;
}

// first index of element >= x
int lower(int a[], int n, int x) {
    int res = -1;
    int left = 0, right = n - 1;
    while(left <= right) {
        int mid = (left + right) / 2;
        if(a[mid] >= x) {
            res = mid;
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    return res;
}

// first index of element >= x
int upper(int a[], int n, int x) {
    int res = -1;
    int left = 0, right = n - 1;
    while(left <= right) {
        int mid = (left + right) / 2;
        if(a[mid] >= x) {
            res = mid;
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return res;
}


int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Binary search
    // Must sort before search // O(NlogN)
    // Search in range [Left, Right]
    // mid = (left + right)/2
    // mid = left + (right-left)/2

    // Compare
    //  - X = a[mid]
    //  - X > a[mid], left = mid + 1
    //  - X < a[mid], right = mid - 1
    int a[] = {10,11,2,3,7,9,323,658,2343,9898,234234,76867,8,3423424,4545,543};

    int n = 0;
    for (int x : a) n++;
    sort(a, a+n);
    cout << a[n-1] << endl;

    cout << binary_s(a, 0, n, 3423424) << endl;

    // with duplicate value like {1,1,2,2,2,2,1,1}
    // firstPos, lastPos
    // upper, lower

    cout << "First index : " << firstPost(a, n, 3423424) << endl;
    cout << "Last index : " << lastPost(a, n, 3423424) << endl;  
    cout << lower(a, n, 3423424) << endl;
    cout << upper(a, n , 3423424) << endl;

    int *pos = lower_bound(a, a+n, 3423424);
    cout << *pos << endl;
    cout << pos - a << endl; // index, if not found return a + n

    // Binary search on answer 
}