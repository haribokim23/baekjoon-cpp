// 제목 : 행렬 덧셈

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n, m;
    std::cin >> n >> m;

    int* matrix = new int[n * m];

    for (int row = 0; row < n; row++) {
        for (int column = 0; column < m; column++) {
            std::cin >> matrix[n * row + column];
        }
    }

    for (int row = 0; row < n; row++) {
        for (int column = 0; column < m; column++) {
            int element;
            std::cin >> element;

            std::cout << matrix[n * row + column] + element << ' ';
        }

        std::cout << '\n';
    }

    delete[] matrix;
}
