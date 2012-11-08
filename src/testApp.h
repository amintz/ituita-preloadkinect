#pragma once

#include "ofMain.h"

#include "kinectCapture.h"
#include "ofxXmlSettings.h"

// MARK: "USE TWO KINECTS" SWITCH (COMMENT TO USE JUST ONE)

#define USE_TWO_KINECTS

#define OUTPUT_SCREEN_W 1280
#define OUTPUT_SCREEN_H 768


// ---------------------------------------------

class testApp : public ofBaseApp{
    
	public:
    
// MARK: OF BASICS
    
		void setup();
		void update();
		void draw();
        void exit();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
// MARK: PRELOAD KINECT SPECIFIC
    
        int drawThreshold, numDraw;
        
        kinectCapture kinect;
        ofxXmlSettings XML;
    string path;
    
};


