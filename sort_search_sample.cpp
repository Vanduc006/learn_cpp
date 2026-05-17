#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

using ll = long long;

bool compare(int x, int y) {
    return x > y; // giam dan
}

int tong(int x) {
    int sum=0;
    while (x!=0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // sort() : tim sort = quick sort + heap sort

    // Array
    int arr[] = {1,5,2,3,4,5,6,7,8,9,10};
    int n = 11;
    sort(arr, arr+n); // con tro : arr + n = arr[n]
    // greater<int>() xep giam dan
    // compare
    for (int x : arr) cout << x << " ";

    // two pointer
    // int i=0; int j=0; a[n] b[m]
    // while (i < n && j < m) condition i++, j++
    // O(n+m) 

}