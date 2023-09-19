
#include "main.h"
#include "Io.h"
#include <string>

void StringClass() {
	string Txt1 = "Hello World";
	string Txt2 = "Hello SeSac";
	cout << Txt1 << endl;
	cout << Txt2 << endl;

	cout << (Txt1 < Txt2) << endl;
	cout << (Txt1 > Txt2) << endl;
	cout << (Txt1 == Txt2) << endl;
	cout << (Txt1 + Txt2) << endl;
	cout << Txt1.front()  << endl;
	cout << Txt1.back() << endl;
	cout << Txt1.size() << endl;
	cout << Txt1.append(Txt2) << endl;
	cout << Txt1.substr(5) << endl;
	cout << Txt1.find("Hello") << endl;
}