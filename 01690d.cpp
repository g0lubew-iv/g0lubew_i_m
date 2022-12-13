#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int t(0), n(0), k(0);
    std::string s("");
    std::cin >> t;
    while(t--) {
        std::cin >> n >> k >> s;
        std::vector<int> w(n + 1);
        int result = 1000000000;
        for (int i = 1; i <= n; i += 1) {
            w[i] = w[i - 1] + (int) (s[i - 1] == 'W');
        }
        for (int i = k; i <= n; i++) {
            result = std::min(result, w[i] - w[i - k]);
        }
        std::cout << result << std::endl;
    }
    return 0;
}