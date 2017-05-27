#include "Rain.h"



void Rain::setup()
{
	cloud.load("image/cloud.png");
	rain.load("image/rain.png");

	x = ofRandom(ofGetWidth(), 0);
	y = 0;
	mPosition = ofVec2f(x, y);

	float vx = 0;
	float vy = ofRandom(0.01, 25);
	mVelocity = ofVec2f(0, vy);

	
}


void Rain::update(bool isKeyPressed)
{

	if (mPosition.y >= ofGetHeight()) {
		//bouncingrain.load("image/bouncingrain.png");

		x = ofRandom(ofGetWidth(), 0);
		y = 0;
		mPosition = ofVec2f(x, y);

		float vx = 0;
		float vy = 0;
		mVelocity = ofVec2f(0, vy);

		
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

		
		cloud.draw(0,0,ofGetWidth(),300);
	}




void Rain::keyReleased() {
	mColor = ofColor(245, 252, 254);
	rain.load("image/rain.png");

	cloud.load("image/cloud.png");

	if (mPosition.y >= ofGetHeight()) {
		mColor = ofColor(245, 252, 254);
		//rain.load("image/bouncingrain.png");

		//bouncingrain.load("image/bouncingrain.png");

	}
}

