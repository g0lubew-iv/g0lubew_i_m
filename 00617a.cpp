#include <iostream>

int main() {
    int x(0);
    std::cin >> x;
    x - (x / 5) * 5 ? std::cout << x / 5 + 1 : std::cout << x / 5;
    return 0;
}