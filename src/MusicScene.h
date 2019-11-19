#pragma once
#include "BaseScene.h"

#include "SceneManager.h"
#include "SpwanInjector.h"
#include "Player.h"
class MusicScene :
	public BaseScene
{
public:

	//UIManager ui;
	//int frame;
	Player player;

	void Init() override;
	void Update() override;
	void Draw() override;
	void Exit() override;

	const SCENE sceneCode = enScene_MusicMode;
};

