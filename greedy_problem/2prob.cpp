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

    string s1; string s2; cin >> s1 >> s2;
    cout << stoi(s1) + stoi(s2) << " ";

    if (s1.find('6') != string::npos) {
        size_t index = s1.find('6');
        s1[index] = '5';
    }

    if (s2.find('6') != string::npos) {
        size_t index = s2.find('6');
        s2[index] = '5';
    }

    cout << stoi(s1) + stoi(s2);

}