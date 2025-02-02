// 제목 : A+B - 7

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int t;
    std::cin >> t;

    for (int count = 1; count <= t; count++) {
        int a, b;
        std::cin >> a >> b;

        std::cout << "Case #" << count << ": " << a + b << '\n';
    }
}
