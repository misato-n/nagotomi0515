#pragma once
#ifndef Rain_h
#define Rain_h
#include "ofMain.h"
#include <stdio.h>
#endif

class Rain
{
public:
	void setup();
	void update();
	void draw();

	ofVec2f mPosition;
	ofVec2f mVelocity;
	//ofColor mColor;

	ofImage rain;

	constexpr static const float gravity = 0.098;
	constexpr static const float friction = 0.999;

};
