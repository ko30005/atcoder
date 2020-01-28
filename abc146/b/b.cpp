#include <bits/stdc++.h>
using namespace std;
int main() {
    string word;
    int n;
    cin >> n;
    cin >> word;
    int len = word.length();
    char str;
    for(int i = 0; i < len; i++) {
        for(int j = 0; j < n; j++) {
            if(word[i] == 'Z') {
                word[i] = 'A';
                continue;
            }
            word[i]++;
        }
    }

    cout << word << endl;
    return 0;
}
