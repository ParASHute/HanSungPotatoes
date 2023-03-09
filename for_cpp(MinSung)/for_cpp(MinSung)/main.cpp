#include <iostream>
using namespace std;
int main(){
    long long n, m;
    cin >> n >> m;
    cout << std::abs(n - m) << endl;
}
// abs는 절대값, using을 썼는데도 std를 쓴 이유는 std::abs는 long long형에 대해서도 오버로딩이 되어 있어 오버플로우를 방지하기 때문이다.
