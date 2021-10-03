#ifndef ball_hpp
#define ball_hpp

#include <stdio.h>

class Ball {
public:
        // Constructor
        Ball();
 
        // Methods
        void moveTo(int delay);
        void draw();
        void setup();
 
        // Properties
        int x;
        int y;
        int R;
        float theta;
        float angle;
        int theat;
    
        ofColor color;
};
#endif /* ball_hpp */
