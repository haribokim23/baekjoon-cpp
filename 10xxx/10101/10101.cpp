// 제목 : 삼각형 외우기

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int angle_1, angle_2, angle_3;
    std::cin >> angle_1 >> angle_2 >> angle_3;

    std::cout << (angle_1 + angle_2 + angle_3 != 180 ? "Error"
        : angle_1 == 60 && angle_2 == 60 ? "Equilateral"
        : angle_1 == angle_2 || angle_1 == angle_3 || angle_2 == angle_3 ? "Isosceles"
        : "Scalene");
}
