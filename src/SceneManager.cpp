#include "SceneManager.h"
#include "TitleScene.h"
#include "MusicScene.h"
#include <iostream>

using namespace std;


BaseScene *SceneManager::recentScene = NULL;       //�n�߂̓V�[������ɂ��Ă�����

SceneManager * SceneManager::scene = nullptr;
SceneManager& SceneManager::GetInst()
{
	return *scene;
}

void SceneManager::ChangeScene(SCENE scene) {

	if (recentScene != NULL) {
 		delete recentScene;
	}

	switch (scene) {          //�����̃V�[��
	case SCENE::enScene_Title:
		recentScene = new TitleScene();      //�^�C�g���V�[�������݂̃V�[���ɂ���
		recentScene->Init();
		break;
	case SCENE::enScene_HowToPlay:
		//recentScene = new GameScene();     
		recentScene->Init();
		break;
	case SCENE::enScene_MusicMode:
		recentScene = new MusicScene();  
		recentScene->Init();
		break;
	case SCENE::enScene_DeadBattle:

		recentScene->Init();
		break;
	case SCENE::enScene_MAX:
		break;
	default:
		break;
	}

}

void SceneManager::Init() {
	recentScene->Init();
}

void SceneManager::Update() {
	recentScene->Update();         //���݂̃V�[���̍X�V�֐�
}

void SceneManager::Draw() {
	recentScene->Draw();           //���݂̃V�[���̕`��֐�
}

void SceneManager::Exit() {
	recentScene->Exit();
}

BaseScene* SceneManager::getRecentScene()
{
	return recentScene;
}


