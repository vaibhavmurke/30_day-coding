#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void merge(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    int i = m - 1, j = 0;

    
    while (i >= 0 && j < n && arr1[i] > arr2[j]) {
        swap(arr1[i], arr2[j]);
        i--;
        j++;
    }

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
}

int main() {
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8};

    merge(arr1, arr2, arr1.size(), arr2.size());

    cout << "arr1 = ";
    for (int x : arr1)
    {

        cout << x << " ";
    }
    cout << "\narr2 = ";
    for (int x : arr2) {
        
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
