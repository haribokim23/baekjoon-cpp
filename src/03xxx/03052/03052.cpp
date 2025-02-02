// 제목 : 나머지

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    bool remainders[42] = {};

    for (int count = 0; count < 10; count++) {
        int number;
        std::cin >> number;

        remainders[number % 42] = true;
    }

    int count = 0;

    for (bool& exists : remainders) {
        if (exists) {
            count++;
        }
    }

    std::cout << count;
}
