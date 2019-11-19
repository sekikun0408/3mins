#include "Player.h"



Player::Player()
{
	img_bow = Texture(U"data/slime_green.png");
	img_shield = Texture(U"data/slime_blue.png");
	img_sword = Texture(U"data/slime_red.png");
	img_wand = Texture(U"data/slime_purple.png");

	hitBox = Rect(HITPOINT_1_X-5, HITPOINT_1_Y-5, HITPOINT_3_X - HITPOINT_2_X+10,5+5);
}


Player::~Player()
{
}

void Player::PlayerInit()
{
}

void Player::PlayerUpdate()
{

}

void Player::PlayerDraw()
{

	img_bow({ 0,0,96,96 }).draw(PLAYER_BOW_X, PLAYER_BOW_Y);
	img_shield({ 0,0,96,96 }).draw(PLAYER_SHIELD_X, PLAYER_SHIELD_Y);
	img_sword({ 0,0,96,96 }).draw(PLAYER_SWORD_X, PLAYER_SWORD_Y);
	img_wand({ 0,0,96,96 }).draw(PLAYER_WAND_X, PLAYER_WAND_Y);

	hitBox.draw(ColorF(255, 0, 0, 0.5));
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
