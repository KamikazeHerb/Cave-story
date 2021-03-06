#pragma once
#ifndef GAME_H
#define GAME_H

#include <Sprite.h>

class Graphics;

class Game {
public:
	Game();
	~Game();

private:
	void gameLoop();
	void draw(Graphics &graphics);
	void update(float elapsedTime);

	Sprite _player;
};


#endif

