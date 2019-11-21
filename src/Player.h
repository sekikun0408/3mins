#pragma once
#include "BaseObject.h"
#include <Siv3D.hpp>
#include "Define.h"
#include "Walker.h"
#include "Fly.h"
class Player
{
public:
	Player();
	~Player();

	void PlayerInit();
	void PlayerUpdate(Walker *_walker, Fly *_fly, BaseObject *_c, BaseObject *_p);
	void PlayerDraw();
	void PlayerExit();
	void KeyDHit(Walker *_w);
	void KeySHit(BaseObject *_c);
	void MouseHit(Fly *_f);
	void SpaceHit(BaseObject *_p);

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

