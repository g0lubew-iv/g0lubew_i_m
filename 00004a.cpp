#include <iostream>

int main() {
    int w(0);
    std::cin >> w;
    if ((w == 2) or (w % 2 == 1)) {
        std::cout << "NO";
    }
    else {
        std::cout << "YES";
    }
    return 0;
}