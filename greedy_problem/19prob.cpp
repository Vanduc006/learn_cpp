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

    string s; getline(cin, s);
    stack<int> st;
    int count=0;
    for (int i=0; i < s.length(); i++) {
        if (s[i] == '(') {
            st.push(i);
        } else {
            if (!st.empty()) {
                st.pop();
            } else {
                count++;
            }
        }
    }
    cout << count;
}