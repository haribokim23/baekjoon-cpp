// 제목 : 바구니 뒤집기

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n, m;
    std::cin >> n >> m;

    int* baskets = new int[n];

    for (int index = 0; index < n; index++) {
        baskets[index] = index + 1;
    }

    while (m--) {
        int i, j;
        std::cin >> i >> j;

        for (i--, j--; i < j; i++, j--) {
            int temp = baskets[i];
            baskets[i] = baskets[j];
            baskets[j] = temp;
        }
    }

    for (int index = 0; index < n; index++) {
        std::cout << baskets[index] << ' ';
    }

    delete[] baskets;
}
