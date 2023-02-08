#include <iostream>
using namespace std;
enum suit {clubes, diamonds, hreats, spades};
//enum은 열거 타입니다. 열거타입은 변수에 할당값을 넣어주는 일정의 배열이다
//clubes가 0의 값을 가지고 있으며 순서대로 0, 1, 2, 3이 할당된다 따라서 정수와 비교 연산이 가능하다
//하지만 정수를 직접 배정해 줄수 없다.
struct card{
    enum suit s;
    int rank;
};
struct card deck[52];
//c에서의 구조체와 같다(cpp는 c를 포함하고 있다는 것을 잊지말자)

struct Card{
    enum suit s;
    int Rank;
};
Card Deck[52];
//cpp에서는 앞에 struck를 안붙인 상태로 선언이 가능하다.
enum class Suit{clube, diamond, hreat, spade};
//위에와 같은 열거형변수지만, 위에는 값이 할당 되있으므로 3인 정수가 아닌 이름 그자체로서 비교를 하게된다.
//c에서의 형식과는 다르게 정수와 비교연산이 불가능하다

double ave(double a, double b){
    return ((a+b)/2);
}

double ave(double a, double b, double c){
    return ((a+b+c)/3);
}
// 24번 줄에 선언된 ave와 28번에 선언된 ave 함수는 이름이 같기 때문에 c에서는 이런 형식으로 선언 할수 없다.
// 하지만 cpp애서는 오버로딩이라고 부르며 용시 들어가는 파라미터 리스트(함수 뒤 선언된 변수의 형태 또는 개수)가 다르면
// 같은 이름으로 선언 해도 된다.
// 이때 함수를 선언했을때 파라미터의 개수와 타입을 확인해 컴파일러가 둘중 하나르 골라 실행한다.

int main() {
    const int VAL = 10;
    // c에서의 const랑 같은 역할임
    double e = 2.71828;
    const double* doublePTR = &e;
    // 7번줄에서 선언한 변수 e에 값을 상수로 가지는 변수를 선언
    // *doublePTR = 30.3027;을 선언한다면 컴파일 오류가 ㄸ<ㅁ
    // 왜냐하면 위에서 e의 값을 상수로서 선언한 것이기 때문
    // 또다른 변수 r을 선언한후 doublePTR = &r;이라고 해도 오류 발생함
    cout << ave(2.0, 3.0 , 3.5) << endl;
    cout << ave(2.0, 3.0);
    // 둘은 같은 함수를 선언했지만 안에 파라미터값의 개수가 차이가 나므로 오버로딩을 통해 컴파일러가 알아서 함수를 호출 실행한다.
}
