#include <iostream>

int main() {
	// hasn't solved yet!
	int n(0), a(0), prev(-1), count(0);
	std::cin >> n;
	for (int i = 0; i < n; i += 1) {
		if (prev == -1) {
			std::cin >> prev;
			continue;
		}
		std::cin >> a;
		if (prev > a) {
			count = i;
		}
		prev = a;
	}
	std::cout << count << std::endl;
	return 0;
}