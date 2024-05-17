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
	printf("ê⁄ãﬂ\n");
}

void MyClass::Withdraw()
{
	printf("ó£íE\n");

}

void MyClass::Attack()
{
	printf("çUåÇ\n");
}

void (MyClass::* MyClass::spFuncTable[])()
{
	&MyClass::Approach,
	&MyClass::Attack,
	&MyClass::Withdraw,
	
};


