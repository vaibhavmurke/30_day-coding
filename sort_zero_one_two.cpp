#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={0,1,2,0,1,2,0,1};
    sort(arr.begin(),arr.end());
    for(auto i :arr){
        cout<<i<<" ";
    }
    return 0;
}
