#include <iostream>
using namespace std;
auto disco(double a, int b) -> decltype(a/b){ // disco의 타입은 auto로 a/b의 형태를 보고 결정한다
    if(b != 0){
        return a/b;
    }
    else return 0;
}
inline int sq(int a){
    return a * a;
}
// 컴파일러에게 가급적 메크로 함수 처럼 처리 하라 요청한 함수임
// 컴파일러의 판단에 따라 성능 향상에 방해가 된다 생각하면 무시한다.
// inline을 통해 메크로 함수를 문법 내로 포함 시켰기 떄문에 전처리가 아닌 Cpp문법을 이해 할수 있는 컴파일러에 의해 처리 된다.
#define SQ(x) x * x
#define sQ(x) (x) * (x)
//13줄과 14줄에 있는 것 둘다 메크로 함수임

int main() {
    double x = 3;
    decltype(x) y = 3; // x가 더블 형으로 선언이 되 있으니 y또한 더블형으로 선언 된다.
    cin >> x; // -> scanf("%d, &x); 의 역할을 한다
    auto a = disco(x, y); //a 는 dico함수에서 리턴 되는 값에 따라 자동으로 값을 결정한다
    cout << a << endl; // -> printf("%d, a)와 같은 역할이다. 뒤에 endl은 \n의 역할
    
    int arr[5] = {1,2,3,4,5};
    for(size_t i = 0; i < 5; i++) cout << arr[i] << ' ';
    //size_t는 int와 같은 역할을 하고 있다. 하지만 배열을 동반한 반복문에선 size_t를 동반하는 것을 권장한다.
    //size_t의 크기는 컴파일러의 비트(32비트 or 64비트)에 따라 달라지는데 32일땐 4바이트 64비트에선 8비트로 잡한다.
    
    int b;
    cin >> b;
    cout << sq(b + 9);
    cout << sQ(b + 9);
    cout << SQ(b + 9);
    //31번 줄과 33번 줄은 서로 같은 값을 뽑아 낸다
    //이 식의 경우엔 b + 9 * b + 9의 형태의 식이 되어 9 * b가 먼저 연산 된다. -> 따라서 의도한 계산 식이 나오지 않는다.
}
