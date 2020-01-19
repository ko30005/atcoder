#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    std::string sa;
    std::string sb;

    for(int i = 0; i < b; i++) {
        sa += std::to_string(a);
    }

    for(int i = 0; i < a; i++) {
        sb += std::to_string(b);
    }

    if(sa > sb) {
        cout << sb << endl;
        return 0;
    }

    cout << sa << endl;
}
