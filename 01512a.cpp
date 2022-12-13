#include <iostream>
#include <array>

int main() {
	int t(0), n(0);
	std::cin >> t;
	for (int t_count = 0; t_count <= t; t_count += 1) {
		std::array<int, 100> a{0};
		for (int i = 0; i < n; i += 1) {
			std::cin >> a[i];
		}
		int base1 = a[0], base2 = a[1];
		if (base1 == base2) {
			for (int i = 2; i < n; i += 1) {
				if (a[i] != base1) {
					std::cout << i + 1 << std::endl;
					break;
				}
			}
		}
		else {
			if (base1 == a[2]) {
				std::cout << 2 << std::endl;
			}
			else {
				std::cout << 1 << std::endl;
			}
		}
		std::cin >> n;

	}
	return 0;
}