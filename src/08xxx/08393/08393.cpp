// 제목 : 합

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int sum = 0;

    while (n) {
        sum += n--;
    }

    std::cout << sum;
}

// 반복문 없는 버전

/*
#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::cout << n * (n + 1) / 2;
}
*/
