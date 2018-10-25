#pragma once
#ifndef ANIMATED SPRITE H
#define ANIMATED SPRITE H

#include <string>
#include <map>

#include "Sprite.h"
#include "Globals.h"

class Graphics;

/* Animated sprite class
holds logic for animating sprites.
*/

class AnimatedSprite : public Sprite {

public:
	AnimatedSprite();
	AnimatedSprite(Graphics &graphics, const std::string &filepath, int sourceX, int sourceY, int width, int height,
		float posX, float posY, float timeToUpdate);

	/*void PlayAnimation
	Plays the animation provided it is not already playing.
	*/
	void playAnimation(std::string animation, bool once = false);

	/*void update
	Updates the animated time (timer)
	*/
	void update(int elapsedTime);

	/* void draw
	Draws the sprite to the screen
	*/
	void draw(Graphics &graphics, int x, int y);

	/* void setupAnimations
	A required function that sets up all animations for a sprite.
	*/
	virtual void setupAnimations();

private:
	std::map<std::string, std::>

};


#endif
