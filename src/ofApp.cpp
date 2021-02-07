#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    bg.load("P5bg.png");
    music.load("LastSurprise.mp3");
    music.play();
    xPos=ofRandom(ofGetWidth());
    yPos=ofRandom(ofGetHeight());
    xSpeed=10;
    ySpeed=10;

}

//--------------------------------------------------------------
void ofApp::update(){
    if(xPos >= ofGetWidth() || xPos <= 0){
        xSpeed *= -1;
    }
    if(yPos >= ofGetHeight() || yPos <= 0){
        ySpeed *=-1;
    }

if(Player1.intersects(Puck)){
    xSpeed *= -1;
    ySpeed *= -1;
}
if(Player2.intersects(Puck)){
    xSpeed *= -1;
    ySpeed *= -1;
}
    xPos += xSpeed;
    yPos += ySpeed;
}

//--------------------------------------------------------------
void ofApp::draw(){
    bg.draw(ofGetWidth()/2 - bg.getWidth()/2, ofGetHeight()/2 - bg.getHeight()/2);
    Player1.set(50, ofGetMouseY(), 50, 300);
    Puck.set(xPos, yPos, 20, 20);
    Player2.set(ofGetWidth()-100, yPos, 50, 300);
    ofDrawRectangle(Player1); //Player1
    ofDrawRectangle(Puck); //puck
    ofDrawRectangle(Player2); //Player2

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
if(key=='f'){
    ofToggleFullscreen();
}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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