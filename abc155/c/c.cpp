#include <bits/stdc++.h>
using namespace std;
typedef std::map<std::string, int> container;
typedef std::pair<std::string, int> value_type;

struct second_order {
    bool operator()(const value_type &x, const value_type &y) const {
        return x.second < y.second;
    }
};

int main() {
    int n;
    cin >> n;

    std::map<string, int> map;
    string key = "";
    for(int i = 0; i < n; ++i) {
        cin >> key;
        map[key]++;
    }

    std::priority_queue<value_type, std::vector<value_type>, second_order> que;
    std::pair<std::string, int> p;

    for(pair<string, int> p : map) {
        que.push(p);
    }

    int max = que.top().second;
    vector<string> str;
    for(int i = 0; !que.empty(); ++i) {
        value_type item = que.top();
        if(max != item.second) {
            break;
        }
        str.push_back(item.first);
        que.pop();
    }

    sort(str.begin(), str.end());

    for(auto itr : str)
        std::cout << itr << std::endl;

    return 0;
}
