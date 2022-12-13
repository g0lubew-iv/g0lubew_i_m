#include <iostream>
#include <array>
#include <string>

int main() {
    int t(0), n(0), m(0);
    std::cin >> t;
    for (int h = 0; h < t; h += 1) {
        std::cin >> n >> m;
        std::string s = "";
        std::array<std::string, 5> field{"0"};
        for (int i = 0; i < n; i += 1) {
            std::cin >> s;
            field[i] = s;
        }
        int min_x = 100000000, min_y = 100000000;
        for (int x = 0; x < n; x += 1) {
            for (int y = 0; y < m; y += 1) {
                if (field[x][y] == 'R') {
                    min_x = std::min(min_x, x);
                    min_y = std::min(min_y, y);
                }

            }
        }
        if (field[min_x][min_y] == 'R') {
            std::cout << "YES" << std::endl;
        }
        else {
            std::cout << "NO" << std::endl;
        }
    }
    return 0;
}