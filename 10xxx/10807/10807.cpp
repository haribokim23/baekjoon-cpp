// 제목 : 개수 세기

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

    int v;
    std::cin >> v;

    int count = 0;

    for (int index = 0; index < n; index++) {
        if (numbers[index] == v) {
            count++;
        }
    }

    delete[] numbers;

    std::cout << count;
}
