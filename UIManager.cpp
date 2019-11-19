#include "UIManager.h"
//#include "SceneManager.h"

int hp = 400;
int score = 0;
int combo = 0;


void UIInit(SCENE _sceneCode)
{
	switch (_sceneCode)
	{
	case enScene_Title:
		break;
	case enScene_HowToPlay:
		break;
	case enScene_MusicMode:
		MusicInit();
		break;
	case enScene_DeadBattle:
		break;
	default:
		break;
	}

}

void UIUpdate(SCENE _sceneCode)
{
	//combo++;
	//score+=123;
}


void UIDraw(SCENE _sceneCode)
{

	char str[4];
	sprintf_s(str, "%03d", combo);
	for (int i = 0; i < 4; i++)
	{
		switch ((int)str[i] - 48)
		{
		case 0: img_score[0].draw(combo_num_pos[i].x, combo_num_pos[i].y);	break;
		case 1: img_score[1].draw(combo_num_pos[i].x, combo_num_pos[i].y);	break;
		case 2: img_score[2].draw(combo_num_pos[i].x, combo_num_pos[i].y);	break;
		case 3: img_score[3].draw(combo_num_pos[i].x, combo_num_pos[i].y);	break;
		case 4: img_score[4].draw(combo_num_pos[i].x, combo_num_pos[i].y);	break;
		case 5: img_score[5].draw(combo_num_pos[i].x, combo_num_pos[i].y);	break;
		case 6: img_score[6].draw(combo_num_pos[i].x, combo_num_pos[i].y);	break;
		case 7: img_score[7].draw(combo_num_pos[i].x, combo_num_pos[i].y);	break;
		case 8: img_score[8].draw(combo_num_pos[i].x, combo_num_pos[i].y);	break;
		case 9: img_score[9].draw(combo_num_pos[i].x, combo_num_pos[i].y);	break;
		default:
			break;
		}
	}
	

	char str_score[11];
	sprintf_s(str_score, "%00000008d", score);

	for (int i = 0; i < 10; i++)
	{
		switch ((int)str_score[i] - 48)
		{
		case 0: img_score[0].draw(score_pos[i].x, score_pos[i].y);	break;
		case 1: img_score[1].draw(score_pos[i].x, score_pos[i].y);	break;
		case 2: img_score[2].draw(score_pos[i].x, score_pos[i].y);	break;
		case 3: img_score[3].draw(score_pos[i].x, score_pos[i].y);	break;
		case 4: img_score[4].draw(score_pos[i].x, score_pos[i].y);	break;
		case 5: img_score[5].draw(score_pos[i].x, score_pos[i].y);	break;
		case 6: img_score[6].draw(score_pos[i].x, score_pos[i].y);	break;
		case 7: img_score[7].draw(score_pos[i].x, score_pos[i].y);	break;
		case 8: img_score[8].draw(score_pos[i].x, score_pos[i].y);	break;
		case 9: img_score[9].draw(score_pos[i].x, score_pos[i].y);	break;
		default:
			break;
		}
	}

	//spwan point 
	Circle(spwanPoint_pos[0].x, spwanPoint_pos[0].y, 5).draw(Palette::Saddlebrown);
	Circle(spwanPoint_pos[1].x, spwanPoint_pos[1].y, 5).draw(Palette::Saddlebrown);
	Circle(spwanPoint_pos[2].x, spwanPoint_pos[2].y, 5).draw(Palette::Saddlebrown);
	Circle(spwanPoint_pos[3].x, spwanPoint_pos[3].y, 5).draw(Palette::Saddlebrown);
	Circle(CANNON_1_X, CANNON_1_Y, 5).draw(Palette::Saddlebrown);
	Circle(CANNON_2_X, CANNON_2_Y, 5).draw(Palette::Saddlebrown);
	
	//castle 
	img_wall(wall_rect).draw(castle_pos[enWall_1].x, castle_pos[enWall_1].y);
	img_wall(wall_rect).draw(castle_pos[enWall_2].x, castle_pos[enWall_2].y);
	img_wall(wall_rect).draw(castle_pos[enWall_3].x, castle_pos[enWall_3].y);
	img_tower_left( tower_rect).draw( castle_pos[enTower_left].x, castle_pos[enTower_left].y);
	img_tower_right(tower_rect).draw(castle_pos[enTower_right].x, castle_pos[enTower_right].y);
	img_wall(wall_rect).draw(castle_pos[enWall_4].x, castle_pos[enWall_4].y);
	img_wall(wall_rect).draw(castle_pos[enWall_5].x, castle_pos[enWall_5].y);
	img_wall(wall_rect).draw(castle_pos[enWall_6].x, castle_pos[enWall_6].y);
	//combo
	img_combo.draw(combo_pos.x, combo_pos.y);

	//player
	//img_slime({ 0,0,96,96 }).draw(castle_pos[enTower_left].x + 96, castle_pos[enTower_left].y);
	//img_slime({ 0,0,96,96 }).draw(castle_pos[enTower_left].x + 96 * 2, castle_pos[enTower_left].y);
	//img_slime({ 0,0,96,96 }).draw(castle_pos[enTower_left].x + 96 * 3, castle_pos[enTower_left].y);
	//img_slime({ 0,0,96,96 }).draw(castle_pos[enTower_left].x + 96 * 2, castle_pos[enTower_left].y + 96);

	//hit point
	Circle(hitPoint_pos[0].x, hitPoint_pos[0].y, 5).draw(Palette::Saddlebrown);
	Circle(hitPoint_pos[1].x, hitPoint_pos[1].y, 5).draw(Palette::Saddlebrown);
	Circle(hitPoint_pos[2].x, hitPoint_pos[2].y, 5).draw(Palette::Saddlebrown);
}

void UIExit(SCENE _sceneCode)
{

}

void MusicInit()
{
	img_slime		 = Texture(U"data/slime_red.png");
	img_combo		 = Texture(U"data/combo.png");
	img_tower_right	 = Texture(U"data/tower_right.png");
	img_tower_left	 = Texture(U"data/tower_left.png");
	img_wall		 = Texture(U"data/wall.png");
	//img_hp							 = Texture(U"data/mon1_walk.png");
	//img_hitBox						 = Texture(U"data/mon1_walk.png");
	//img_spwanPoint					 = Texture(U"data/mon1_walk.png");
	tower_rect	 = { 0,0,96,96 };
	wall_rect	 = { 0,0,96,96 };


	img_score[0] = Texture(U"data/score_0.png");
	img_score[1] = Texture(U"data/score_1.png");
	img_score[2] = Texture(U"data/score_2.png");
	img_score[3] = Texture(U"data/score_3.png");
	img_score[4] = Texture(U"data/score_4.png");
	img_score[5] = Texture(U"data/score_5.png");
	img_score[6] = Texture(U"data/score_6.png");
	img_score[7] = Texture(U"data/score_7.png");
	img_score[8] = Texture(U"data/score_8.png");
	img_score[9] = Texture(U"data/score_9.png");

	

}
