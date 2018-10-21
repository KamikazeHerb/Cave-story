#ifndef SPRITE_H
#define SPRITE_H

class Graphics;

#include <sdl.h>
#include <string>

class Sprite
{
public:
	Sprite();
	Sprite(Graphics &graphics, const std::string &filePath, int sourceX, int sourceY, int width, int height,
		float posX, float posY);
	virtual ~Sprite();
	virtual void update();
	void draw(Graphics &graphics, int x, int y);

private:
	SDL_Rect sourceRect;
	SDL_Texture* _spriteSheet;

	float _X, _Y;
};

#endif