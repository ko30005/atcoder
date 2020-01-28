#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;

    int len = s.length();
    string a[len / 2];
    string b[len / 2];
    len = len / 2;

    for(int i = 0; i < len; ++i) {
        a[i] = s[i];
    }

    std::reverse(s.begin(), s.end());

    for(int i = 0; i < len; ++i) {
        b[i] = s[i];
    }

    int count = 0;
    for(int i = 0; i < len; ++i) {
        if(a[i] != b[i]) {

            count++;
        }
    }

    cout << count << endl;
    return 0;
}
