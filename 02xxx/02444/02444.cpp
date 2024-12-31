// 제목 : 별 찍기 - 7

#include <cmath>
#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    std::cin >> n;

    for (int row = 1; row < n * 2; row++) {
        int spaces = std::abs(n - row);

        for (int count = 0; count < spaces; count++) {
            std::cout << ' ';
        }

        for (int count = 0; count < (n - spaces) * 2 - 1; count++) {
            std::cout << '*';
        }

        std::cout << '\n';
    }
}
