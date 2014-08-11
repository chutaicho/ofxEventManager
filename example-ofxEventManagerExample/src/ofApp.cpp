#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    ofAddEventManager(this->eventObj, this, &ofApp::callBackFunc);
}

//--------------------------------------------------------------
void ofApp::update()
{

}

//--------------------------------------------------------------
void ofApp::draw(){

}

#pragma mark -
#pragma mark ofxEventManager callback

void ofApp::callBackFunc(ofxEventManager::Event& e)
{
    std::cout << "callBackFunc: " << e.param << std::endl;
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
    if(key=='r')
    {
        ofRemoveEventManager(this->eventObj, this, &ofApp::callBackFunc);
        std::cout << "Event removed." << std::endl;
    }
    else
    {
        eventObj.param = key;
        ofDispatchEvent(this->eventObj);
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
