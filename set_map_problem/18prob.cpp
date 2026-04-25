#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
    #endif

    string text;
    set<string> s;
    while (cin >> text) {
        s.insert(text);
    }
    

    cout << s.size() << endl;
    cout << *s.begin() << " " << *s.rbegin() << endl;

}