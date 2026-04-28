#include <iostream>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    cin.ignore(1); // ignore 1 character after

    string s;
    getline(cin , s);

    s.push_back('&');
    // push_back(char)
    cout << s << endl;
    cout << s.size() << endl;

    s.pop_back();
    s.insert(1, "###");

    // insert(int, string)
    // erase(index, int)
    // substr(index)
    // find(string)
    // < > ==

    string t = s.substr(5);
    cout << t << endl;

    if (s.find("van") == string::npos) {
        cout << "NOT FOUND" << endl;
    } else {
        cout << s.find("van") << endl; // index
        cout << "FOUND" << endl;
    }

    s += " " + t;

    for (char x : s) cout << x;

    // tolower(char) return ascii
    // toupper(char) return ascii
    // isdigit(char)
    // islower(char)
    // isupper(char)
    // isalpha(char)
    cout << endl;
    string text = "Nguyen VAN Duc";
    for (char &x : text) x = toupper(x);
    cout << text << endl;

    // stringstream (perform like split ?)
    text = "....hello nguyen...van  duc...   ";
    for (char &x : text) {
        if (x == '.') x = ' ';
    }
    stringstream ss(text);
    string w;
    while (ss >> w) {
        cout << w << endl;
    }

    // stoi(string) : string to int
    // stoll(string) : string to long long
    // stod(string) : string to double
    // to_string(int, d, ll ) : 

}