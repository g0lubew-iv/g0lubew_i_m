#include <iostream>

int main() {
	int n(0), counter(0);
	std::cin >> n;
	while (n) {
		counter += n & 1;
		n >>= 1;
	}
	std::cout << counter;
	return 0;
}