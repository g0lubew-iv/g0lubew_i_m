#include <iostream>
#include <set>

int main(int argc, char const *argv[])
{
	int a(0), m(0);
	std::set<int> schedule;
	std::cin >> a >> m;

	while ((a % m) && (!schedule.count(a % m))) {
		schedule.insert(a % m);
		a += a % m;
	}

	if (a % m == 0) {
		std::cout << "Yes" << std::endl;
	}
	else {
		std::cout << "No" << std::endl;
	}
	return 0;
}