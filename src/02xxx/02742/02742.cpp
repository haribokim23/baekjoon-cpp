// 제목 : 기찍 N

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    std::cin >> n;

    while (n) {
        std::cout << n-- << '\n';
    }
}
