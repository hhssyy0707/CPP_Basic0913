﻿#include "main.h"
#include "io.h"
#include "CH10_class.h"
#include "Animal.h"
#include "Vehicle.h"
#include "Bike.h"
#include "Atv.h"
#include "Arithmatic.h"
#include "CH14_VirtualParent.h"
#include "CH14_VirtualChild.h"
#include "CH15_PureVirtualChild.h"


#define PLUS (2 + 3)

int main(){
	//MinMax();
	//InputBall();
	//ChangeBall();
	//ArrayAdd();
	//MaxValue();
	BlackPart();
	//DynamicVariable();

	Car Sonata(80);
	Sonata.DriveVelocity();
	Sonata.DriveTime();


	//동적할당 예시
	int* a = new int;
	//a = 10;
	*a = 10;

	/***************LNK2019 ERROR***************/
	/*******************************************
	//class 동적할당
	Animal* Dog = new Animal;
	//Dog.PrintFinger(); 
	Dog->PrintFinger(); // class가 동적선언돼있을 수있다 (화살표 있는경우)
	delete Dog;
	/***************LNK2019 ERROR***************/
	/*******************************************/


	Vehicle Ray(2023, 100);
	
	//자식 클래스 생성
	Atv Moto;
	Moto.PrintPrice();
	Moto.PrintTire();
	cout << Moto.Price << endl;


	//함수 오버로딩
	Arithmatic Expression;
	Expression.Sum(10);
	//Expression.SumFloat(10.123);
	
	//오버로딩 후
	Arithmatic Expression2;
	Expression2.Sum(10.123f);

	//함수 오버라이딩
	Moto.Print();

	//생성자가 명시적으로 선언
	//자식 클래스 선언 : 명시적 선언
	//Auto mobile();
	//mobile().PrintPrice();


	VectorClass();

	cout << "============================================" << endl;
	//정적생성
	VirtualParent Parent1;
	VirtualChild Child1;

	Parent1.PrintClass();
	Child1.PrintClass();

	cout << "============================================" << endl;
	//동적생성
	VirtualParent* Parent2 = new VirtualParent;
	VirtualChild* Child2 = new VirtualChild;

	Parent2->PrintClass();
	Child2->PrintClass(); // overriding

	Parent2 = Child2;
	Parent2->PrintClass();

	cout << "============================================" << endl;

	//가상함수
	VirtualParent2* Parent3 = new VirtualParent2;
	VirtualChild2* Child3 = new VirtualChild2;

	Parent3->PrintClass();
	Child3->PrintClass(); // overriding

	Parent3 = Child3;
	Parent3->PrintClass();

	cout << "============================================" << endl;
	//순수가상함수
	//PureVirtualParent PureParent; => 추상클래스는 단독으로 객체 생성 불가
	//추상클래스를 상속받는 자식 클래스는 순수 가상함수를 재정의 해야함.
	PureVirtualChild PureChild;
	PureChild.Print();
	PureChild.PrintClass();
	cout << "============================================" << endl;

	cout << SumNumber(3, 2) << endl;
	cout << SumNumber(3.2f, 1.9f) << endl;

	cout << "============================================" << endl;

	cout << endl << "End of Code" << endl;
}