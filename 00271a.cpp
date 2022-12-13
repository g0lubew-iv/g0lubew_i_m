#include <iostream>

bool isBeaty(int year) {
    int a = year % 10;
    int b = (year / 10) % 10;
    int c = (year / 100) % 10;
    int d = year / 1000;
    if ((a == b) || (a == c) || (a == d) || (b == c) || (b == d) || (c == d)) {
        return false;
    }
    return true;
}

int main() {
    int y(0);
    std::cin >> y;
    int bY = y + 1;
    while (true) {
        if (isBeaty(bY)) {
            break;
        }
        else {
            bY += 1;
        }
    }
    std::cout << bY;
    return 0;
}