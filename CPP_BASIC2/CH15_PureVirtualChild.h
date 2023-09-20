#pragma once
#include "Io.h"
#include "CH15_PureVirtualParent.h"


class PureVirtualChild : public PureVirtualParent{
public:
	virtual void Print();//= 0;//순수가상함수

	void PrintClass() override {
		cout << "Pure Virtal Parent Fucntion Override" << endl;
	}
};
