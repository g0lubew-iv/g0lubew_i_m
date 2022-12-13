#include <iostream>
#include <array>
#include <algorithm>

int main() {
    int n(0);
    std::cin >> n;
    std::array<unsigned int, 100000> a{0};
    for (int i = 0; i < n; i += 1) {
        std::cin >> a[i];
    }
    int s = 0;
    for (int i = 0; i < n; i += 1) {
        s += a[i];
    }
    if (s == n) {
        for (int i = 0; i < n - 1; i += 1) {
            std::cout << a[i] << " ";
        }
        std::cout << 2;
    }
    else {
        std::sort(a.begin(), a.end());
        std::reverse(a.begin(), a.end());
        std::cout << "1 ";
        for (int i = n - 1; i > 0; i -= 1) {
            std::cout << a[i] << " ";
        }
    }
    return 0;
}