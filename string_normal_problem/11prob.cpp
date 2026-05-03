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

    string s; getline(cin ,s);
    // size_t found = s.find('/');
    // string ngay = s.substr(0, found);
    // if (stoi(ngay) <= 9) ngay.insert(0,"0");
    // s = s.substr(found + 1, s.size());
    // found = s.find('/');
    // string thang = s.substr(0, found);
    // if (stoi(thang) <= 9) thang.insert(0, "0");
    // string nam = s.substr(found + 1, s.size());
    // cout << ngay << "/" << thang << "/" << nam;
    for (char &c : s) c = (c == '/') ? c = ' ' : c = c;
    stringstream ss(s);
    string ngay, thang, nam;
    ss >> ngay >> thang >> nam;
    if (ngay.size() == 1) ngay = "0" + ngay;
    if (thang.size() ==  1) thang = "0" + thang;
    cout << ngay << "/" << thang << "/" << nam;
}