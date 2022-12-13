#include <iostream>

int main() {
	int t(0), n(0), m(0);
	std::cin >> t;
	while (t--) {
		std::cin >> n >> m;
		for (int i = 1; i <= n; i += 1) {
			for (int j = 1; j <= m; j += 1) {
				std::cout << ((i % 4 <= 1) == (j % 4 <= 1)) << " ";
			}
			std::cout << "\n";
		}
	}
	return 0;
}