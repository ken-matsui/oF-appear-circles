//
//  Circle.cpp
//  vector01
//
//  Created by Nana Suzuki on 2017/06/23.
//
//

#include "Circle.hpp"

Circle::Circle(float x, float y, float _r, ofColor _c) {
    pos.set(x, y);
    r = _r;
    c = _c;
}

void Circle :: draw() {
    ofSetColor( c );
    ofDrawCircle( pos.x, pos.y, r*10);
}

Circle::~Circle() {
    
}
