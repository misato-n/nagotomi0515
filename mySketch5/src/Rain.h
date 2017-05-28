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

	ofVec2f Array[16][16] = {
		{ ofVec2f(1,1),ofVec2f(1,2), ofVec2f(1,3), ofVec2f(1,4), ofVec2f(1,5), ofVec2f(1,6), ofVec2f(1,7), ofVec2f(1,8), ofVec2f(1,9), ofVec2f(1,10), ofVec2f(1,11), ofVec2f(1,12), ofVec2f(1,13), ofVec2f(1,14), ofVec2f(1,15), ofVec2f(1,16) },
		{ ofVec2f(2,1),ofVec2f(2,2), ofVec2f(2,3), ofVec2f(2,4), ofVec2f(2,5), ofVec2f(2,6), ofVec2f(2,7), ofVec2f(2,8), ofVec2f(2,9), ofVec2f(2,10), ofVec2f(2,11), ofVec2f(2,12), ofVec2f(2,13), ofVec2f(2,14), ofVec2f(2,15), ofVec2f(2,16) },
		{ ofVec2f(3,1),ofVec2f(3,2), ofVec2f(3,3), ofVec2f(3,4), ofVec2f(3,5), ofVec2f(3,6), ofVec2f(3,7), ofVec2f(3,8), ofVec2f(3,9), ofVec2f(3,10), ofVec2f(3,11), ofVec2f(3,12), ofVec2f(3,13), ofVec2f(3,14), ofVec2f(3,15), ofVec2f(3,16) },
		{ ofVec2f(4,1),ofVec2f(4,2), ofVec2f(4,3), ofVec2f(4,4), ofVec2f(4,5), ofVec2f(4,6), ofVec2f(4,7), ofVec2f(4,8), ofVec2f(4,9), ofVec2f(4,10), ofVec2f(4,11), ofVec2f(4,12), ofVec2f(4,13), ofVec2f(4,14), ofVec2f(4,15), ofVec2f(4,16) },
		{ ofVec2f(5,1),ofVec2f(5,2), ofVec2f(5,3), ofVec2f(5,4), ofVec2f(5,5), ofVec2f(5,6), ofVec2f(5,7), ofVec2f(5,8), ofVec2f(5,9), ofVec2f(5,10), ofVec2f(5,11), ofVec2f(5,12), ofVec2f(5,13), ofVec2f(5,14), ofVec2f(5,15), ofVec2f(5,16) },
		{ ofVec2f(6,1),ofVec2f(6,2), ofVec2f(6,3), ofVec2f(6,4), ofVec2f(6,5), ofVec2f(6,6), ofVec2f(6,7), ofVec2f(6,8), ofVec2f(6,9), ofVec2f(6,10), ofVec2f(6,11), ofVec2f(6,12), ofVec2f(6,13), ofVec2f(6,14), ofVec2f(6,15), ofVec2f(6,16) },
		{ ofVec2f(7,1),ofVec2f(7,2), ofVec2f(7,3), ofVec2f(7,4), ofVec2f(7,5), ofVec2f(7,6), ofVec2f(7,7), ofVec2f(7,8), ofVec2f(7,9), ofVec2f(7,10), ofVec2f(7,11), ofVec2f(7,12), ofVec2f(7,13), ofVec2f(7,14), ofVec2f(7,15), ofVec2f(7,16) },
		{ ofVec2f(8,1),ofVec2f(8,2), ofVec2f(8,3), ofVec2f(8,4), ofVec2f(8,5), ofVec2f(8,6), ofVec2f(8,7), ofVec2f(8,8), ofVec2f(8,9), ofVec2f(8,10), ofVec2f(8,11), ofVec2f(8,12), ofVec2f(8,13), ofVec2f(8,14), ofVec2f(8,15), ofVec2f(8,16) },
		{ ofVec2f(9,1),ofVec2f(9,2), ofVec2f(9,3), ofVec2f(9,4), ofVec2f(9,5), ofVec2f(9,6), ofVec2f(9,7), ofVec2f(9,8), ofVec2f(9,9), ofVec2f(9,10), ofVec2f(9,11), ofVec2f(9,12), ofVec2f(9,13), ofVec2f(9,14), ofVec2f(9,15), ofVec2f(9,16) },
		{ ofVec2f(10,1),ofVec2f(10,2), ofVec2f(10,3), ofVec2f(10,4), ofVec2f(10,5), ofVec2f(10,6), ofVec2f(10,0), ofVec2f(10,8), ofVec2f(10,9), ofVec2f(10,10), ofVec2f(10,11), ofVec2f(10,12), ofVec2f(10,13), ofVec2f(10,14), ofVec2f(10,15), ofVec2f(10,16) },
		{ ofVec2f(11,1),ofVec2f(11,2), ofVec2f(11,3), ofVec2f(11,4), ofVec2f(11,5), ofVec2f(11,6), ofVec2f(11,0), ofVec2f(11,8), ofVec2f(11,9), ofVec2f(11,10), ofVec2f(11,11), ofVec2f(11,12), ofVec2f(11,13), ofVec2f(11,14), ofVec2f(11,15), ofVec2f(11,16) },
		{ ofVec2f(12,1),ofVec2f(12,2), ofVec2f(12,3), ofVec2f(12,4), ofVec2f(12,5), ofVec2f(12,6), ofVec2f(12,0), ofVec2f(12,8), ofVec2f(12,9), ofVec2f(12,10), ofVec2f(12,11), ofVec2f(12,12), ofVec2f(12,13), ofVec2f(12,14), ofVec2f(12,15), ofVec2f(12,16) },
		{ ofVec2f(13,1),ofVec2f(13,2), ofVec2f(13,3), ofVec2f(13,4), ofVec2f(13,5), ofVec2f(13,6), ofVec2f(13,0), ofVec2f(13,8), ofVec2f(13,9), ofVec2f(13,10), ofVec2f(13,11), ofVec2f(13,12), ofVec2f(13,13), ofVec2f(13,14), ofVec2f(13,15), ofVec2f(13,16) },
		{ ofVec2f(14,1),ofVec2f(14,2), ofVec2f(14,3), ofVec2f(14,4), ofVec2f(14,5), ofVec2f(14,6), ofVec2f(14,0), ofVec2f(14,8), ofVec2f(14,9), ofVec2f(14,10), ofVec2f(14,11), ofVec2f(14,12), ofVec2f(14,13), ofVec2f(14,14), ofVec2f(14,15), ofVec2f(14,16) },
		{ ofVec2f(15,1),ofVec2f(15,2), ofVec2f(15,3), ofVec2f(15,4), ofVec2f(15,5), ofVec2f(15,6), ofVec2f(15,0), ofVec2f(15,8), ofVec2f(15,9), ofVec2f(15,10), ofVec2f(15,11), ofVec2f(15,12), ofVec2f(15,13), ofVec2f(15,14), ofVec2f(15,15), ofVec2f(15,16) },
		{ ofVec2f(16,1),ofVec2f(16,2), ofVec2f(16,3), ofVec2f(16,4), ofVec2f(16,5), ofVec2f(16,6), ofVec2f(16,0), ofVec2f(16,8), ofVec2f(16,9), ofVec2f(16,10), ofVec2f(16,11), ofVec2f(16,12), ofVec2f(16,13), ofVec2f(16,14), ofVec2f(16,15), ofVec2f(16,16) }
	};

	int i;

	static const int p = 16;
	static const int q = 16;
	bool mArray[p][q];

	ofVec2f mPosition;
	ofVec2f mVelocity;
	ofColor mColor;


	ofImage rain;
	ofImage bouncingrain;
	ofImage cloud;
	
	constexpr static const float gravity = 0.098;
	constexpr static const float friction = 0.999;

};
