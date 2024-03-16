#include <iostream>
using namespace std;

//C++의 데이터 변수
//변수는 데이터를 저장하기 위해 프로그램에 의해 할당받은 메모리 공간

//변수 선언 : 선언은 컴파일러에게 이러한 것이 존재한다라고 알려줍니다.
//선언한 변수 , 함수는 메모리에 할당되지 않고 있는 상태입니다.(아직 사용 중이 아님)
//선언은 프로그램 코드 내에 선언합니다.(전역)
//extern 자료형 변수명;

//변수 정의 : 필요한 코드를 생성하는 것(선언 , 초기화)
//자료형 변수명;

//자료형(Type)
//컴퓨터가 데이터를 판단하는 기준
extern int i; //i에 대한 선언(i가 외부에 존재하고 있음(extern)을 알려줌)
int k; //변수 k에 대한 정의(선언)
int q = 5;//변수 q에 대한 정의(초기화)

int main()
{
	int integer = 10; //소수점 없는 숫자를 표현할 수 있는 자료형(정수형) 
	float Float = 3.141592f; //소수점이 있는 숫자를 표현할 수 있는 자료형, 뒤에는 f가 붙습니다.(실수형)
	//Float = -3.14e+16;
	char alphabet = 'a'; //문자를 표현하는 자료형, 작은 따옴표로 감싸주며 문자 1개만 표현(문자형)
	bool onoff = true; //true와 false를 통해 프로그램 내에서 참과 거짓을 표현하는 자료형(논리형)
	bool result = 10 > 5; //식에 대한 결과를 저장하는 경우도 bool로 처리 가능합니다.
	string word = "C++ Programming"; //문장을 표현하는 클래스 개체 string
	//c언어에서는 char [](문자의 배열)을 통해 사용하고 있습니다.
	word = "Apple";//C언어에서는 안되던 초기화가 가능합니다.
	cout << word.at(0) << endl; //문장을 작업할 때 필요한 기능들도 따로 제공됩니다.
	//현재의 기능은 전체 문장 중 첫번째 단어 하나를 뽑는 기능
	word += " Juice";
	cout << word << endl;

	return 0;
}