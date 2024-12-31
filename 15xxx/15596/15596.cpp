// 제목 : 정수 N개의 합

#include <vector>

long long sum(std::vector<int>& a) {
    long long sum = 0;

    for (int& number : a) {
        sum += number;
    }

    return sum;
}
