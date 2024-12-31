// 제목 : 최댓값

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int numbers[9];

    for (int& number : numbers) {
        std::cin >> number;
    }

    int max = numbers[0];
    int max_index = 1;

    for (int index = 2; index <= 9; index++) {
        int& number = numbers[index - 1];

        if (number > max) {
            max = number;
            max_index = index;
        }
    }

    std::cout << max << '\n' << max_index;
}

// 배열 없는 버전

/*
#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int max;
    std::cin >> max;

    int max_index = 1;

    for (int index = 2; index <= 9; index++) {
        int number;
        std::cin >> number;

        if (number > max) {
            max = number;
            max_index = index;
        }
    }

    std::cout << max << '\n' << max_index;
}
*/
