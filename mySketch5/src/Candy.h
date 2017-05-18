#pragma once
#ifndef Candy_h
#define Candy_h
#include "ofMain.h"
#include <stdio.h>
#endif

class Candy
{
public:
	void setup();
	void update();
	void draw();

	ofVec2f mPosition;
	ofVec2f mVelocity;
	ofColor mColor;

	ofImage candy;

	constexpr static const float gravity = 0.098;
	constexpr static const float friction = 0.999;

};

