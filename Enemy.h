#pragma once
#include <stdio.h>

class Enemy
{
	public:

		Enemy();
		~Enemy();

		void Update(int phase);

		void Approach();

		void Withdraw();

		void Attack();

		void CallFunc(int index) {
			(this->*(spFuncTable[index]))();
		}

	private:

		static void (Enemy::* spFuncTable[])();
		//size_t phase_ = static_cast<size_t>(phase_);
		int phase = 0;
	
};

