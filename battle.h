#pragma once

#include <iostream>

#include "Goblin.h"
#include "Slime.h"
#include"Enemy.h"
using namespace std;

class battle
{
public:
	battle();
	~battle();

	void play(Enemy& enemy)
	{
		cout << "�������������^�[���J�n��������" << endl;

		enemy.playBase(enemy);

		cout << "�������������^�[���I����������" << endl;
	}

};

battle::battle()
{
}

battle::~battle()
{
}