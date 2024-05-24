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
	printf("Ú‹ß\n");
}

void Enemy::Withdraw()
{
	printf("—£’E\n");

}

void Enemy::Attack()
{
	printf("UŒ‚\n");
}

void (Enemy::* Enemy::spFuncTable[])()
{
	&Enemy::Approach,
	& Enemy::Attack,
	& Enemy::Withdraw,
	
};


