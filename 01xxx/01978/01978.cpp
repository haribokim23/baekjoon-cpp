// 제목 : 소수 찾기

#include <cmath>
#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int count = 0;

    while (n--) {
        int number;
        std::cin >> number;

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
            count++;
        }
    }

    std::cout << count;
}
