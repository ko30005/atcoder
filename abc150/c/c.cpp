#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> p, q;

int main() {
    cin >> N;
    vector<int> p(N), q(N);

    for(int i = 0; i < N; ++i) {
        cin >> p[i], --p[i];
    }
    for(int i = 0; i < N; ++i) {
        cin >> q[i], --q[i];
    }

    map<vector<int>, int> order;
    int iter = 0;

    vector<int> v(N);
    for(int i = 0; i < N; ++i) {
        v[i] = i;
    }

    do {
        order[v] = iter++;
    } while(next_permutation(v.begin(), v.end()));

    cout << abs(order[p] - order[q]) << endl;
}
