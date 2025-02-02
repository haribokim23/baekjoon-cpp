// 제목 : 공 넣기

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n, m;
    std::cin >> n >> m;

    int* baskets = new int[n];

    for (int index = 0; index < n; index++) {
        baskets[index] = 0;
    }

    while (m--) {
        int i, j, k;
        std::cin >> i >> j >> k;

        while (i++ <= j) {
            baskets[i - 2] = k;
        }
    }

    for (int index = 0; index < n; index++) {
        std::cout << baskets[index] << ' ';
    }

    delete[] baskets;
}
