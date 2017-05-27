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
	void update(bool isKeyPressed);
	void updateKeyPressed();
	void keyReleased();

	void draw();

	float x;
	float y;

	ofVec2f mPosition;
	ofVec2f mVelocity;
	ofColor mColor;


	ofImage rain;
	ofImage bouncingrain;
	
	constexpr static const float gravity = 0.098;
	constexpr static const float friction = 0.999;

};
