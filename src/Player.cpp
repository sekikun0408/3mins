#include "Player.h"
#include "SpwanInjector.h"




Player::Player()
{
	img_bow = Texture(U"data/slime_green.png");
	img_shield = Texture(U"data/slime_blue.png");
	img_sword = Texture(U"data/slime_red.png");
	img_wand = Texture(U"data/slime_purple.png");
	img_attack = Texture(U"data/attack2.png");
	hitBox = Rect(HITPOINT_1_X-48, HITPOINT_1_Y-5, HITPOINT_3_X - HITPOINT_2_X+ 96 ,5+5);

}


Player::~Player()
{
}

void Player::PlayerInit()
{
}

void Player::PlayerUpdate(Walker *_walker, Fly *_fly, BaseObject *_c, BaseObject *_p)
{

	KeyDHit(_walker);
	for (size_t i = 0; i < 5; i++)
	{
		//if (ss[i].isActive) {
			ss[i].update();
		//	break;
		//}
	}

}

void Player::PlayerDraw()
{

	img_bow({ 0,0,96,96 }).draw(PLAYER_BOW_X, PLAYER_BOW_Y);
	img_shield({ 0,0,96,96 }).draw(PLAYER_SHIELD_X, PLAYER_SHIELD_Y);
	img_sword({ 0,0,96,96 }).draw(PLAYER_SWORD_X, PLAYER_SWORD_Y);
	img_wand({ 0,0,96,96 }).draw(PLAYER_WAND_X, PLAYER_WAND_Y);

	hitBox.draw(ColorF(255, 0, 0, 0.5));

	for (size_t i = 0; i < 5; i++)
	{
		//if (ss[i].isActive) {
			ss[i].draw();
		//	break;
		//}
	}
	
}

void Player::PlayerExit()
{
}

bool Player::checkHitPerfect(BaseObject _b)
{
	if (hitBox.intersectsAt(_b.GetPerfectRect()))
	{
		return true;
	}
	return false;
}

bool Player::checkHitGood(BaseObject _b)
{
	if (hitBox.intersectsAt(_b.GetGoodRect()))
	{
		return true;
	}
	return false;
}

bool Player::checkHitBad(BaseObject _b)
{
	if (hitBox.intersectsAt(_b.GetBadRect()))
	{
		return true;
	}
	return false;
}

void Player::KeyDHit(Walker *_w)
{
	if (KeyD.down()) {
		for (size_t i = 0; i < 5; i++)
		{
			if (!ss[i].isActive) {
				ss[i].isActive = true;
				Print(i);
				break;
			}
		}
		for (int i = 0; i < MAX_WALKER; i++)
		{
			if (checkHitPerfect(_w[i]))
			{
				combo++;
				score += 100;
				_w[i].Dead();
				Print(combo);
				Print(score);
				Print(_w[i].GetIsLive());

			}
			else if (checkHitGood(_w[i]))
			{
				combo++;
				score += 75;
				_w[i].Dead();
				Print(combo);
				Print(score);
				Print(_w[i].GetIsLive());

			}
			else if (checkHitBad(_w[i]))
			{
				combo++;
				score += 50;
				_w[i].Dead();
				Print(combo);
				Print(score);
				Print(_w[i].GetIsLive());

			}


		}
	}

}

void Player::KeySHit(BaseObject *_c)
{
	
}

void Player::MouseHit(Fly *_fly)
{
}

void Player::SpaceHit(BaseObject *_p)
{
}
