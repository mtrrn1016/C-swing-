#include <iostream>										//<iostream>헤더를 #include해 c++ 입출력을 위한 클래스와 객체를 선언시킴.

using namespace std;									//std::를 생략하기위해 using과 이름충돌방지를 위한 namespace로 std 이름  공간에 있는 모든 std를 생략함.

int main() {											//프로그램 실행의 시작인 main함수를 입력.

	char name[12];										//이름을 적을 수 있는 문자 변수를 지정하기 위해 char을 이용하고 이름을 적을 수 있게 한글 비트 수를 고려하여 []안에 12를 써넣는다.
	cout << "당신의 이름은 무엇입니까? ";				//cout <<뒤에 ""안에 오는 문자들을 출력해냄
	cin.getline(name, 12, '\n');						//cin.getline()으로 ()안에 공백입력이 가능한 변수를 입력받는다.
	cout << "반갑습니다. "<< name << "님\n" << endl;	//cout <<뒤에 있는 문자와 입력받은 이름을 출력한다. \n과 << endl을 이용해 두 줄을 넘긴다.

	cout << "----------SWING 30----------" << endl;		
	cout << "음료의 가격 입력을 시작합니다\n" << endl;

	int colaP = 0;										//int로 숫자변수를 지정하고 초기화 시킴.
	int waterP = 0;
	int fantaP = 0;

	cout << "콜라의 가격 : ";							//int에서 지정한 변수들을 cin>>뒤에 입력해 피연산자로서 입력받는다.
	cin >> colaP;

	cout << "삼다수의 가격 : ";
	cin >> waterP;

	cout << "환타의 가격 : ";
	cin >> fantaP;

	cout << endl << "개수를 입력해주세요.\n" << endl;

	int colaQ = 0;										//int를 이용해 숫자 변수 음료들의 수량을 지정하고 초기화 시킨다.
	int waterQ = 0;
	int fantaQ = 0;

	cout << "콜라 수량 : ";
	cin >> colaQ;										//앞서 지정한 변수를 cin>>뒤의 피연산자로 실행시 입력받는다.
	
	cout << "삼다수 수량 : ";
	cin >> waterQ;

	cout << "환타 수량 : ";
	cin >> fantaQ;

	cout << "------------------------------" << endl;

	int sum;											//최종으로 구할 값을 sum으로 숫자변수를 지정한다.
	sum = ((colaP * colaQ) + (waterP * waterQ) + (fantaP * fantaQ)) - 500;		//sum의 공식을 적어 앞의 변수들을 연산한 sum의 값을 지정한다.

	cout << "500원을 할인받아 총" << sum << "원 입니다." << endl;		//cout<<를 이용해 최종 가격안내문과 최종 가격변수인 sum을 출력한다.

	return 0;											//return 0;으로 실행할 함수의 끝을 알린다.
}