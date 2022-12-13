#include <iostream>
#include <cmath>

int main() {
	int t(0);
	int angle(0);
	std::cin >> t;
	while (t--) {
		std::cin >> angle;
		if (360 % (180 - angle) == 0) {
			std::cout << "YES" << std::endl;
		}
		else {
			std::cout << "NO" << std::endl;
		}
	}
	return 0;
}