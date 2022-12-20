#include <iostream>
#include <cmath>

int main() {
	double x(0.0), y(0.0);
	double count_all(0);
	double count_right(0);

	while (std::cin) {
		std::cin >> x >> y;
		if (((std::pow(x, 2) + std::pow(y, 2)) <= 4) && (y >= 2 - std::pow(x, 2))) {
			count_right += 1;
		}
		count_all += 1;
	}

	std::cout << count_right / count_all << std::endl;
	return 0;
}