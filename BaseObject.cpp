#include "BaseObject.h"

void BaseObject::CheckSpwan(int _frame)
{
	if (_frame == startTime)
		isSpwan = true;
}

void BaseObject::UpdateFrame()
{
	frame++;
}



void BaseObject::SetX(float _x)
{
	pos.x = _x;
}

float BaseObject::GetX()
{
	return pos.x;
}

void BaseObject::SetY(float _y)
{
	pos.y = _y;
}

float BaseObject::GetY()
{
	return pos.y;
}

void BaseObject::SetW(int _w)
{
	w = _w;
}

int BaseObject::GetW()
{
	return w;
}

void BaseObject::SetH(int _h)
{
	h = _h;
}

int BaseObject::GetH()
{
	return h;
}

void BaseObject::SetFrame(int _f)
{
	frame = _f;
}

int BaseObject::GetFrame()
{
	return frame;
}

void BaseObject::SetSpeed(float _speed)
{
	speed = _speed;
}

float BaseObject::GetSpeed()
{
	return speed;
}

void BaseObject::SetIsLive(bool _l)
{
	isLive = _l;
}

bool BaseObject::GetIsLive()
{
	return isLive;
}
void BaseObject::SetIsSpwan(bool _s)
{
	isSpwan = _s;
}
bool BaseObject::GetIsSpwan()
{
	return isSpwan;
}
void BaseObject::SetState(int _s)
{
	state = _s;

}

int BaseObject::GetState()
{
	return state;
}

void BaseObject::SetSpwanPoint(int _p)
{
	spwanPoint = _p;
	switch (_p)
	{
	case enSpwanPoint_1:
		SetX(spwanPoint_pos[enSpwanPoint_1].x);
		SetY(spwanPoint_pos[enSpwanPoint_1].y);
		break;
	case enSpwanPoint_2:
		SetX(spwanPoint_pos[enSpwanPoint_2].x);
		SetY(spwanPoint_pos[enSpwanPoint_2].y);
		break;
	case enSpwanPoint_3:
		SetX(spwanPoint_pos[enSpwanPoint_3].x);
		SetY(spwanPoint_pos[enSpwanPoint_3].y);
		break;
	case enSpwanPoint_4:
		SetX(spwanPoint_pos[enSpwanPoint_4].x);
		SetY(spwanPoint_pos[enSpwanPoint_4].y);
		break;
	case enSpwanPoint_MAX:
		break;
	default:
		break;
	}
}

int BaseObject::GetSpwanPoint()
{
	return spwanPoint;
}

void BaseObject::SetStartTime(int _t)
{
	startTime = _t;
}

int BaseObject::GetStartTime()
{
	return startTime;
}

void BaseObject::SetArriveTime(int _t)
{
	arriveTime = _t;
}

int BaseObject::GetArriveTime()
{
	return arriveTime;
}

Rect BaseObject::GetPerfectRect()
{
	return perfect_rect;
}

Rect BaseObject::GetGoodRect()
{
	return good_rect;
}

Rect BaseObject::GetBadRect()
{
	return bad_rect;
}

void BaseObject::MovingPattern1(Pos _EndPoint)
{
}

void BaseObject::MovingPattern2(Pos _EndPoint)
{
}

void BaseObject::MovingPattern3(Pos _EndPoint)
{
}

void BaseObject::MovingPattern4(Pos _EndPoint)
{
}
