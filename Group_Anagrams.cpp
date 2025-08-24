#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;


vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> mp;

    for (string s : strs) {
      
        int freq[26] = {0};
        for (char c : s) {
            freq[c - 'a']++;
        }

        
        string key = "";
        for (int i = 0; i < 26; i++) {
            key += "#" + to_string(freq[i]);  
        }

        mp[key].push_back(s);
    }

  
    vector<vector<string>> result;
    for (auto& entry : mp) {
        result.push_back(entry.second);
    }
    return result;
}

int main() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    vector<vector<string>> ans = groupAnagrams(strs);

    for (auto& group : ans) {
        cout << "[ ";
        for (auto& word : group) {
            cout << word << " ";
        }
        cout << "]\n";
    }

    return 0;
}
