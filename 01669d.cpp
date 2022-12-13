#include <iostream>
#include <string>

int main() {
  int t;
  int n;
  std::string s;
  std::cin >> t;
  for (int z = 0; z < t; z++) {
    std::cin >> n;
    std::cin >> s;
    if (s[n - 1] != 'W') {
      s = s + 'W';
    }
    if (s[0] != 'W') {
      s = 'W' + s;
    }
    bool isPossible = true;
    int posR = 0;
    int posB = 0;
    int xl = 0;
    int xr = 0;
    for (int i = 0; i < s.length(); i++) {
      if (s[i] == 'W') {
        xl = xr;
        xr = i;
      }
      if (xr - xl > 1) {
        for (int j = xl + 1; j < xr; j++) {
          if (s[j] == 'R') {
            posR++;
          }
          if (s[j] == 'B') {
            posB++;
          }
        }
        if (!posR || !posB) {
          isPossible = false;
          break;
        } else {
          posR = 0;
          posB = 0;
        }
      }
    }
    (isPossible) ? std::cout << "YES\n" : std::cout << "NO\n";
  }
  return 0;
}