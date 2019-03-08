#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	walkerX = ofGetWidth() / 2;
	walkerY = ofGetHeight() / 2;
	ofSetBackgroundAuto(false);
	ofBackground(0);
	
	walkerR = 127;
	walkerG = 127;
	walkerB = 127;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	
	walkerX = ofClamp(walkerX + ofRandom(-1, 1), 0, ofGetWidth());
	walkerY = ofClamp(walkerY + ofRandom(-1, 1), 0, ofGetWidth());

	walkerR = ofClamp(walkerR + ofRandom(-1, 1), 0, 255);
	walkerG = ofClamp(walkerG + ofRandom(-1, 1), 0, 255);
	walkerB = ofClamp(walkerB + ofRandom(-1, 1), 0, 255);
	
	ofSetColor(walkerR, walkerG, walkerB);

	ofDrawCircle(walkerX, walkerY, 1);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
