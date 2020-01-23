#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    std::map<int, int> attendMap;
    int key = 0;
    for(int i = 1; i <= n; ++i) {
        cin >> key;
        attendMap[key] = i;
    }

    for(auto i = attendMap.begin(); i != attendMap.end(); ++i) {
        std::cout << i->second << " ";
    }
    return 0;
}
