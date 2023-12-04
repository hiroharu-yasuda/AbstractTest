#pragma once

class Enemy
{
protected:
	int _hp;
	int _atk;

public:
	virtual void attack(Enemy& enemy) = 0;
	virtual void playBase(Enemy& enemy) = 0;
	virtual void setHp(Enemy& enemy) = 0;
	void play(Enemy& enemy);

	// ダメージを受ける値
	void damage(int damage);
	void battle(Enemy& enemy1, Enemy& enemy2);
};

