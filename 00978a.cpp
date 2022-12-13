#include <iostream>
#include <array>
#include <vector>
 
int main() {
    int n(0);
    std::cin >> n;
    const int N = 51;
    std::array<int, N> a{0};
    std::vector<int> b;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = a.size() - 1; i >= 0; i -= 1) {
        bool f = true;
        for (int j = 0; j < b.size(); j += 1) {
            if (b[j] == a[i]) {
                f = false;
                break;
            }
        }
        if (f) {
            b.push_back(a[i]);
        }
    }
    std::cout << b.size() - 1 << "\n";
    for (int i = b.size() - 1; i >= 0; i -= 1) {
        if (b[i]) {
        std::cout << b[i] << " ";
        }
    }
    return 0;
}