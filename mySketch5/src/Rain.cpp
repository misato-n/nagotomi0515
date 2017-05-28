#include "Rain.h"



void Rain::setup()
{
	cloud.load("image/cloud.png");
	rain.load("image/rain.png");

	x = ofRandom(ofGetWidth(), 0);
	y = 0;
	mPosition = ofVec2f(x, y);

	float vx = 0;
	float vy = ofRandom(0.0001, 40);
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

		//if (mPosition.y=ofGetHeight()-50) {
		//	mVelocity == ofVec2f(0,0);
		//}







		/*for (i = 0; i <16 ; i++) {
			if (mArray[1][i] = false) {
				x = i;
			}
		}
		for (i = 0; i < 16; i++) {
			if(mArray[2][i] = false){
			     x = i;
		}
		}
		for (i = 0; i < 16; i++) {
			if (mArray[3][i] = false) {
				x = i;
			}
		}
		for (i = 0; i < 16; i++) {
			if (mArray[4][i] = false) {
				x = i;
			}
		}
		for (i = 0; i < 16; i++) {
			if (mArray[5][i] = false) {
				x = i;
			}
		}
		for (i = 0; i < 16; i++) {
			if (mArray[6][i] = false) {
				x = i;
			}
		}
		for (i = 0; i < 16; i++) {
			if (mArray[7][i] = false){
				x = i;
		    }
		}
		for (i = 0; i < 16; i++) {
			if (mArray[8][i] = false) {
				x = i;
			}
		}
		for (i = 0; i < 16; i++) {
			if (mArray[9][i] = false) {
				x = i;
			}
		}
		for (i = 0; i < 16; i++) {
			if (mArray[10][i] = false) {
				x = i;
			}
		}
		for (i = 0; i < 16; i++) {
			if (mArray[11][i] = false) {
				x = i;
			}
		}
		for (i = 0; i < 16; i++) {
			if (mArray[12][i] = false) {
				x = i;
			}
		}
		for (i = 0; i < 16; i++) {
			if (mArray[13][i] = false) {
				x = i;
			}
		}
		for (i = 0; i < 16; i++) {
			if (mArray[14][i] = false) {
				x = i;
			}
		}
		for (i = 0; i < 16; i++) {
			if (mArray[15][i] = false) {
				x = i;
			}
		}
		for (i = 0; i < 16; i++) {
			if (mArray[16][i] = false) {
				x = i;
			}
		}
			
		
		if (i==16) {
			mArray[16][16] = true;
			mVelocity == ofVec2f(0,0);
		}*/
		}
	
	}



	void Rain::draw()
	{
		ofSetColor(mColor);

		rain.draw(mPosition, 50, 50);
		//bouncingrain.draw(x, ofGetHeight() - 100, 110, 110);

		
		cloud.draw(0,0,ofGetWidth(),350);
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

