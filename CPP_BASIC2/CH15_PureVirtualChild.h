#pragma once
#include "Io.h"
#include "CH15_PureVirtualParent.h"


class PureVirtualChild : public PureVirtualParent{
public:
	virtual void Print();//= 0;//���������Լ�

	void PrintClass() override {
		cout << "Pure Virtal Parent Fucntion Override" << endl;
	}
};
