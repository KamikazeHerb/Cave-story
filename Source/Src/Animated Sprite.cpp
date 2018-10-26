#include "Animated Sprite.h"
#include "Graphics.h"
#include "Sprite.h"

/* Animated Sprite class
animates sprites

*/
AnimatedSprite::AnimatedSprite() {

}

AnimatedSprite::AnimatedSprite(Graphics &graphics, const std::string &filePath, int sourceX, int sourceY,
	int width, int height, float posX, float PosY, float timeToUpdate):
	Sprite(graphics, filePath, sourceX, sourceY, width, height, posX, posY),
	_frameIndex(0),
	timeToUpdate(timeToUpdate),
	_visible(true),
	_currentAnimationOnce(false),
	_currentAnimation("") {

}