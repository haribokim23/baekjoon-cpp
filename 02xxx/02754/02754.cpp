// 제목 : 학점계산

#include <iostream>
#include <string>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    std::string grade;
    std::cin >> grade;

    if (grade == "F") {
        std::cout << "0.0";
        return 0;
    }

    switch (grade[1]) {
        case '+':
            std::cout << 69 - (int) grade[0] << ".3";
            break;
        case '0':
            std::cout << 69 - (int) grade[0] << ".0";
            break;
        case '-':
            std::cout << 68 - (int) grade[0] << ".7";
            break;
    }
}
