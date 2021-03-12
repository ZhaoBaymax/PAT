#include <iostream>
#include <string>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    unordered_map<int,string> num_map = {{1,"yi"},{2,"er"},{3,"san"},{4,"si"},{5,"wu"},{6,"liu"},{7,"qi"},{8,"ba"},{9,"jiu"},{0,"ling"}};
    string nums;
    int sum = 0;
    cin >> nums;
    for(auto num : nums){
        sum += (num - '0');
    }
    vector<string> res;
    while(sum>0){
        int n = sum %10;
        res.push_back(num_map[n]);
        sum = sum/10;
    }
    for(int i = res.size()-1; i>=0; i-- ){
        if(i!=0)
            cout << res[i] + " " ;
        else
            cout << res[i] << endl;
    }
}