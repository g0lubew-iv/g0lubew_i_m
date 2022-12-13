#include <iostream>
#include <vector>
#include <cmath>
#include <string>
 
int get_numbers_of_2(int number) {
	int count = 0;
	if (number == 0) {
		return 0;
	}
	while (number % 2 == 0) {
		number /= 2;
		count += 1;
	}
	return count;
}

int main() {
	int t;
	std::cin >> t;
	while (t--) {
		int n(0), p(0), cnt_2(0), max_pow_2(-1);
		std::cin >> n;
		for (int i = 1; i <= n; i += 1) {
			std::cin >> p;
			cnt_2 += get_numbers_of_2(p);
			max_pow_2 = std::max( (int) std::log2(p), i);
		}
		if (cnt_2 >= n) {
			std::cout << 0 << std::endl;
			continue;
		}
 
		bool flg = false;
		std::vector<int> pows_2(max_pow_2 + 1);
		for (int i = 1; i <= n; i += 1) {
			if (i % 2 != 0) {
				pows_2[0] += 1;
			}
			else {
				pows_2[get_numbers_of_2(i)] += 1;
			}
		}
		int count_add = 0;
		for (int i = max_pow_2; i >= 0; i -= 1) {
			for (int j = 0; j < pows_2[i]; j += 1) {
				if (i == 0) {
					break;
				}
				cnt_2 += i;
				count_add += 1; 
				if (cnt_2 >= n) {
					flg = true;
					break;
				}
 
			}
			if (flg) {
				break;
			}
		}
		if (flg) {
			std::cout << count_add << std::endl;
		}
		else {
			std::cout << -1 << std::endl;
		}
 
	}
 
}