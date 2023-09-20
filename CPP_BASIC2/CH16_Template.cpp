
#include "Io.h"

int SumNumber(int a, int b) {
	int Sum = a + b;
	//cout << "intSum : " << Sum << endl;
	return Sum;
}

float SumNumber(float a, float b) {
	float Sum = a + b;
	//cout << "floatSum : " << Sum << endl;
	return Sum;
}

template <typename T>
T SumNumber(T a, T b) {
	return a + b;

}