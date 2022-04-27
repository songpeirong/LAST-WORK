#include<iostream>
#include<string>
using namespace std;

#define SPLIT_SHOT 1
#define MYSTIL_SNAKE 2
#define MANA_SHIELD 3
#define STONE_GAZE 4

class Medusa
{
public:
	Medusa() {};
	void useSplitShot()
	{
		cout << "Split Shot" << endl;
	}
	void useMysticSnake()
	{
		cout << "Mystic Snake" << endl;
	}
	void useManaShield()
	{
		cout << "Mana Shield" << endl;
	}
	void useStoneGaze()
	{
		cout << "Stone Gaze" << endl;
	}
};

void useSkill()
{
	Medusa medusa;
	int skill;
	cin >> skill;
	switch (skill)
	{
	case SPLIT_SHOT:
		medusa.useSplitShot();
		break;
	case MYSTIL_SNAKE:
		medusa.useMysticSnake();
		break;
	case MANA_SHIELD:
		medusa.useManaShield();
		break;
	case STONE_GAZE:
		medusa.useStoneGaze();
		break;
	default:
		cout << "无法使用技能" << endl;
		break;
	}
}

int main()
{
	useSkill();
	return 0;
}