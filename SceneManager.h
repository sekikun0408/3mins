#pragma once

#include "BaseScene.h"
#include "Define.h"

class SceneManager
{
public:

	static SceneManager& GetInst();
	static void ChangeScene(SCENE scene);     //シーンを引数によって変える関数
	static void Init();
	static void Update();                     //現在のシーンの更新関数
	static void Draw();                     //現在のシーンの描画関数
	static void Exit();
	static BaseScene* getRecentScene();



	static void create()
	{
		if (!scene)
		{
			scene = new SceneManager;
		}
	}

	static void destory()
	{
		delete scene;
		scene = nullptr;
	}


private:

	static BaseScene* recentScene;               //現在のシーン
	static SceneManager *scene;	
	SceneManager();


};

