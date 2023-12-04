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
		cout << "＝＝＝＝＝＝ターン開始＝＝＝＝" << endl;

		enemy.playBase(enemy);

		cout << "＝＝＝＝＝＝ターン終了＝＝＝＝" << endl;
	}

};

battle::battle()
{
}

battle::~battle()
{
}