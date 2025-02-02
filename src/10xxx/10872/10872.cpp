// 제목 : 팩토리얼

#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int factorial = 1;

    while (n) {
        factorial *= n--;
    }

    std::cout << factorial;
}
