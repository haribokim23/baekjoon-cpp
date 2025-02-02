// 제목 : A+B - 4

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    for (int a, b; std::cin >> a >> b;) {
        std::cout << a + b << '\n';
    }
}
