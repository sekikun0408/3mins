#pragma once
#include <Siv3D.hpp>
#include "Define.h"

	void UIInit(SCENE _sceneCode);
	void UIUpdate(SCENE _sceneCode);
	void UIDraw(SCENE _sceneCode);
	void UIExit(SCENE _sceneCode);

	void MusicInit();
	enum enCastle
	{
		enWall_1,
		enWall_2,
		enWall_3,
		enTower_left,
		enTower_right,
		enWall_4,
		enWall_5,
		enWall_6,

		enCastle_MAX
	};

	enum enSpwanPoint
	{
		enSpwanPoint_1,
		enSpwanPoint_2,
		enSpwanPoint_3,
		enSpwanPoint_4,

		enSpwanPoint_MAX,
	};
	const Pos combo_pos							= { COMBO_X, COMBO_Y };
	const Pos combo_num_pos[3]					= { {COMBO_NUM_POS_1_X, COMBO_NUM_POS_1_Y  },
													{COMBO_NUM_POS_2_X, COMBO_NUM_POS_2_Y  },
													{COMBO_NUM_POS_3_X, COMBO_NUM_POS_3_Y} };

	const Pos castle_pos[enCastle_MAX]			= { {CASTLE_WALL_1_X,  CASTLE_ALL_Y},
													{CASTLE_WALL_2_X,  CASTLE_ALL_Y},
													{CASTLE_WALL_3_X,  CASTLE_ALL_Y},
													{CASTLE_TOWER_L_X, CASTLE_ALL_Y},
													{CASTLE_TOWER_R_X, CASTLE_ALL_Y},
													{CASTLE_WALL_4_X,  CASTLE_ALL_Y},
													{CASTLE_WALL_5_X,  CASTLE_ALL_Y},
													{CASTLE_WALL_6_X,  CASTLE_ALL_Y}, };
	
	const Pos spwanPoint_pos[SPWAN_POINT_MAX]	= { {SPWAN_POINT_1_X,SPWAN_POINT_1_Y},
													{SPWAN_POINT_2_X,SPWAN_POINT_2_Y},
													{SPWAN_POINT_3_X,SPWAN_POINT_3_Y},
													{SPWAN_POINT_4_X,SPWAN_POINT_4_Y}, };

	const Pos endPoint_pos[ENDPOINT_MAX]		= { {PLAYER_BOW_X		+ 48 ,PLAYER_BOW_Y},
													{PLAYER_SHIELD_X	+ 48 ,PLAYER_SHIELD_Y },
													{PLAYER_SWORD_X		+ 48 ,PLAYER_SWORD_Y}};


	const Pos score_pos[SCORE_NUMBERIC]			= { {SCORE_1_X,  SCORE_ALL_Y},
													{SCORE_2_X,  SCORE_ALL_Y},
													{SCORE_3_X,  SCORE_ALL_Y},
													{SCORE_4_X,  SCORE_ALL_Y},
													{SCORE_5_X,  SCORE_ALL_Y},
													{SCORE_6_X,  SCORE_ALL_Y},
													{SCORE_7_X,  SCORE_ALL_Y},
													{SCORE_8_X,  SCORE_ALL_Y}, };

	const Pos hitPoint_pos[HITPOINT_MAX]		= { {HITPOINT_1_X,  HITPOINT_1_Y},
													{HITPOINT_2_X,  HITPOINT_2_Y},
													{HITPOINT_3_X,  HITPOINT_3_Y},
													{HITPOINT_4_X,  HITPOINT_4_Y} };


	static Texture img_slime;
	static Texture img_combo;
	static Texture img_tower_left;
	static Texture img_tower_right;
	static Texture img_wall ;
	static Texture img_hp;
	static Texture img_hitBox;
	static Texture img_spwanPoint;
	static Texture img_score[SCORE_MAX];


	extern int hp;
	extern int score;
	extern int combo;
	static Rect tower_rect;
	static Rect wall_rect;
	static Rect archer_rect;
	static Rect shield_rect;
	static Rect sword_rect;
	static Rect magic_rect;




