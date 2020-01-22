#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n; i++)

int main() {
    int A, B;
    cin >> A >> B;

    std::vector<int> v{1, 2, 3};
    v.erase(std::remove(v.begin(), v.end(), A), v.end());
    v.erase(std::remove(v.begin(), v.end(), B), v.end());
    cout << v[0] << endl;
    return 0;
}
