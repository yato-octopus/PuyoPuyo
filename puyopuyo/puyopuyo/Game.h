#pragma once
#include "Control_Puyo.h"
#include "Map.h"

class Game {
public:
	void control_game();
private:
	int map[12][6];
};