// 제목 : A+B - 3

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int t;
    std::cin >> t;

    while (t--) {
        int a, b;
        std::cin >> a >> b;

        std::cout << a + b << '\n';
    }
}
