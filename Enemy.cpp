#include <iostream>
#include "Enemy.h"

using namespace std;
void Enemy::battle(Enemy& enemy1, Enemy& enemy2) {

	enemy1.setHp(enemy1);
	enemy2.setHp(enemy2);
	do {

		enemy1.play(enemy2);

		enemy2.play(enemy1);
	} while (enemy1._hp > 0 && enemy2._hp > 0);
	cout << "＝＝＝＝＝＝＝＝勝者＝＝＝＝＝＝＝" << endl;
	cout << "人人人人人人人人人人人人人人人人人" << endl;

	if (enemy1._hp > 0) {
		cout << "＜　　　　　ゴブリン！！　　　　＞" << endl;

	}
	else if(enemy2._hp>0){
		cout << "＜　　　　　ドラゴン！！　　　　＞" << endl;

	}
	else {
		cout << "＜　　　　　ナシ！？！？　　　　＞" << endl;

	}

	cout << "ＶＶＶＶＶＶＶＶＶＶＶＶＶＶＶＶＶ" << endl;
	cout << "＝＝＝＝＝＝＝＝fin＝＝＝＝＝＝＝＝" << endl;
}
void Enemy::damage(int damage)
{
	_hp -= damage;
}

void Enemy::play(Enemy& enemy)
{
	cout << "＝＝＝＝＝＝ターン開始＝＝＝＝＝＝" << endl;

	playBase(enemy);

	cout << "＝＝＝＝＝＝ターン終了＝＝＝＝＝＝" << endl;
}