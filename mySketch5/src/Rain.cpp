#include "Rain.h"



void Rain::setup()
{
	rain.load("image/rain.png");

	x = ofRandom(ofGetWidth(), 0);
	y = 0;
	mPosition = ofVec2f(x, y);

	float vx = 0;
	float vy = ofRandom(1, 3);
	mVelocity = ofVec2f(0, vy);

}


void Rain::update(bool isKeyPressed)
{

	if (mPosition.y >= ofGetHeight()) {
		bouncingrain.load("image/bouncingrain.png");

	}

	mPosition += mVelocity;
	mVelocity.y += gravity;
	mVelocity.y *= friction;

	if (isKeyPressed) {
		float h = ofRandom(0, 200);
		float s = ofRandom(0, 200);
		float b = 255;

		mColor = ofColor::fromHsb(h, s, b);
		rain.load("image/candy.png");


		for (y; y == ofGetHeight() - 50; y * 0) {
			//mPosition(x,y);

		}
	}

}



	void Rain::draw()
	{
		ofSetColor(mColor);

		rain.draw(mPosition, 50, 50);
		bouncingrain.draw(x, ofGetHeight() - 100, 110, 110);

	}




void Rain::keyReleased() {
	mColor = ofColor(245, 252, 254);
	rain.load("image/rain.png");

	if (mPosition.y >= ofGetHeight()) {
		rain.load("image/bouncingrain.png");

		bouncingrain.load("image/bouncingrain.png");

	}
}

