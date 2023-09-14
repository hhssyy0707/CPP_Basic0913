#include "main.h"
#include "io.h"

void Pointer() {
	int a = 10;

	cout << a << endl; //�� value ��� 
	cout << &a << endl; //a�� �ּҰ��� ����ض�

	int* pa = &a; // ������ ������ �ּҰ� ����
	int** ppa = &pa;
	cout << pa << endl; //���� pa���� a�� �ּҰ�(0x0....)���� �������
	cout << *pa << endl;//������ ������ �ض� �����Ϳ�����(����������), �� ���� ��µ�
	cout << **ppa << endl;

	//����ִ� ��
	//a -> 10
	//pa -> a�� �ּҰ�
	// 
	//pa pa�� �ִ� �ּҰ�(���⼭�� a�� �ּҰ�)���� �̵��� �� ���� �ǹ�
	//������ ������ �����Ͻÿ�, ������ �����͸� �ǹ̸� ���Ѵ�
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