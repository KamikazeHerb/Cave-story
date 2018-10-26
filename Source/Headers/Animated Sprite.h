#pragma once
#ifndef ANIMATED SPRITE H
#define ANIMATED SPRITE H

#include <string>
#include <map>
#include <vector>

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

protected:
	double _timeToUpdate;
	bool _currentAnimationOnce;
	std::string _currentAnimation;

	/*addAnimation
	adds an animation to the map of animations for a sprite
	*/
	void addAnimation(int frames, int x, int y, std::string name, int width, int height, vector2 offset);

	/*resetAnimation
	resets all animations associated with this sprite
	*/
	void resetAnimations();

	/*stopAnimation
	stops the current animation
	*/
	void stopAnimation();

	/*setVisible
	changes the visibility of the animated sprite
	*/
	void setVisible(bool visible);

	/*void animationDone
	logic that happens when an animation ends
	*/
	virtual void animationDone(std::string currentAnimation);

private:
	std::map<std::string, std::vector<SDL_Rect> > _animations;
	std::map<std::string, vector2> _offsets;

	int _frameIndex;
	int _timeElapsed;
	bool _visible;

};


#endif
