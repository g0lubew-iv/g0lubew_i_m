#include <iostream>

int main() {
	int t(0);
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		for (int i = 1; i <= n; i += 1) {
			for (int j = 1; j <= i; j += 1) {
				std::cout << ((i == j) || (j == 1)) << " ";
			}
			std::cout << std::endl;
		}
	}
	return 0;
}