#include "SpwanInjector.h"



int MAX_WALKER;
int MAX_FLY;
int MAX_CANNON;
int MAX_POTION;

Walker *w;
Fly *f;

void readCSV(SCENE _code)
{
	switch (_code)
	{
	case enScene_Title:
		break;
	case enScene_HowToPlay:
		break;
	case enScene_MusicMode:
		MusicRead();
		break;
	case enScene_DeadBattle:
		break;
	case enScene_MAX:
		break;
	default:
		break;
	}


}
 void MusicRead()
{
	int type1 = 0;
	int type2 = 0;
	int x = 0;
	int y = 0;
	CSVData reader(U"./resource/pretender.csv");
	MAX_WALKER	= Parse<int>(reader.get(0, 1));
	MAX_FLY		= Parse<int>(reader.get(0, 3));
	MAX_CANNON	= Parse<int>(reader.get(0, 5));
	MAX_POTION	= Parse<int>(reader.get(0, 7));

	w = new Walker[MAX_WALKER];
	f = new Fly[MAX_FLY];

	String s = reader.get(x, 0);


	while (!reader.isEmpty())
	{
		s = reader.get(x, 0);
		Print(s);


		int point = Parse<int>(reader.get(x, 1));
		int startTime = Parse<int>(reader.get(x, 2));
		int arriveTime = Parse<int>(reader.get(x, 3));
		float speed = Parse<float>(reader.get(x, 4));
		int endpoint = Parse<int>(reader.get(x, 5));



		if (reader.get(x, 0) == U"1")
		{
			w[type1].SetSpwanPoint(point);
			w[type1].SetEndPoint(endpoint);
			w[type1].SetW(96);
			w[type1].SetH(96);
			w[type1].SetStartTime(arriveTime - 400);
			w[type1].SetArriveTime(arriveTime);
			w[type1].SetSpeed(speed);
			w[type1].SetState(enWalk);
			w[type1].SetIsSpwan(false);
			w[type1].SetIsLive(true);

			type1++;
		}
		if (reader.get(x, 0) == U"2")
		{
			f[type2].SetSpwanPoint(point);
			f[type2].SetW(96);
			f[type2].SetH(96);
			f[type2].SetStartTime(arriveTime - 400);
			f[type2].SetArriveTime(arriveTime);
			f[type2].SetSpeed(speed);
			f[type2].SetState(enWalk);
			f[type2].SetIsSpwan(false);
			f[type2].SetIsLive(true);

			type2++;
		}

		

		if (s == U"EOF")
		{
			break;
		}
		x++;
	}

}
void clean()
{
	ClearPrint();
}

void InjectorInit()
{
	for (int i = 0; i < MAX_WALKER; i++)
	{
		w[i].Init();
	}
}

void InjectorUpdate(int _frame)
{
	for (int i = 0; i < MAX_WALKER; i++)
	{
		if (w[i].GetIsLive()) {
			w[i].CheckSpwan(_frame);
			w[i].Update();
			w[i].Animation();
		}
		else
		{
			
		}
	}
}

void InjectorDraw()
{
	for (int i = 0; i < MAX_WALKER; i++)
	{
		w[i].Draw();
	}
}

void InjectorExit()
{
}
