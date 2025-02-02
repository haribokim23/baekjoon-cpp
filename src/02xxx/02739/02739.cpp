// 제목 : 구구단

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    std::cin >> n;

    for (int count = 1; count <= 9; count++) {
        std::cout << n << " * " << count << " = " << n * count << '\n';
    }
}
