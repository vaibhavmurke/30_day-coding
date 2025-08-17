#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int duplicates(int arr[],int size){
    map<int,int>brr;
    for(int i =0 ;i<size;i++){
        brr[arr[i]]++;
    }
    for(auto it :brr)
    {
        if(it.second > 1){
           cout<<it.first<<" ";
        }
    }
}
int main(){
     int arr[] = { 1,2,3,4,3};
    int size = 5;
    duplicates(arr,size);
    
    return 0;
}
