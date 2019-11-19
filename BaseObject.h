#pragma once
#include <Siv3D.hpp>
#include "SceneManager.h"
#include "Define.h"
#include "UIManager.h"
class BaseObject
{
public:

	BaseObject() {

	}
	~BaseObject() {}
	virtual void Init() {}
	virtual void Update() {}
	virtual void Draw() {}
	virtual void Exit() {}
	
	void SetX(float _x);
	float GetX();
	void SetY(float _y);
	float GetY();
	void SetW(int _w = 96);
	int GetW();
	void SetH(int _h = 96);
	int GetH();
	void SetFrame(int _f);
	int GetFrame();
	void SetSpeed(float _speed);
	float GetSpeed();
	void SetIsLive(bool _l);
	bool GetIsLive();
	void SetIsSpwan(bool _s);
	bool GetIsSpwan();

	void SetState(int _s);
	int GetState();
	void SetSpwanPoint(int _p);
	int GetSpwanPoint();
	void SetStartTime(int _t);
	int GetStartTime();
	void SetArriveTime(int _t);
	int GetArriveTime();

	Rect GetPerfectRect();
	Rect GetGoodRect();
	Rect GetBadRect();

	//should be override
	virtual void MovingPattern1(Pos _EndPoint);
	virtual void MovingPattern2(Pos _EndPoint);
	virtual void MovingPattern3(Pos _EndPoint);
	virtual void MovingPattern4(Pos _EndPoint);

	void CheckSpwan(int _frame);
	void UpdateFrame();

private:
	Pos pos;
	int w;
	int h;
	int frame;
	float speed;
	bool isSpwan;
	bool isLive;

	int state;
	int spwanPoint; //1 to 4
	int startTime;	//Ç¢Ç¬èoÇƒÇ≠ÇÈ	 
	int arriveTime;


protected:
	Rect perfect_rect;
	Rect good_rect;
	Rect bad_rect;


};

