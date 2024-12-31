// 제목 : 별 찍기 - 1

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    std::cin >> n;

    for (int row = 1; row <= n; row++) {
        for (int count = 0; count < row; count++) {
            std::cout << '*';
        }

        std::cout << '\n';
    }
}
