#include "TitleScene.h"
#include "SceneManager.h"

void TitleScene::Init()
{

}

void TitleScene::Update()
{

	if (KeySpace.down())
	{
		SceneManager::GetInst().ChangeScene(enScene_MusicMode);
	}
	Print( U"title");
	//ClearPrint();
}

void TitleScene::Draw()
{


}

void TitleScene::Exit()
{
	
}
