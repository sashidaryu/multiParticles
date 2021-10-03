//
//  ball.cpp
//  myCvTest
//
//  Created by RS on 2021/09/29.
//
#include "ofMain.h"
#include "ball.h"
 
Ball::Ball(){
    // 初期の色を設定する
    color.set( ofRandom(255), ofRandom(255), ofRandom(255));
    R = 200;
}

 
void Ball::moveTo(int delay){
    if (angle == 360){
        angle=0;
    }else{
        angle+=1;
    }
    theta = glm::radians(angle - delay);
    x = R * cos(3*theta);
    y = -R * sin(2*theta);
}
 
void Ball::draw(){
    ofSetColor(0, 157, 255);
    ofFill();
    ofCircle( x, y, 2);
}
