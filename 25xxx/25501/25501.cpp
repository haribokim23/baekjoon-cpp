// 제목 : 재귀의 귀재

#include <iostream>
#include <string>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int t;
    std::cin >> t;

    while (t--) {
        std::string s;
        std::cin >> s;

        int count = 0;
        int is_palindrome = 1;

        for (int left = 0, right = s.size() - 1; ; left++, right--) {
            count++;

            if (left >= right) {
                break;
            }

            if (s[left] != s[right]) {
                is_palindrome = 0;
                break;
            }
        }

        std::cout << is_palindrome << ' ' << count << '\n';
    }
}
