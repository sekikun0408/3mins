#include "Walker.h"



Walker::Walker()
{
	img_walk = Texture(U"data/mon1_walk.png");
	img_die = Texture(U"data/mon1_die.png");
	img_attack = Texture(U"data/mon1_attack.png");
	draw_rect = { 0,0,96,96 };
}


Walker::~Walker()
{
}

void Walker::Init()
{
	SetFrame(0);
}

void Walker::Update()
{
	if (GetIsLive() && GetIsSpwan()) {
		perfect_rect = { (int)GetX() - 5, (int)GetY() - 5, 10, 10 };
		good_rect = { (int)GetX() - 16, (int)GetY() - 16, 32, 32 };
		bad_rect = { (int)GetX() - 32, (int)GetY() - 32, 64, 64 };

		if (GetSpeed() <= 5.0f) {
			SetSpeed(GetSpeed() + 0.14f);
		}
		UpdateFrame();


		Attack();


		switch (GetSpwanPoint())
		{
		case enSpwanPoint_1:
			MovingPattern1(endPoint_pos[GetEndPoint()]);
			break;
		case enSpwanPoint_2:
			MovingPattern1(endPoint_pos[GetEndPoint()]);
			break;
		case enSpwanPoint_3:
			MovingPattern1(endPoint_pos[GetEndPoint()]);
			break;
		case enSpwanPoint_4:
			MovingPattern1(endPoint_pos[GetEndPoint()]);
			break;
		default:
			break;
		}
	}
	
}

void Walker::Draw()
{
	if (GetIsLive() && GetIsSpwan()) {
		switch (GetState())
		{
		case enIdle:
			break;
		case enWalk:
			if (GetSpwanPoint() > enSpwanPoint_2)
				img_walk(draw_rect).mirrored().draw(GetX() - IMG_SIZE_96 / 2, GetY() - IMG_SIZE_96 / 2);
			else
				img_walk(draw_rect).draw(GetX() - IMG_SIZE_96 / 2, GetY() - IMG_SIZE_96 / 2);
			break;
		case enAttack:
			if (GetSpwanPoint() > enSpwanPoint_2)
				img_attack(draw_rect).mirrored().draw(GetX() - IMG_SIZE_96 / 2, GetY() - IMG_SIZE_96 / 2);
			else
				img_attack(draw_rect).draw(GetX() - IMG_SIZE_96 / 2, GetY() - IMG_SIZE_96 / 2);
			break;
		case enDie:
			if (GetSpwanPoint() > enSpwanPoint_2)
				img_die(draw_rect).mirrored().draw(GetX() - IMG_SIZE_96 / 2, GetY() - IMG_SIZE_96 / 2);
			else
				img_die(draw_rect).draw(GetX() - IMG_SIZE_96 / 2, GetY() - IMG_SIZE_96 / 2);
			break;
		case enMAX:
			break;
		default:
			break;
		}
		perfect_rect.draw(ColorF(0, 0, 0, 0.5));
		good_rect.draw(ColorF(128, 128, 0, 0.5));
		bad_rect.draw(ColorF(128, 0, 0, 0.5));
	}
}

void Walker::Exit()
{

}

void Walker::Animation()
{
	int i = GetFrame() % ( 240 /(int)GetSpeed() )/ (30 / (int)GetSpeed());
	draw_rect = { 96 * i, 0 , 96, 96 };

	if (GetState() == enDie)
	{

		if (i == 7)
		{
			SetIsLive(false);
		}
	}
	if (GetState() == enAttack)
	{
		if (i == 7)
		{
			ChangeState(enDie);
		}
	}


}
//ewsffsdhgfjhkgjlkhjghfgdffhgdfdjg
void Walker::Dead()
{
	SetX(-100);
	SetY(-100);
	perfect_rect = { (int)GetX() - 5, (int)GetY() - 5, 10, 10 };
	good_rect = { (int)GetX() - 20, (int)GetY() - 20, 40, 40 };
	bad_rect = { (int)GetX() - 40, (int)GetY() - 40, 80, 80 };
	SetIsSpwan(true);
	SetIsLive(false);

}

void Walker::Attack()
{
	if (GetX() == endPoint_pos[GetEndPoint()].x && 
		GetY() == endPoint_pos[GetEndPoint()].y)
	{
		if (GetState() == enWalk)
		{
			//hp - 10;
			ChangeState(enAttack);
		}
	}
}

void Walker::MovingPattern1(Pos _EndPoint)
{
	float _x = GetX();
	float _y = GetY();

	float dx = _EndPoint.x - _x;
	float dy = _EndPoint.y - _y;
	float rot = atan2f(dy, dx);
	
	if (_x != _EndPoint.x) {
		_x += GetSpeed() * cosf(rot);
	}
	
	if (_y != _EndPoint.y) {
		_y += GetSpeed() * sinf(rot);
	}

	if (abs(_x - _EndPoint.x) <= 2.5f) _x = _EndPoint.x;
	if (abs(_y - _EndPoint.y) <= 2.5f) _y = _EndPoint.y;

	SetX(_x); SetY(_y);
}

void Walker::MovingPattern2(Pos _EndPoint)
{
	float _x = GetX();
	float _y = GetY();

	float dx = _EndPoint.x - _x;
	float dy = _EndPoint.y - _y;
	float rot = atan2f(dy, dx);

	if (_x != _EndPoint.x) {
		_x += GetSpeed() * cosf(rot);
	}

	if (_y != _EndPoint.y) {
		_y += GetSpeed() * sinf(rot);
	}

	if (abs(_x - _EndPoint.x) <= 2.0f) _x = _EndPoint.x;
	if (abs(_y - _EndPoint.y) <= 2.0f) _y = _EndPoint.y;

	SetX(_x); SetY(_y);
}

void Walker::MovingPattern3(Pos _EndPoint)
{
	float _x = GetX();
	float _y = GetY();

	float dx = _EndPoint.x - _x;
	float dy = _EndPoint.y - _y;
	float rot = atan2f(dy, dx);

	if (_x != _EndPoint.x) {
		_x += GetSpeed() * cosf(rot);
	}

	if (_y != _EndPoint.y) {
		_y += GetSpeed() * sinf(rot);
	}

	if (abs(_x - _EndPoint.x) <= 2.0f) _x = _EndPoint.x;
	if (abs(_y - _EndPoint.y) <= 2.0f) _y = _EndPoint.y;

	SetX(_x); SetY(_y);
}

void Walker::MovingPattern4(Pos _EndPoint)
{
	float _x = GetX();
	float _y = GetY();

	float dx = _EndPoint.x - _x;
	float dy = _EndPoint.y - _y;
	float rot = atan2f(dy, dx);

	if (_x != _EndPoint.x) {
		_x += GetSpeed() * cosf(rot);
	}

	if (_y != _EndPoint.y) {
		_y += GetSpeed() * sinf(rot);
	}

	if (abs(_x - _EndPoint.x) <= 2.0f) _x = _EndPoint.x;
	if (abs(_y - _EndPoint.y) <= 2.0f) _y = _EndPoint.y;

	SetX(_x); SetY(_y);
}
