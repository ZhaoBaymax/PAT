#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<string>> res;
    for(int i = 0 ; i < n; i++){
        string name,num,grade;
        cin >> name >> num >> grade;
        vector<string> t = {name,num,grade};
        res.push_back(t);
    }
    sort(res.begin(), res.end(), [] (const auto& a, const auto& b){
        return stoi(a[2]) > stoi(b[2]);
    });
    cout << res[0][0] + " " + res[0][1]<<endl;
    cout << res[res.size()-1][0] + " " + res[res.size()-1][1] << endl;
}