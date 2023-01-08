#include <iostream>

namespace A{
    void y(){
        std::cout << "A모듈의 함수 y"<<std::endl;
    }
}

namespace B{
    void y(){
        std::cout << "B모듈의 함수 y"<< std::endl;
    }
}
int foo(int x){
    return x;
}

int main() {
    int result = ::foo(9); // -> int result = foo(9);와 같다. 이름 공간이 없는 곳에 정의된 함수 foo라는 듯 하다.
    std::cout << result << std::endl; //std이름 공간에 있는 cout을 사용 -> std는 이 프로그렘의 전역 밖에 있는 이름공간이다.
    // endl는 \n과 같은 역할을 한다(xcord상에서는 뒤에 괄호를 열고 뭔가를 넣는거 같지만, 자새한 사용법은 아직 나오지 않음)
    A::y();
    // A (라는 이름 공간) :: (에 있는) y() (함수)
    B::y();
    // 위와 같은 함수지만 다른 이름공간에 선언 된 함수 y이다.
}
