#include <iostream>
 
int main() {
    int i = 0;
    int j = 0;
    int number = 0;
    // to (2; 2) !
    while (j != 5) {
        std::cin >> number;
        if (number) {
            break;
        }
        else {
            i += 1;
            if (i <= 4) {
                continue;
            }
            else {
                i = 0;
                j += 1;
                if (j == 5) {
                    j -= 1;
                    i = 4;
                    break;
                }
            }
        }
    }
    std::cout << abs(2 - i) + abs(2 - j);
    return 0;
}