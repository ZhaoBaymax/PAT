#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int res = 0;
    while(num > 1){
        if (num %2 == 0) num = num/2;
        else num = (3*num + 1)/2;
        res++;
    }
    cout << res << endl;
    
}
