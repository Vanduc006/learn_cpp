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
    // cout << n;

    while (n--) {
        priority_queue<int> q;
        int k; cin >> k;
        int ans=0;
        string s;
        cin.ignore();
        map<char, int> mp;

        getline(cin , s);
        // cout << s;
        for (char c : s) {
            mp[c]++;
        }

        for (pair<char, int> p : mp) {
            q.push(p.second);
            // cout << p.second << " ";
        }
        // cout << endl;
        // cout << k << endl;

        if (k > q.size()) {
            cout << 0;
            return 0;
        }
        
        while (k--) {
            int top=q.top();
            q.pop();
            top--;
            q.push(top);
        }

        // cout << q.top() << endl;

        while (q.size() > 0) {
            ans += q.top() * q.top();
            q.pop();
        }
        cout << ans << endl;
    }
}