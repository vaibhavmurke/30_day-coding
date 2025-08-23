#include <iostream>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string> &strs) {
    if (strs.empty()) return "";

    string prefix = strs[0];

    for (int i = 1; i < strs.size(); i++) {
        int j = 0;
       
        while (j < prefix.size() && j < strs[i].size() && prefix[j] == strs[i][j]) {
            j++;
        }
       
        prefix = prefix.substr(0, j);

        if (prefix == "") return ""; // early stop
    }
    return prefix;
}

int main() {
    vector<string> words = {"vaibhav", "vaibhavi", "vaibhavesh"};

    cout << "Longest common prefix: " << longestCommonPrefix(words) << endl;
    return 0;
}
