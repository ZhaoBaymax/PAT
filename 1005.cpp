#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    unordered_map<int,int> nums_map;
    vector<int> res;
    int n = 0;
    int first = 1;
    cin >> n;
    for(int i = 0; i < n ; i++){
        int num;
        cin >> num;
        res.push_back(num);
        while(num != 1){
            if(num%2 == 0){
                num = num/2;
            }else{
                num = (3*num + 1)/2;
            }
            nums_map[num] = 1;
        }
    }
    sort(res.begin(), res.end(),[](const auto& a, const auto& b){
        return a > b;
    });
    for(auto& r : res){
        if(first && nums_map.count(r) == 0  ){
            cout << r ;
            first = 0;
        }
        else if(!first && nums_map.count(r) == 0  ){
            cout << " " << r ;
        }
    }
    cout << endl;
}

