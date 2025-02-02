// 제목 : 평균

#include <iomanip>
#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    std::cin >> n;

    int* scores = new int[n];

    for (int index = 0; index < n; index++) {
        std::cin >> scores[index];
    }

    double sum = 0;
    int m = 0;

    for (int index = 0; index < n; index++) {
        int& score = scores[index];

        sum += score;

        if (score > m) {
            m = score;
        }
    }

    delete[] scores;

    std::cout << std::fixed << std::setprecision(3) << sum / n / m * 100;
}

// 배열 없는 버전

/*
#include <iomanip>
#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int n;
    std::cin >> n;

    double sum = 0;
    int m = 0;

    for (int count = 0; count < n; count++) {
        int score;
        std::cin >> score;

        sum += score;

        if (score > m) {
            m = score;
        }
    }

    std::cout << std::fixed << std::setprecision(3) << sum / n / m * 100;
}
*/
