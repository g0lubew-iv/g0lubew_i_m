#include <iostream>
#include <string>

int main() {
    int n(0);
    std::string s = "";
    std::cin >> n;
    for (int h = 0; h < n; h += 1) {
        std::cin >> s;
        bool f = true;
        for (int i = 0; i < s.size(); i += 1) {
            int a1 = s.size(), a2 = s.size(), b1 = s.size(), b2 = s.size();
            //std::cout << "i: " << i << std::endl;
            if (s[i] == 'a') {
                a1 = i;
                for (int j = i + 1; j < s.size(); j += 1) {
                    if (s[j] != 'a') {
                        a2 = j;
                        break;
                    }
                }
                //std::cout << "a: " << a1 << " " << a2 << std::endl;
                int r = a2 - a1;
                bool f_ = false;
                for (int p = 0; p < r; p += 1) {
                    for (int k = 0; k < r; k += 1) {
                        if (2 * p + 3 * k == r) {
                            f_ = true;
                        }
                    }
                }
                if (!f_) {
                    f = f_;
                    break;
                }
                i = a2 - 1;
            }
            else if (s[i] == 'b') {
                b1 = i;
                for (int j = i + 1; j < s.size(); j += 1) {
                    if (s[j] != 'b') {
                        b2 = j;
                        break;
                    }
                }
                //std::cout << "b: " << b1 << " " << b2 << std::endl;
                int r = b2 - b1;
                bool f_ = false;
                for (int p = 0; p < r; p += 1) {
                    for (int k = 0; k < r; k += 1) {
                        if (2 * p + 3 * k == r) {
                            f_ = true;
                        }
                    }
                }
                if (!f_) {
                    f = f_;
                    break;
                }
                i = b2 - 1;
            }
            else {
                f = false;
                break;
            }
        }
        f ? std::cout << "YES" << std::endl : std::cout << "NO" << std::endl;
    }
    return 0;
}