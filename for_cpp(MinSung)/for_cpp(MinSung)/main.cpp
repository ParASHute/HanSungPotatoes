#include <iostream>
#include <cstring>
using namespace std;
//클라스 설계 = 특성 + 행동 == c에서의 구조체랑 같음 -> 점을 통해서 들어감
class circle{
    //원의 특성은 반지름 -> 변수로 넣는다
private: //-> 아래 모든 것들은 접근 불가능해짐 아래 함수도 못접근함 --> 아래 함수에만 퍼블릭 넣어주면됨
//public: //-> 캡슐에서 꺼내서 암나 접근 가능
    int radius; //-> 캡슐화 되어 변수를 보호 하는 상태임
    //그 다음은 행동이 있다 -> (동사적) 원의 면적을 구함 --> '멤버'함수
public:
    // 셋기능 함수 --> 맴버 변수에 값 넣는것
    void setRadius(){
        radius = 10;
    }
    //get 기능함수 --> 맴버 변수에 값을 읽어옴
    int getRadius(){
        return radius;
    }
    double getarea(){
        double area = radius * radius * 3.141592;
        return area;
    }
};
class circleA{
private:
    int radius;
public:
    //생성자 함수 만들거임 -> 원래는 만드는데 안만들면 기본 생성자 이름을 컴파일러가 알아 처리
    circleA(){radius = 10;}
    circleA(int r){radius = r;}
    // 생성자 특) 클라스랑 이름 같고, 리턴타입 안줌, 여러개 삽가능임, 객체의 맴버 변수 초기화해줌
    void setRadius();
    int getRadius();
    double getarea();
};
void circleA::setRadius(){
    radius = 10;
}
int circleA::getRadius(){
    return radius;
}
double circleA::getarea(){
    double area = radius * radius * 3.141592;
    return area;
}
int main() {
    circle pizza;
//    pizza.radius = 100; --> 프라이빗 되서 못씀
    pizza.setRadius();
    //cin >> pizza.radius;
    cout<<"반지름은 "<<pizza.getRadius()<<endl;
    cout<<pizza.getarea()<<endl;
    
    circleA pizzaa;// 여기서 생성자 힘수를 호출함
    circleA donut(5); // 오류뜰꺼임 ->10줄써야 문제 안생김
    cout<<"pizza's radius : "<<pizzaa.getRadius()<<endl;
    cout<<"pizza's area :"<<pizzaa.getarea()<<endl;
    cout<<"donut's radius : "<<donut.getRadius()<<endl;
    cout<<"donut's radius :"<<donut.getarea()<<endl;
}
