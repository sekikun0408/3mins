#pragma once

//window
#define WINDOW_W			1120
#define WINDOW_H			630


//enemy type
#define WALKER				1001

//UI Manager
#define SCORE_MAX			10
#define SPWAN_POINT_MAX		4
#define SPWAN_POINT_1_X		32 + 96 + 48
#define SPWAN_POINT_1_Y		100
#define SPWAN_POINT_2_X		32 + 96 * 3
#define SPWAN_POINT_2_Y		64
#define CANNON_1_X			512 - 48
#define CANNON_1_Y			48
#define CANNON_2_X			512 + 48 +96
#define CANNON_2_Y			48
#define SPWAN_POINT_3_X		32 + (96 * 5) + (96 *3)
#define SPWAN_POINT_3_Y		64
#define SPWAN_POINT_4_X		32 + (96 * 6) + (96 *3) +48
#define SPWAN_POINT_4_Y		100

#define COMBO_IMG_SIZE		133
#define SCORE_IMG_SIZE		32

#define COMBO_X				800
#define COMBO_Y				350
#define COMBO_NUM_POS_1_X	COMBO_X + COMBO_IMG_SIZE
#define COMBO_NUM_POS_1_Y	COMBO_Y + 16
#define COMBO_NUM_POS_2_X	COMBO_NUM_POS_1_X + SCORE_IMG_SIZE - 8
#define COMBO_NUM_POS_2_Y	COMBO_NUM_POS_1_Y
#define COMBO_NUM_POS_3_X	COMBO_NUM_POS_2_X + SCORE_IMG_SIZE - 8
#define COMBO_NUM_POS_3_Y	COMBO_NUM_POS_2_Y

#define SCORE_NUMBERIC		8
#define SCORE_1_X			( WINDOW_W - ( SCORE_IMG_SIZE * SCORE_NUMBERIC ) )
#define SCORE_2_X			( WINDOW_W - ( SCORE_IMG_SIZE * SCORE_NUMBERIC ) + ( SCORE_IMG_SIZE * 1 ))
#define SCORE_3_X			( WINDOW_W - ( SCORE_IMG_SIZE * SCORE_NUMBERIC ) + ( SCORE_IMG_SIZE * 2 ))
#define SCORE_4_X			( WINDOW_W - ( SCORE_IMG_SIZE * SCORE_NUMBERIC ) + ( SCORE_IMG_SIZE * 3 ))
#define SCORE_5_X			( WINDOW_W - ( SCORE_IMG_SIZE * SCORE_NUMBERIC ) + ( SCORE_IMG_SIZE * 4 ))
#define SCORE_6_X			( WINDOW_W - ( SCORE_IMG_SIZE * SCORE_NUMBERIC ) + ( SCORE_IMG_SIZE * 5 ))
#define SCORE_7_X			( WINDOW_W - ( SCORE_IMG_SIZE * SCORE_NUMBERIC ) + ( SCORE_IMG_SIZE * 6 ))
#define SCORE_8_X			( WINDOW_W - ( SCORE_IMG_SIZE * SCORE_NUMBERIC ) + ( SCORE_IMG_SIZE * 7 ))
#define SCORE_ALL_Y			0

#define IMG_SIZE_96			96
#define CASTLE_WALL_1_X		32
#define CASTLE_WALL_2_X		CASTLE_WALL_1_X + IMG_SIZE_96 * 1
#define CASTLE_WALL_3_X		CASTLE_WALL_1_X + IMG_SIZE_96 * 2
#define CASTLE_TOWER_L_X	CASTLE_WALL_1_X + IMG_SIZE_96 * 3
#define CASTLE_TOWER_R_X	CASTLE_WALL_1_X + IMG_SIZE_96 * 4 + (IMG_SIZE_96 * 3)
#define CASTLE_WALL_4_X		CASTLE_WALL_1_X + IMG_SIZE_96 * 5 + (IMG_SIZE_96 * 3)
#define CASTLE_WALL_5_X 	CASTLE_WALL_1_X + IMG_SIZE_96 * 6 + (IMG_SIZE_96 * 3)
#define CASTLE_WALL_6_X 	CASTLE_WALL_1_X + IMG_SIZE_96 * 7 + (IMG_SIZE_96 * 3)
#define CASTLE_ALL_Y		( WINDOW_H - IMG_SIZE_96 * 2 )

#define PLAYER_BOW_X		416
#define PLAYER_BOW_Y		460
#define PLAYER_SHIELD_X		PLAYER_BOW_X	+ 96	//512
#define PLAYER_SHIELD_Y		460
#define PLAYER_SWORD_X		PLAYER_SHIELD_X + 96	//608
#define PLAYER_SWORD_Y		460
#define PLAYER_WAND_X		PLAYER_SHIELD_X	
#define PLAYER_WAND_Y		438	+ 96 

#define HITPOINT_MAX		4
#define HITPOINT_1_X		416 + 48
#define HITPOINT_1_Y		420
#define HITPOINT_2_X		512 + 48
#define HITPOINT_2_Y		420
#define HITPOINT_3_X		608 + 48
#define HITPOINT_3_Y		420
#define HITPOINT_4_X		512 + 48
#define HITPOINT_4_Y		420 + 96

enum SCENE
{
	enScene_Title,
	enScene_HowToPlay,
	enScene_MusicMode,
	enScene_DeadBattle,

	enScene_MAX,
};
enum enState
{
	enIdle,
	enWalk,
	enAttack,
	enDie,

	enMAX
};

struct Pos
{
	float x;
	float y;

};