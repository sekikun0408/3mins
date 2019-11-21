#include "MusicScene.h"



void KeyD_hit(Player &player)
{

}

void MusicScene::Init()
{
	ClearPrint();
	readCSV(sceneCode);
	UIInit(sceneCode);

	SetSceneFrame(0);
	InjectorInit();
	player.PlayerInit();
}

void MusicScene::Update()
{
	UpdateFrame();
	UIUpdate(sceneCode);
	//Print(GetFrame());

	InjectorUpdate(GetSceneFrame());
	player.PlayerUpdate(w,f,f,f);


	
}

void MusicScene::Draw()
{
	UIDraw(sceneCode);

	InjectorDraw();
	player.PlayerDraw();
}

void MusicScene::Exit()
{
	InjectorExit();
	player.PlayerExit();
}

