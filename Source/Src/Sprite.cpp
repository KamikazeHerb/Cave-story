#include <Sprite.h>
#include <Graphics.h>
#include <Globals.h>

Sprite::Sprite()
{
}

Sprite::Sprite(Graphics & graphics, const std::string & filePath, int sourceX, int sourceY, int width, int height, float posX, float posY) :
	_X(posX),
	_Y(posY)
	{
		this->sourceRect.x = sourceX;
		this->sourceRect.y = sourceY;
		this->sourceRect.h = height;
		this->sourceRect.w = width;

		this->_spriteSheet = SDL_CreateTextureFromSurface(graphics.getRenderer(),graphics.loadImage(filePath));

		if (this->_spriteSheet == NULL) {
			printf("\nError : Unable to load image\n");
		}
	}


	Sprite::~Sprite()
	{
	}

void Sprite::draw(Graphics & graphics, int x, int y)
{
	SDL_Rect destinationRectagle = {x, y, this->sourceRect.w * globals::SPRITE_SCALE, this->sourceRect.h * globals::SPRITE_SCALE};
	graphics.blitSurface(this->_spriteSheet, &this->sourceRect, &destinationRectagle);
}

	void Sprite::update()
{

}