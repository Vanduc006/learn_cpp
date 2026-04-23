#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

using ll = long long;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    vector<int> v;
    // push_back : add item at latest index
    // size : get size
    // clear
    // empty : return true if vector null

    int n; cin >> n;
    for (int i=0; i < n; i++) {
        int x; cin >> x;
        v.push_back(x);
    }

    // for (int &x : v) {
    //     x = 1;
    // }

    for (int i=0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    cout << endl;

    // Iterator vector v (pointer)
    // begin : v[0]
    // end : v[v.size()]
    // rbegin : v[v.size() - 1]
    // rend : index before v[0]

    // v.begin() + x -> v[x]
    // i++ -- += -=
    // begin end -> iterator
    // rbegin rend -> reverse_iterator
    // auto

    v = {1, 2, 3, 4, 5};
    vector<int>::iterator it = v.begin();
    // it.v.begin() + 2
    cout << *it << endl;
    it++;
    cout << *it << endl;

    v.insert(v.begin(), 100);
    v.erase(v.begin() + 1);
    v.pop_back();
    
    for (it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    vector<int>::reverse_iterator rit = v.rbegin(); // v[v.size()]
    // rit = v.rbegin() - 1 or rit--;

}
