#include<iostream>
#include<string>

using namespace std;

int main(){
    int cnt;
    cin >> cnt;
    while(cnt > 0){
        int Af = 0,Am = 0, Aa = 0;
        int status = 0;
        bool f = true;
        string str;
        cin >> str;
        for(auto s : str){
            if(s != 'P' && s != 'A' && s != 'T'){
                f = false;
                break;
            }
            if(s == 'P'){
                if (status == 0) status = 1;
                else {
                    f = false;
                    break;
                }
            }
            if(s == 'A'){
                if (status == 0){
                    Af ++;
                }else if (status == 1){
                    status = 2;
                    Am++;
                }else if (status == 2){
                    Am ++;
                }else{
                    Aa ++;
                }
            }
            if (s == 'T'){
                if(status == 2){
                    status = 3;
                }else{
                    f = false;
                    break;
                }
            }
        }
        if (status != 3){
            f = false;
        }
        if(Am > 0 && Aa != Af * Am ) f =false;
        if (!f){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
        cnt --;
    }
}