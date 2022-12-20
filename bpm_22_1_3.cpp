#include <iostream>
#include <string>

int main() {
	std::string word("");
	std::cin >> word;
	bool is_right = true;
	for (int i = 0; i < word.size() - 1; i += 1) {
		if ((word[i] == 'n') || (word[i] == 'a') || (word[i] == 'o') 
			|| (word[i] == 'u') || (word[i] == 'i') || (word[i] == 'e')) {
			// Всё равно, что идёт после!
			continue;
		}
		else {
			// "Неособая" согласная, делаем проверку на последующую букву!
			if ((word[i + 1] != 'a') && (word[i + 1] != 'o') && (word[i + 1] != 'u')
				&& (word[i + 1] != 'i') && (word[i + 1] != 'e')) {
				is_right = false;
				break;
			}
			else {
				continue;
			}
		}
	}
	if ((word[word.size() - 1] != 'n') &&(word[word.size() - 1] != 'a')
		&& (word[word.size() - 1] != 'o') && (word[word.size() - 1] != 'u')
		&& (word[word.size() - 1] != 'i') && (word[word.size() - 1] != 'e')) {
		is_right = false;
	}
	std::cout << is_right << std::endl;
	return 0;
}