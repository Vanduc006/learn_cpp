#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    // each value is unique
    // auto sort 1 2 3
    // multiset<int> sm; can be store value multi times
        // find
        // count
        // erease
    set<int> s = {1, 2, 3, 7, 9};
    

    // insert 0(logN)
    // find O(logN) : Binary Sreach Tree
    // count
    // erease(int value)
    s.insert(4);

    // Iterator
    // only ++ --
    set<int>::iterator it;
    for (it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    it = s.find(4);
    if (it != s.end()) {
        cout << "FOUND";
    }


}