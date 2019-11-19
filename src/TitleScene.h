#pragma once
#include "BaseScene.h"
#include "SceneManager.h"


class TitleScene :
	public BaseScene
{
public:

	void Init() override;
	void Update() override;
	void Draw() override;
	void Exit() override;

	const SCENE sceneCode = enScene_Title;
};

