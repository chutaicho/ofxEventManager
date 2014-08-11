//
//  Copyright (c) 2014 Takashi Aoki
//
//  Released under the MIT license
//  http://opensource.org/licenses/mit-license.php
//

#include "ofxEventManager.h"

ofxEventManager::Manager* ofxEventManager::Manager::instance = NULL;

void ofDispatchEvent(ofxEventManager::Event& event)
{	
	ofxEventManager::Manager::getInstance()->dispatchEvent(event);
};