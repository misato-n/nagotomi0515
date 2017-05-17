#include "Rain.h"



void Rain::setup()
{
	rain.load("image/rain.jpg");

	float x = ofRandom(ofGetWidth(), 0);
	float y = 0;
	mPosition = ofVec2f(x, y);

	float vx = 0;
	float vy = ofRandom(0.1, 3);
	mVelocity = ofVec2f(0, vy);

	//mColor = ofColor(r,g,b);

}


void Rain::update()
{

	if (mPosition.y >= ofGetHeight()) {
		mVelocity.y *= -1;
	}

	mPosition += mVelocity;
	mVelocity.y += gravity;
	mVelocity.y *= friction;

}


void Rain::draw()
{
	//ofSetColor(mColor);

	rain.draw(mPosition, 30, 50);

}