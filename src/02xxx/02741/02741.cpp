// 제목 : N 찍기

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    std::cin >> n;

    for (int number = 1; number <= n; number++) {
        std::cout << number << '\n';
    }
}
