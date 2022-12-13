#include <iostream>
// #include <vector>

int main() {
    int n(0), k(0), temp(0), best(0);
    // std::vector<int> a;
    std::cin >> n >> k;
    best = k + 1;
    for (int i = 0; i < n; i += 1) {
        std::cin >> temp;
        // a.push_back(temp);
        if (k % temp == 0) {
            if (k / temp < best) {
                best = k / temp;
            }
        }
    }
    std::cout << best << std::endl;
    return 0;
}
