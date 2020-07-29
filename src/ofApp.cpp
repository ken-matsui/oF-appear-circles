#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetCircleResolution(60);
}

//--------------------------------------------------------------
void ofApp::update(){
    float x = ofRandom(ofGetWidth());
    float y = ofRandom(ofGetHeight());
    float r = ofRandom(5, 10);
    ofColor c = ofColor(ofRandom(255), ofRandom(255), ofRandom(255));
    
    circles.push_back(Circle(x, y, r, c));
    
    if(circles.size() > 100){
        // FIFO
        circles.erase(circles.begin());
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0, 0, 0);
    
    for(Circle& x : circles) {
        x.draw();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    switch(key) {
    case OF_KEY_DEL:
        circles.clear();
        break;
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
