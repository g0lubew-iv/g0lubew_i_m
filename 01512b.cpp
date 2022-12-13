#include <iostream>
#include <string>
#include <vector>
#include <utility>

int main() {
	int t(0), n(0);
	std::cin >> t;
	for (int t_count = 0; t_count < t; t_count += 1) {
		std::cin >> n;
		std::vector<std::string> a(n);
		std::vector<std::pair<int, int>> field;
		for (int i = 0; i < n; i += 1) {
			std::cin >> a[i];
			for (int j = 0; j < n; j += 1) {
				if (a[i][j] == '*') {
					field.push_back({i, j});
				}
			}
		}
		field.push_back(field[0]);
		field.push_back(field[1]);

		if (field[0].first == field[1].first) {
			field[2].first = (field[2].first + 1) % n;
			field[3].first = (field[3].first + 1) % n;
		}
		else if (field[0].second == field[1].second) {
			field[2].second = (field[2].second + 1) % n;
			field[3].second = (field[3].second + 1) % n;
		}
		else {
			std::swap(field[2].first, field[3].first);
		}

		a[field[2].first][field[2].second] = '*';
        a[field[3].first][field[3].second] = '*';

        for (int i = 0; i < n; i += 1) {
        	std::cout << a[i] << std::endl;
        }
	}
	return 0;
}