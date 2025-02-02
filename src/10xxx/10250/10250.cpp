// 제목 : ACM 호텔

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int t;
    std::cin >> t;

    while (t--) {
        int h, w, n;
        std::cin >> h >> w >> n;

        int floor = 1;
        int room = 1;

        while (--n) {
            if (floor < h) {
                floor++;
            } else {
                floor = 1;
                room++;
            }
        }

        std::cout << floor * 100 + room << '\n';
    }
}
