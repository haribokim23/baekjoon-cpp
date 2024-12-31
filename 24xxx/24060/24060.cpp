// 제목 : 알고리즘 수업 - 병합 정렬 1

#include <iostream>

int n, k;
int* a, * temp;

void merge(int left, int middle, int right) {
    int left_index = left;
    int right_index = middle + 1;
    int temp_index = 0;

    while (left_index <= middle && right_index <= right) {
        int left_number = a[left_index];
        int right_number = a[right_index];

        if (left_number <= right_number) {
            temp[temp_index++] = left_number;
            left_index++;
        } else {
            temp[temp_index++] = right_number;
            right_index++;
        }
    }

    while (left_index <= middle) {
        temp[temp_index++] = a[left_index++];
    }

    while (right_index <= right) {
        temp[temp_index++] = a[right_index++];
    }

    left_index = left;
    temp_index = 0;

    while (left_index <= right) {
        int temp_number = temp[temp_index++];

        if (--k == 0) {
            std::cout << temp_number;
            break;
        }

        a[left_index++] = temp_number;
    }
}

void merge_sort(int left, int right) {
    if (left >= right) {
        return;
    }

    int middle = (left + right) / 2;
    merge_sort(left, middle);

    if (k == 0) {
        return;
    }

    merge_sort(middle + 1, right);

    if (k == 0) {
        return;
    }

    merge(left, middle, right);
}

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    std::cin >> n >> k;
    a = new int[n];
    temp = new int[n];

    for (int index = 0; index < n; index++) {
        std::cin >> a[index];
    }

    merge_sort(0, n - 1);

    delete[] a, temp;

    if (k > 0) {
        std::cout << -1;
    }
}
