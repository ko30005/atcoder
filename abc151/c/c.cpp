#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;

    long long ac = 0;
    long long wa = 0;

    vector<long long> wrong(n, 0);
    vector<bool> isac(n, 0);

    for(int i = 0; i < m; ++i) {
        int p;
        string s;
        cin >> p >> s;

        --p;

        if(!isac[p]) {
            if(s == "AC") {
                isac[p] = true;
                wa += wrong[p];
                ac++;
            } else {
                wrong[p]++;
            };
        };
    }
    cout << ac << " " << wa << endl;
    return 0;
}
