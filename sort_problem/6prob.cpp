#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

using ll = long long;

int count_le(int x) {
    // cout << x << " ";
    int count=0;
    while (x != 0) {
        if ((x%10)%2 != 0) count++;
        x /= 10; 
    }
    // cout << count << endl;
    return count;
}

int compare(int x, int y) {
    if (count_le(x) != count_le(y)) return count_le(x) > count_le(y);
    else return x < y;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> v;

    while(n--) {
        int value; cin >> value;
        v.push_back(value);
    }

    sort(v.begin(), v.end(), compare);
    for (int x : v) cout << x << " ";
    
}