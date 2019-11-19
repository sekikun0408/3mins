#pragma once

#include "BaseScene.h"
#include "Define.h"

class SceneManager
{
public:

	static SceneManager& GetInst();
	static void ChangeScene(SCENE scene);     //�V�[���������ɂ���ĕς���֐�
	static void Init();
	static void Update();                     //���݂̃V�[���̍X�V�֐�
	static void Draw();                     //���݂̃V�[���̕`��֐�
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

	static BaseScene* recentScene;               //���݂̃V�[��
	static SceneManager *scene;	
	SceneManager();


};

