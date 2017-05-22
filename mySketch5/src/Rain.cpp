#include "Rain.h"



void Rain::setup()
{
	rain.load("image/rain.png");

	x = ofRandom(ofGetWidth(), 0);
	float y = 0;
	mPosition = ofVec2f(x, y);

	float vx = 0;
	float vy = ofRandom(1, 3);
	mVelocity = ofVec2f(0, vy);

	//mColor = ofColor(r,g,b);

}


void Rain::update(bool isKeyPressed)
{

	if (mPosition.y >= ofGetHeight()) {
		bouncingrain.load("image/bouncingrain.png");

		if (mPosition.y == ofGetHeight() - 100) {
			bouncingrain.resize(0, 0);
		}
	}

	mPosition += mVelocity;
	mVelocity.y += gravity;
	mVelocity.y *= friction;

	if (isKeyPressed) {
		float h = ofRandom(0, 200);
		float s = ofRandom(0, 200);
		float b = 255;

		mColor = ofColor::fromHsb(h, s, b);
		candy.load("image/candy.png");

		mPosition += mVelocity;
		mVelocity.y += gravity;
		mVelocity.y *= friction;

		rain.resize(0, 0);
		bouncingrain.resize(0, 0);

		if (mPosition.y == ofGetHeight()-50) {
			mVelocity.y *= 0;
		}
	}

}



void Rain::draw()
{
	ofSetColor(mColor);

	rain.draw(mPosition, 50, 50);
	bouncingrain.draw(x, ofGetHeight() - 100, 110, 110);
	candy.draw(mPosition, 70, 50);
	rain.draw(mPosition, 0, 0);
	bouncingrain.draw(x, ofGetHeight() - 100, 0, 0);
	candy.draw(mPosition, 0, 0);
}



void Rain::keyReleased() {
	rain.resize(50, 50);
	bouncingrain.resize(110, 110);
	candy.resize(0, 0);
}

