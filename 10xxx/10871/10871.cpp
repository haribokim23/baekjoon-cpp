// 제목 : X보다 작은 수

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n, x;
    std::cin >> n >> x;

    int* numbers = new int[n];

    for (int index = 0; index < n; index++) {
        std::cin >> numbers[index];
    }

    for (int index = 0; index < n; index++) {
        int& number = numbers[index];

        if (number < x) {
            std::cout << number << ' ';
        }
    }

    delete[] numbers;
}

// 배열 없는 버전

/*
#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n, x;
    std::cin >> n >> x;

    while (n--) {
        int number;
        std::cin >> number;

        if (number < x) {
            std::cout << number << ' ';
        }
    }
}
*/
