// 제목 : 최소, 최대

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int* numbers = new int[n];

    for (int index = 0; index < n; index++) {
        std::cin >> numbers[index];
    }

    int min = numbers[0];
    int max = numbers[0];

    for (int index = 1; index < n; index++) {
        int& number = numbers[index];

        if (number < min) {
            min = number;
        }

        if (number > max) {
            max = number;
        }
    }

    delete[] numbers;

    std::cout << min << ' ' << max;
}

// 배열 없는 버전

/*
#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int number;
    std::cin >> number;

    int min = number;
    int max = number;

    while (--n) {
        std::cin >> number;

        if (number < min) {
            min = number;
        }

        if (number > max) {
            max = number;
        }
    }

    std::cout << min << ' ' << max;
}
*/
