#include <iostream>

int main() {
	int t(0), n(0);
	std::cin >> t;
	for (int u = 0; u < t; u += 1) {
		int a(0), prev_a(-1), rise(1);
		bool is_life = true;
		std::cin >> n;
		for (int i = 0; i < n; i += 1) {
			std:: cin >> a;
			if (prev_a == -1) {
				if (a) {
					rise += 1;
				}
			}
			else {
				if (a) {
					if (prev_a) {
						rise += 5;
					}
					else {
						rise += 1;
					}
				}
				else {
					if (!prev_a) {
						is_life = false;
					}
				}
			}
			prev_a = a;
		}
		is_life ? std::cout << rise << std::endl : std::cout << -1 << std::endl;
	}
	return 0;
}