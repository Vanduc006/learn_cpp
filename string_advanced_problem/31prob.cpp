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
    int sum=0;
    for (char x : s) {
        if (isdigit(x) != 0) {
            int num = x - '0';
            if ((char) num > 0) {
                sum += x - '0';
            }
        }
    }
    cout << sum;
}