#include "Io.h"
#include <vector>

void VectorClass() {

	//�迭�� �������� �˾Ƽ� �����������شٴ� ��
	//new�� �����ϴ� �ͺ��� �ξ� �����ο�
	vector<int> vd1; //vd1 �迭 ����
	vector<int> vd2(3); //���Ұ���
	vector<int> vd3(3, 2); //���Ұ����� ���� ��� ����

	vd1.push_back(10);

	cout << vd1.front() << endl;

	vd1.push_back(20);

	cout << vd1.at(1) << endl;

	vd1.push_back(30);

	cout << vd1.size() << endl;

	vd1.pop_back();
	cout << vd1.size() << endl;
	cout << vd1.capacity() << endl;
}