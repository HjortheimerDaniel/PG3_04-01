#include "Enemy.h"

Enemy::Enemy()
{
}

Enemy::~Enemy()
{
}

void Enemy::Update(int phase)
{
		CallFunc(phase);

}

void Enemy::Approach()
{
	printf("�ڋ�\n");
}

void Enemy::Withdraw()
{
	printf("���E\n");

}

void Enemy::Attack()
{
	printf("�U��\n");
}

void (Enemy::* Enemy::spFuncTable[])()
{
	&Enemy::Approach,
	& Enemy::Attack,
	& Enemy::Withdraw,
	
};


