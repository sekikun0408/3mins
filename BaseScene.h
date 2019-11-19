#pragma once
#include <Siv3D.hpp>
#include "UIManager.h"

class BaseScene
{
public:

	virtual void Init() {}
	virtual void Update() {}
	virtual void Draw() {}
	virtual void Exit() {}

	void UpdateFrame() { frame++; }
	void SetFrame(int _f) { frame = _f; }
	int GetFrame() { return frame; }
private:
	int frame;
};

