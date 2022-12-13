#include <iostream>
#include <vector>
#include <cmath>

bool is_prime(int number) {
    if (number <= 1) { return false; }
    if (number <= 3) { return true; }
    if (number % 2 == 0 || number % 3 == 0) {
    	return false;
    }
   
    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) {
           return false;
        }
    }
   
    return true;
}
 
int get_next_prime(int number) {
 
    if (number <= 1) {
        return 1;
    }
 
    int prime = number;
    while (true) {
        if (is_prime(prime)) {
            return prime - number;
        }
        prime++;
    }
}

int main() {
	int n(0), m(0), x(0);
	std::cin >> n >> m;
	std::vector<std::vector<int>> a;
	for (int i = 0; i < n; i += 1) {
		std::vector<int> b;
		for (int j = 0; j < m; j += 1) {
			std::cin >> x;
			b.push_back(x);
		}
		a.push_back(b);
	}
	int count = 1000000000;

	for (int i = 0; i < a.size(); i += 1) {
		int local_count = 0;
		for (int j = 0; j < a[0].size(); j += 1) {
			local_count += get_next_prime(a[i][j]);
		}
		count = std::min(local_count, count);
	}

	for (int i = 0; i < a[0].size(); i += 1) {
		int local_count = 0;
		for (int j = 0; j < a.size(); j += 1) {
			local_count += get_next_prime(a[j][i]);
		}
		count = std::min(local_count, count);
	}

	std::cout << count << std::endl;
	return 0;
}