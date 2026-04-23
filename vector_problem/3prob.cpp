#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

using ll = long long;

void increase_sort(vector<int> &v) {
    for(int i=v.size()-1; i > 0; i--) {
        for (int j=0; j < i; j++) {
            if (v[j] > v[j+1]) {
                int temp = v[j+1];
                v[j+1] = v[j];
                v[j] = temp;
            }
        }
    }
} // 1 2 3

void decrease_sort(vector<int> &v) {
    for(int i=v.size()-1; i > 0; i--) {
        for (int j=0; j < i; j++) {
            if (v[j] < v[j+1]) {
                int temp = v[j+1];
                v[j+1] = v[j];
                v[j] = temp;
            }
        }
    }
} // 3 2 1

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n; cin >> n;
    vector<int> v;
    for (int i=0; i < n; i++) {
        int value; cin >> value;
        v.push_back(value);
    }

    // increase_sort(v);
    sort(v.begin(), v.end());
    for (int x : v) cout << x << " ";
    cout << endl;
    // decrease_sort(v);
    sort(v.begin(), v.end(), greater<int>());
    for (int x : v) cout << x << " ";


}