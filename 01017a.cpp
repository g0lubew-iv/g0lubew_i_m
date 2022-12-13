#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int n(0);
	std::cin >> n;
	std::vector<int> table;
	int english(0), deutch(0), math_(0), history(0);
	bool f_Tom = false;
	int tom(0);
	while (n--) {
		std::cin >> english >> deutch >> math_ >> history;
		if (!f_Tom) {
			f_Tom = true;
			tom = english + deutch + math_ + history;
		}
		table.push_back(english + deutch + math_ + history);
	}

	auto func = [&](int a, int b) {
		if (a != b) {
			return a > b;
		}
		else {
			return std::find(table.begin(), table.end(), a) > std::find(table.begin(), table.end(), b);
		}
	};

	std::sort(table.begin(), table.end(), func);

	for (int i = 0; i < table.size(); i += 1) {
		if (table[i] == tom) {
			std::cout << i + 1 << std::endl;
			break;
		}
	}
	return 0;
}