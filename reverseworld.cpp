#include <iostream>
#include <cstring>
using namespace std;

void ReverseChar(char arr[], int s, int e) {
    while (s < e) {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}
int main() {
    char arr[50];
    cin.getline(arr, 50);
    int n = strlen(arr);
    ReverseChar(arr, 0, n - 1);
    int start = 0;
    for (int i = 0; i <= n; i++) {
        if (arr[i] == ' ' || arr[i] == '\0') {
            ReverseChar(arr, start, i - 1);
            start = i + 1;
        }
    }
    cout << "Reversed words: " << arr << endl;
    return 0;
}
