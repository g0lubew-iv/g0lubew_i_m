#include <iostream>
#include <vector>

int main() {
    int t(0);
    std::cin >> t;
    std::string s("");
    while (t--) {
        std::cin >> s;
        int n = s.length();
        std::vector<bool> a(n + 1);
        a[0] = true;
        for (int i = 0; i < n; i += 1) {
            a[i + 1] = (a[i]) && (s[i] == '1' || s[i] == '?');
        }
        std::vector<bool> b(n + 1);
        b[0] = true;
        for (int i = n - 1; i >= 0; i -= 1) {
            b[n - i] = (b[n - i - 1]) && (s[i] == '0' || s[i] == '?');
        }
        int res = 0;
        for (int i = 0; i < n; i += 1) {
            if (a[i] && b[n - i - 1]) {
                res++;
            }
        }
        std::cout << res << std::endl;
    }
}