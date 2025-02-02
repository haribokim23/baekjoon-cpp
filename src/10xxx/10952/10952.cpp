// 제목 : A+B - 5

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int a, b;

    for (std::cin >> a >> b; a; std::cin >> a >> b) {
        std::cout << a + b << '\n';
    }
}
