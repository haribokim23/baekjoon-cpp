// 제목 : 평균은 넘겠지

#include <iomanip>
#include <iostream>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int c;
    std::cin >> c;

    while (c--) {
        int n;
        std::cin >> n;

        double average = 0;
        int* scores = new int[n];

        for (int index = 0; index < n; index++) {
            int score;
            std::cin >> score;

            average += score;
            scores[index] = score;
        }

        average /= n;
        double count = 0;

        for (int index = 0; index < n; index++) {
            if (scores[index] > average) {
                count++;
            }
        }

        delete[] scores;

        std::cout << std::fixed << std::setprecision(4) << count / n * 100 << "%\n";
    }
}
