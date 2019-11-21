#pragma once
#include "BaseObject.h"
#include <Siv3D.hpp>
#include "Define.h"
#include "Walker.h"
#include "Fly.h"

struct SwordSlash
{
	Pos pos = { HITPOINT_1_X,HITPOINT_1_Y};
	int frame =0;
	Texture slash = Texture(U"data/attack2.png");
	Rect draw_rect = { 0,0,256,96 };
	bool isActive =false;

	
	void update() {
		if (isActive) {
			frame++;
			int i = frame % 15/3;
			draw_rect = { 256 * i,0,256,96 };
			if (i >= 4) {
				isActive = false;
				frame = 0;
			}
		}
	}
	void draw() 
	{
		if (isActive) {
			slash(draw_rect).scaled(1.5f,1.0f).rotated(0.30f).draw(pos.x-96, pos.y-48);
		}
	}
};


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
	SwordSlash ss[5];

	Texture img_bow;
	Texture img_shield;
	Texture img_sword;
	Texture img_wand;
	Texture img_attack;

	Rect hitBox;


};

