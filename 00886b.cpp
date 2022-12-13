#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

int main() {
	int n(0);
	int number(0);
	std::vector<int> v(200001, -1);
	std::cin >> n;
	for (int i = 0; i < n; i += 1) {
		std::cin >> number;
		v[number] = n - i - 1;
	}
	/*if (n == 1) {
		std::cout << number << std::endl;
	}
	else*/
	std::cout << std::distance(v.begin(), std::max_element(v.begin(), v.end())) << std::endl;
	return 0;
}