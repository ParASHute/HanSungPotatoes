#include <iostream>
using namespace std;
int main(){
    string str;
    cin >> str;
    for(int i = 0; str.length()>i; i++){
        if(str[i] >= 65 && str[i] <= 90) str[i] += 32;
        else str[i] -= 32;
    }
    cout << str << endl;
}
// 변수.length() == strlength(변수)
