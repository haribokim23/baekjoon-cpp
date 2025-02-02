// 제목 : 숫자의 합

#include <iostream>
#include <string>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::string numbers;
    std::cin >> numbers;

    int sum = 0;

    for (int index = 0; index < n; index++) {
        sum += numbers[index] - '0';
    }

    std::cout << sum;
}

// 문자열 없는 버전

/*
#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int sum = 0;
    std::cin.ignore();

    while (n--) {
        sum += std::cin.get() - '0';
    }

    std::cout << sum;
}
*/
