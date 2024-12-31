// 제목 : 삼각형과 세 변

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int length_1, length_2, length_3;

    for (std::cin >> length_1 >> length_2 >> length_3; length_1;
        std::cin >> length_1 >> length_2 >> length_3) {
        int longest = length_1;

        if (length_2 > longest) {
            longest = length_2;
        }

        if (length_3 > longest) {
            longest = length_3;
        }

        std::cout << (longest >= length_1 + length_2 + length_3 - longest ? "Invalid"
            : length_1 == length_2 && length_1 == length_3 ? "Equilateral"
            : length_1 == length_2 || length_1 == length_3 || length_2 == length_3 ? "Isosceles"
            : "Scalene") << '\n';
    }
}
