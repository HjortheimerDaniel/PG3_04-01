#include "MyClass.h"

MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}

void MyClass::Update(int phase)
{
		CallFunc(phase);

}

void MyClass::Approach()
{
	printf("�ڋ�\n");
}

void MyClass::Withdraw()
{
	printf("���E\n");

}

void MyClass::Attack()
{
	printf("�U��\n");
}

void (MyClass::* MyClass::spFuncTable[])()
{
	&MyClass::Approach,
	&MyClass::Attack,
	&MyClass::Withdraw,
	
};


