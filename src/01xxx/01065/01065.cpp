// 제목 : 한수

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int count = 0;

    for (int number = 1; number <= n; number++) {
        int x = number;
        bool is_valid = true;

        for (int difference = x % 10 - x / 10 % 10; x >= 100; ) {
            x /= 10;

            if (difference != x % 10 - x / 10 % 10) {
                is_valid = false;
                break;
            }
        }

        if (is_valid) {
            count++;
        }
    }

    std::cout << count;
}
