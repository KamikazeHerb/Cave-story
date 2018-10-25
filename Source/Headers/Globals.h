#pragma once
#ifndef GLOBALS_H

#define GLOBALS_H

namespace globals {

	const int SCREEN_WIDTH = 640;
	const int SCREEN_HEIGHT = 480;

	const float SPRITE_SCALE = 2.0;

}

struct vector2 {
	int x, y;

	vector2() :
		x(0), y(0)
	{}

	vector2(int x, int y) :
		x(x), y(y)
	{}

	vector2 zero() {
		return vector2(0, 0);
	}
};



#endif // !GLOBALS_H
