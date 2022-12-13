/*#include <iostream>
#include <string>

int main() {
	int n, k, t;
	std::string s;
    std::cin >> t;
    while (t--) {
        std::cin >> n >> k >> s;
        int zer = 0, one = 0;
        bool f = true;
        for (int i = 0; i < k; i++) {
            int tmp = -1;
            for (int j = i; j < n; j += k) {
                if (s[j] != '?') {
                    if (tmp != -1 && s[j] - '0' != tmp) {
                        f = false;
                        break;
                    }
                    tmp = s[j] - '0';
                }
            }
            if (tmp != -1) {
                if (tmp) {
                    one += 1;
                }
                else {
                    zer += 1;
                }
            }
        }
        if (std::max(zer, one) > k / 2) {
            f = false;
        }
        std::cout << (f ? "YES\n" : "NO\n");
    }
    return 0;
}*/