#include "scene.h"

#include "V3.h"
#include "M33.h"

Scene *scene;

using namespace std;

#include <iostream>
#include <fstream>

Scene::Scene() {

	gui = new GUI();
	gui->show();

	int u0 = 16;
	int v0 = 40;
	int h = 480;
	int w = 640;
	fb = new FrameBuffer(u0, v0, w, h);
	fb->position(u0, v0);
	fb->label("SW framebuffer");
	fb->show();
	fb->redraw();

	gui->uiw->position(u0+w+u0, v0);

}

void Scene::DBG() {
	cerr << "INFO: pressed DBG button on GUI" << endl;
}

void Scene::NewButton() {
	cerr << "INFO: pressed New button on GUI" << endl;
}

