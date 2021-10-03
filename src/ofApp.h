#pragma once

#include "ofMain.h"
#include <random>
#include "ball.h"

class ofApp : public ofBaseApp{
    private:
            vector<ofVec2f> position_vector_2d;
	public:
		void setup();
		void update();
		void draw();
    
        // Properties
        int R;
        float angle;
        
        Ball theBall;
        Ball theBall2;
        Ball theBall3;
        Ball theBall4;
		
};
