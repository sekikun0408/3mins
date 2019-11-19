#include "Fly.h"



Fly::Fly()
{
	img_walk = Texture(U"data/mon3_walk.png");
	img_die = Texture(U"data/mon3_die.png");
	img_attack = Texture(U"data/mon3_attack.png");
	draw_rect = { 0,0,96,96 };
}

Fly::~Fly()
{
}

void Fly::Init()
{

}

void Fly::Update()
{
	if (GetIsLive()) {
		UpdateFrame();
		switch (GetSpwanPoint())
		{
		case enSpwanPoint_1:
			MovingPattern1(hitPoint_pos[0]);
			break;
		case enSpwanPoint_2:
			break;
		case enSpwanPoint_3:
			break;
		case enSpwanPoint_4:
			break;
		default:
			break;
		}
	}
}

void Fly::Draw()
{
	if (GetIsLive()) {
		UpdateFrame();
		switch (GetState())
		{
		case enIdle:
			break;
		case enWalk:
			if (GetSpwanPoint() >= enSpwanPoint_3) 
				img_walk(draw_rect).mirrored().draw(GetX() - IMG_SIZE_96 / 2, GetY() - IMG_SIZE_96 / 2);
			else 
				img_walk(draw_rect).draw(GetX() - IMG_SIZE_96 / 2, GetY() - IMG_SIZE_96 / 2);
			break;
		case enAttack:
			break;
		case enDie:
			break;
		case enMAX:
			break;
		default:
			break;
		}
	}
}

void Fly::Exit()
{
}

void Fly::Animation()
{
	int i = GetFrame() % (300 / (int)GetSpeed()) / (60 / (int)GetSpeed());
	draw_rect = { 96 * i, 0 , 96, 96 };
}

void Fly::MovingPattern1(Pos _EndPoint)
{

	int _x = GetX();
	int _y = GetY();

	float dx = _EndPoint.x - _x;
	float dy = _EndPoint.y - _y;
	float rot = atan2f(dy, dx);
	_x += GetSpeed() * cosf(rot);
	_y += GetSpeed() * sinf(rot);
	SetX(_x); SetY(_y);
}

void Fly::MovingPattern2(Pos _EndPoint)
{
}

void Fly::MovingPattern3(Pos _EndPoint)
{
}

void Fly::MovingPattern4(Pos _EndPoint)
{
}
