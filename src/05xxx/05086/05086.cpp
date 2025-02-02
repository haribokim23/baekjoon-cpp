// 제목 : 배수와 약수

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int number1, number2;

    for (std::cin >> number1 >> number2; number1; std::cin >> number1 >> number2) {
        std::cout << (number2 % number1 == 0 ? "factor"
            : number1 % number2 == 0 ? "multiple"
            : "neither") << '\n';
    }
}
