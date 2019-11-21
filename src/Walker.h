#pragma once
#include "BaseObject.h"
class Walker :
	public BaseObject
{
	Texture img_walk;
	Texture img_die;
	Texture img_attack;
	Rect draw_rect;

public:
	Walker();
	~Walker();

	void Init() override;
	void Update() override;
	void Draw() override;
	void Exit() override;

	void Animation();
	void Dead();
	void Attack();

	void MovingPattern1(Pos _EndPoint) override;
	void MovingPattern2(Pos _EndPoint) override;
	void MovingPattern3(Pos _EndPoint) override;
	void MovingPattern4(Pos _EndPoint) override;
};

