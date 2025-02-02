// 제목 : 부녀회장이 될테야

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int count[15][14] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 };

    for (int floor = 1; floor < 15; floor++) {
        int sum = 0;

        for (int room = 0; room < 14; room++) {
            sum += count[floor - 1][room];
            count[floor][room] = sum;
        }
    }

    int t;
    std::cin >> t;

    while (t--) {
        int k, n;
        std::cin >> k >> n;

        std::cout << count[k][n - 1] << '\n';
    }
}
