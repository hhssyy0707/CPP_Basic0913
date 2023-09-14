#include "main.h"
#include "io.h"

void Pointer() {
	int a = 10;

	cout << a << endl; //값 value 출력 
	cout << &a << endl; //a의 주소값을 출력해라

	int* pa = &a; // 로인터 변수에 주소값 대입
	int** ppa = &pa;
	cout << pa << endl; //지금 pa에는 a의 주소값(0x0....)값이 담겨있음
	cout << *pa << endl;//포인터 연산을 해라 포인터연산자(참조연산자), 즉 값이 출력됨
	cout << **ppa << endl;

	//담겨있는 것
	//a -> 10
	//pa -> a의 주소값
	// 
	//pa pa에 있는 주소값(여기서는 a의 주소값)으로 이동한 그 값을 의미
	//포인터 변수를 선언하시오, 변수가 포인터를 의미를 뜻한다
	//

	cout << endl;
	int array[3] = { 1,2,3 };
	int* pArray = array;

	cout << "array" << array << endl;
	cout << "pArray" << pArray << endl;

	cout << "array[0]" << array[0] << endl;
	cout << "pArray[0]" << pArray[0] << endl;
	cout << "*pArray" << *pArray << endl;

	cout << "array + 1" << array + 1 << endl;
	cout << "pArray + 1" << pArray + 1 << endl;

	cout << "*array + 1" << *array + 1 << endl;
	cout << "*pArray + 1" << *pArray + 1 << endl;

	cout << "*(array + 1)" << *(array + 1) << endl;
	cout << "*(pArray + 1)" << *(pArray + 1) << endl;

}