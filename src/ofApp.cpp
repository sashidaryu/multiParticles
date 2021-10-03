#include "ofApp.h"
#include "ball.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // 輪郭を滑らかにする
    ofEnableSmoothing();
    // フレームレートを設定する
    ofSetFrameRate(60);
    ofBackground(ofColor::black);
    R = 100;
    angle=0;
}

//--------------------------------------------------------------
void ofApp::update(){
    theBall.moveTo(0);
    theBall2.moveTo(50);
    theBall3.moveTo(100);
    theBall4.moveTo(150);
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(ofGetWidth()/2,ofGetHeight()/2);
    theBall.draw();
    theBall2.draw();
    theBall3.draw();
    theBall4.draw();
}
