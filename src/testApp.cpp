//--------------------------------------------------------------
// [fturcheti] TODO list
//--------------------------------------------------------------
//
// TODO: implement gestures interactions
// !:  transform blobs into box2d rects
// !:  map the blobs/rects by its ids
// ?:  mind the rigid joints
//
// TODO: implement ghosts particles
//
// TODO: refactor everything related to the graphics
//
// TODO: implement "add new particle"
// !:  animation, particle falling down
//
//--------------------------------------------------------------


#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetLogLevel(OF_LOG_VERBOSE);

#ifdef USE_TWO_KINECTS
    
    kinect.setup(true);
    
#endif
    
#ifndef USE_TWO_KINECTS
    
    kinect.setup(false);
    
#endif
    
    XML.loadFile("path.xml");
    path = XML.getValue("PATH", "ituita-outdoor.app");
    
}
    

//--------------------------------------------------------------
void testApp::update(){
    
    ofBackground(0);
    
    kinect.update();
    
    numDraw++;
    if (numDraw > drawThreshold) {
        exit();
    }
    
}

//--------------------------------------------------------------
void testApp::draw(){

    ofDrawBitmapString("Preloading Kinects - will load soon...", ofGetWidth()/3, ofGetHeight()/3);
    
}

//--------------------------------------------------------------
void testApp::exit() {

    kinect.close();
    string command = "open " + path;
    const char * c = command.c_str();
    system(c);
    ofExit();

}

//--------------------------------------------------------------

void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}