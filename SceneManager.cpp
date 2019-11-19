#include "SceneManager.h"
#include "TitleScene.h"
#include "MusicScene.h"
#include <iostream>

using namespace std;


BaseScene *SceneManager::recentScene = NULL;       //始めはシーンを空にしておこう

SceneManager * SceneManager::scene = nullptr;
SceneManager& SceneManager::GetInst()
{
	return *scene;
}

void SceneManager::ChangeScene(SCENE scene) {

	if (recentScene != NULL) {
 		delete recentScene;
	}

	switch (scene) {          //引数のシーン
	case SCENE::enScene_Title:
		recentScene = new TitleScene();      //タイトルシーンを現在のシーンにする
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
	recentScene->Update();         //現在のシーンの更新関数
}

void SceneManager::Draw() {
	recentScene->Draw();           //現在のシーンの描画関数
}

void SceneManager::Exit() {
	recentScene->Exit();
}

BaseScene* SceneManager::getRecentScene()
{
	return recentScene;
}


