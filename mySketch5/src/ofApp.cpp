#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);

	ofSetBackgroundColor(255, 255, 255);

	for (int i = 0; i < COUNT; i++) {
		mRains[i].setup();
	}
}

//--------------------------------------------------------------
void ofApp::update(){
	for (int i = 0; i < COUNT; i++) {
		mRains[i].update();
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	for (int i = 0; i < COUNT; i++) {
		mRains[i].draw();
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 'c') {
	
	}
	}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
