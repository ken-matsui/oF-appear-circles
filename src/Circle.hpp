//
//  Circle.hpp
//  vector01
//
//  Created by Nana Suzuki on 2017/06/23.
//
//

#ifndef Circle_hpp
#define Circle_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* Circle_hpp */


class Circle {
 
public:
    
    Circle(float x, float y, float _r, ofColor _c);
    ~Circle();
    
    void draw();
    
private:
    
    ofVec2f pos;
    float r;
    ofColor c;
};
