#include <bits/stdc++.h>
using namespace std;

int count(const std::string str, const std::string subStr, int size) {
    int count = 0;

    int pos = str.find(subStr);

    while(pos != std::string::npos) {
        count++;
        pos = str.find(subStr, pos + 1);
    }
    return count;
}

int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;

    cout << count(s, "ABC", n) << endl;
    return 0;
}
