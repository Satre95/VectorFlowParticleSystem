#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	computeShader.setupShaderFromFile(GL_COMPUTE_SHADER, "computeParticles.glsl");
	computeShader.linkProgram();

	particles.resize(numParticles);
	for (auto & p : particles) {
		p.position = randomPointInSphere(5.0f);
		p.velocity = ofVec4f(0);
		p.color = randomPointInSphere(1.0f);
	}

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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

//From http://mathworld.wolfram.com/SpherePointPicking.html
ofVec4f ofApp::randomPointInSphere(float radius) {
	float u = ofRandom(1.0f);
	float v = ofRandom(1.0f);

	float theta = 2.0f * PI * u;
	float azimuth = acosf(2.0f * v - 1.0f);

	float x = radius * sinf(azimuth) * cosf(theta);
	float y = radius * sinf(azimuth) * sinf(theta);
	float z = radius * cosf(azimuth);

	return ofVec4f(x, y, z, 1.0f);

}
