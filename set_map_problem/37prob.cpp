    #include <iostream>
    #include <bits/stdc++.h>
    #include <algorithm>
    #include <iomanip>
    using namespace std;

    using ll = long long;

    int main() {
        #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
        #endif
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        string s;
        map<string, vector<pair<string, string>>> mp;
        while (getline(cin, s)) {
            // string s; getline(cin, s);
            // cout << s << endl;
            size_t found = s.find(' ');
            string name = s.substr(0, found);
            string data = s.substr(found + 1);
            found = data.find(' ');
            string tinchi = data.substr(0, found);
            string diem = data.substr(found + 1);

            mp[name].push_back({tinchi, diem});
            // cout << name << "|" << tinchi << "|" << diem << endl;
            // break;
        }

        // sort(mp.begin(), mp.end());

        // for (pair<string, vector<pair<string, string>>> p : mp) {
        //     cout << p.first << " : ";
        //     double x1; double x2; 
        //     for (pair<string, string> p_data : p.second) {
        //         // cout << p_data.first << " " << p_data.second << endl;
        //         x1 += stod(p_data.first) * stod(p_data.second);
        //         x2 += stod(p_data.first);
        //     } 
            
        //     cout << round((x1/x2)*100) /100 << endl;
        //     x1=0; x2=0;
        // }

        for (auto it = mp.rbegin(); it != mp.rend(); it++) {
            cout << it->first << " : ";
            double x1=0; double x2=0;

            for (pair<string, string> p_data : it->second) {
                // cout << p_data.first << " " << p_data.second << endl;
                x1 += stod(p_data.first) * stod(p_data.second);
                x2 += stod(p_data.first);
            }

            cout << fixed << setprecision(2) << x1/x2 << endl;     
        }
    }