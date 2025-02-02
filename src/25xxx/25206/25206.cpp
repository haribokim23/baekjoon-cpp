// 제목 : 너의 평점은

#include <iomanip>
#include <iostream>
#include <string>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int units_sum = 0;
    double grade_points_sum = 0;

    for (int count = 0; count < 20; count++) {
        int units;
        std::string grade;
        std::cin >> grade >> units >> grade >> grade;

        if (grade == "P") {
            continue;
        }

        units_sum += units;

        if (grade == "F") {
            continue;
        }

        grade_points_sum += units * (69 - grade[0] + (grade[1] == '+' ? 0.5 : 0));
    }

    std::cout << std::fixed << std::setprecision(5) << grade_points_sum / units_sum;
}
