#include "Io.h"
#include <vector>

void VectorClass() {

	//배열과 차이점은 알아서 동적생성해준다는 점
	//new로 선언하는 것보다 훨씬 자유로움
	vector<int> vd1; //vd1 배열 생성
	vector<int> vd2(3); //원소개수
	vector<int> vd3(3, 2); //원소개수와 내용 모두 지정

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