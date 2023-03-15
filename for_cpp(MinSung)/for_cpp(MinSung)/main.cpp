#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
int main(){
    string study, str;
    double aver = 0, sum = 0;
    int num, n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> study >> num >> str;
        sum += num;
        if(str[0] == 'A'){
            if(str[1] == '+') aver += 4.3 * num;
            if(str[1] == '0') aver += 4.0 * num;
            if(str[1] == '-') aver += 3.7 * num;
        }
        if(str[0] == 'B'){
            if(str[1] == '+') aver += 3.3 * num;
            if(str[1] == '0') aver += 3.0 * num;
            if(str[1] == '-') aver += 2.7 * num;
        }
        if(str[0] == 'C'){
            if(str[1] == '+') aver += 2.3 * num;
            if(str[1] == '0') aver += 2.0 * num;
            if(str[1] == '-') aver += 1.7 * num;
        }
        if(str[0] == 'D'){
            if(str[1] == '+') aver += 1.3 * num;
            if(str[1] == '0') aver += 1.0 * num;
            if(str[1] == '-') aver += 0.7 * num;
        }
    }
    cout << fixed << setprecision(2);
    cout << round(aver / sum * 100) / 100 << endl;
}
