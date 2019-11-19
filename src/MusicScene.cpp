#include "MusicScene.h"



void MusicScene::Init()
{
	ClearPrint();
	readCSV(sceneCode);
	UIInit(sceneCode);

	SetFrame(0);
	InjectorInit();
	player.PlayerInit();
}

void MusicScene::Update()
{
	UpdateFrame();
	UIUpdate(sceneCode);
	//Print(GetFrame());

	InjectorUpdate(GetFrame());
	player.PlayerUpdate();
	if (KeyD.down()) {
		for (int i = 0; i < MAX_WALKER; i++)
		{
			if (player.checkHitPerfect(w[i]))
			{
				combo++;
				score += 100;
				w[i].SetIsLive(false);
				Print(combo);
				Print(score);
				Print(w[i].GetIsLive());
			
			}
		}
	}

	
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

