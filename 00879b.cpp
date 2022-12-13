#include <iostream>
#include <queue>
 
int main() {
    int a(0), a_winner(0), counter(0);
    long long n(0), k(0);
    std::queue<int> q;
    std::cin >> n >> k;
    for (int i = 0; i < n; i += 1) {
        std::cin >> a;
        q.push(a);
    }
    a_winner = q.front();
    q.pop();
    while (counter < k) {
        a = q.front();
        q.pop();
        if (a_winner > a) {
            counter += 1;
        }
        else {
            std::swap(a, a_winner);
            counter = 1;
        }
        q.push(a);
        
        if (counter > n + 1) {
            break;
        }
        
    }
    std::cout << a_winner << std::endl;
    return 0;
}