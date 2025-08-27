#include <iostream>
using namespace std;

string longestPalindrome(string s) {
    int n = s.size();
    if (n == 0) return "";
    
    int start = 0, maxLen = 1;
    
    auto expand = [&](int left, int right) {
        while (left >= 0 && right < n && s[left] == s[right]) {
            if (right - left + 1 > maxLen) {
                start = left;
                maxLen = right - left + 1;
            }
            left--;
            right++;
        }
    };
    
    for (int i = 0; i < n; i++) {
        expand(i, i);     // odd length
        expand(i, i + 1); // even length
    }
    
    return s.substr(start, maxLen);
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    string ans = longestPalindrome(s);
    cout << "Longest Palindromic Substring: " << ans << endl;

    return 0;
}
