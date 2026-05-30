#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    priority_queue<int, vector<int>, greater<int>> q;
    for (int i=0; i < n; i++) {
        int value; cin >> value;
        q.push(value);
    }

    int ans=0;
    while (q.size() > 1) {
        int price = q.top();
        q.pop();
        price += q.top();
        q.pop();
        q.push(price);
        ans += price;
    }

    cout << ans;

}