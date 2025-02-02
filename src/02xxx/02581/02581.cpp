// 제목 : 소수

#include <cmath>
#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int m, n;
    std::cin >> m >> n;

    int sum = 0, min = n;

    for (int number = m; number <= n; number++) {
        if (number == 1) {
            continue;
        }

        bool is_prime = true;

        for (int factor = 2; factor <= std::sqrt(number); factor++) {
            if (number % factor == 0) {
                is_prime = false;
                break;
            }
        }

        if (is_prime) {
            sum += number;

            if (number < min) {
                min = number;
            }
        }
    }

    if (sum == 0) {
        std::cout << -1;
    } else {
        std::cout << sum << '\n' << min;
    }
}
