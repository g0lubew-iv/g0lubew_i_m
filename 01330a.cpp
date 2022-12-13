#include <iostream>
#include <vector>
#include <algorithm>

void solve() {
    int n(0), x(0);
    std::cin >> n >> x;
    std::vector<int> a(n);
    for (int i = 0; i < n; i += 1) {
        std::cin >> a[i];
    }

    sort(a.begin(), a.end());
    std::vector<int> res(500);

    for (int i = 0; i < n; i += 1) {
        res[a[i] - 1] = 1;
    }

    for (int i = 0; i < res.size() && x > 0; i += 1) {
        if (!res[i]) {
            res[i] = 1;
            --x;
        }
    }

    for (int i = 0; i < res.size(); i += 1) {
        if (!res[i]){
            std::cout << i << "\n";
            return;
        }
    }
    std::cout << res.size() << "\n";
}

int main() {
    int t(0);
    std::cin >> t;
    for (int i = 0; i < t; i += 1) {
       solve();
    }
    return 0;
}