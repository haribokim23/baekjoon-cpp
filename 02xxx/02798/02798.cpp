// 제목 : 블랙잭

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n, m;
    std::cin >> n >> m;

    int* cards = new int[n];

    for (int index = 0; index < n; index++) {
        std::cin >> cards[index];
    }

    int max = 0;

    for (int one = 0; one < n - 2; one++) {
        for (int two = one + 1; two < n - 1; two++) {
            for (int three = two + 1; three < n; three++) {
                int sum = cards[one] + cards[two] + cards[three];

                if (sum <= m && max < sum) {
                    max = sum;
                }
            }
        }
    }

    delete[] cards;

    std::cout << max;
}
