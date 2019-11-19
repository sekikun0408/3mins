#pragma once
#include <Siv3D.hpp>
#include "Define.h"
#include "Walker.h"
#include "Fly.h"


void readCSV(SCENE _code);
void MusicRead();
void clean();

void InjectorInit();
void InjectorUpdate(int _frame);
void InjectorDraw();
void InjectorExit();

extern int MAX_WALKER;
extern int MAX_FLY;
extern int MAX_CANNON;
extern int MAX_POTION;

extern Walker *w;
extern Fly *f;





