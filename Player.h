#pragma once
#include "BaseObject.h"
#include <Siv3D.hpp>
#include "Define.h"
class Player
{
public:
	Player();
	~Player();

	void PlayerInit();
	void PlayerUpdate();
	void PlayerDraw();
	void PlayerExit();

	bool checkHitPerfect(BaseObject _b);
	bool checkHitGood(BaseObject _b);
	bool checkHitBad(BaseObject _b);
private:
	Texture img_bow;
	Texture img_shield;
	Texture img_sword;
	Texture img_wand;


	Rect hitBox;


};

