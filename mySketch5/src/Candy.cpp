#include "Candy.h"


void Candy::setup()
{
	candy.load("image/candy.png");

	float p = ofRandom(ofGetWidth(), 0);
	float q = 0;
	mPosition = ofVec2f(p, q);

	float vx = 0;
	float vy = ofRandom(0.5, 0.8);
	mVelocity = ofVec2f(0, vy);

	float r = ofRandom(0,255);
	float g = ofRandom(0, 255);
	float b = ofRandom(0, 255);
	mColor = ofColor(r,g,b);

}


void Candy::update()
{

	if (mPosition.y >= ofGetHeight()) {

	}

	mPosition += mVelocity;
	mVelocity.y += gravity;
	mVelocity.y *= friction;

}


void Candy::draw()
{
	ofSetColor(mColor);

	candy.draw(mPosition, 30, 50);
	//bouncingrain.draw(x, ofGetWidth() - 100, 100, 100);
}
