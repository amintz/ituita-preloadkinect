#include "testApp.h"
#include "ofAppGlutWindow.h"

//--------------------------------------------------------------
int main(){
	ofAppGlutWindow window; // create a window
	// set width, height, mode (OF_WINDOW or OF_FULLSCREEN)
	ofSetupOpenGL(&window, OUTPUT_SCREEN_W, OUTPUT_SCREEN_H, OF_WINDOW);
	ofRunApp(new testApp()); // start the app
}
