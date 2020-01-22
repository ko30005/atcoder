#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;

    vector<string> arr(n);

    char before;
    char beforeMix;
    int count = 1;

    for(int i = 0; i < n; i++) {
        if(i == 0) {
            before = s[i];
        }

        if(s[i] != before) {
            count++;
        }
        before = s[i];
    }

    cout << count << endl;
    return 0;
}
