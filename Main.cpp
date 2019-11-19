#include <Siv3D.hpp>
#include "SceneManager.h"
#include "define.h"
void Main()
{


	Window::Resize(WINDOW_W, WINDOW_H);
	//Graphics::SetBackground(Palette::Lightseagreen);


	SceneManager::GetInst().ChangeScene(enScene_Title);
	//SceneManager::GetInst().Init();
	
	while (System::Update())
	{
		SceneManager::GetInst().Update();

		SceneManager::GetInst().Draw();
	}

	SceneManager::GetInst().Exit();


}