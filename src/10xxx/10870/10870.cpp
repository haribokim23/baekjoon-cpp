// 제목 : 피보나치 수 5

#include <iostream>

int function(int n) {
    if (n <= 1) {
        return n;
    }

    return function(n - 2) + function(n - 1);
}

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    std::cin >> n;

    std::cout << function(n);
}

// 재귀 없는 버전

/*
#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int current = 0;

    for (int next = 1; n--;) {
        int next_next = current + next;
        current = next;
        next = next_next;
    }

    std::cout << current;
}
*/
