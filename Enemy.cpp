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
	cout << "�������������������ҁ�������������" << endl;
	cout << "�l�l�l�l�l�l�l�l�l�l�l�l�l�l�l�l�l" << endl;

	if (enemy1._hp > 0) {
		cout << "���@�@�@�@�@�S�u�����I�I�@�@�@�@��" << endl;

	}
	else if(enemy2._hp>0){
		cout << "���@�@�@�@�@�h���S���I�I�@�@�@�@��" << endl;

	}
	else {
		cout << "���@�@�@�@�@�i�V�I�H�I�H�@�@�@�@��" << endl;

	}

	cout << "�u�u�u�u�u�u�u�u�u�u�u�u�u�u�u�u�u" << endl;
	cout << "����������������fin����������������" << endl;
}
void Enemy::damage(int damage)
{
	_hp -= damage;
}

void Enemy::play(Enemy& enemy)
{
	cout << "�������������^�[���J�n������������" << endl;

	playBase(enemy);

	cout << "�������������^�[���I��������������" << endl;
}