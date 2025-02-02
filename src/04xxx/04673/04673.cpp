// 제목 : 셀프 넘버

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    bool has_constructor[10036] = {};

    for (int number = 1; number < 10000; number++) {
        int sum = number;

        for (int temp = number; temp; temp /= 10) {
            sum += temp % 10;
        }

        has_constructor[sum] = true;
    }

    for (int number = 1; number <= 10000; number++) {
        if (!has_constructor[number]) {
            std::cout << number << '\n';
        }
    }
}
