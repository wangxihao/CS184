#ifndef SCENE_H_
#define SCENE_H_

#include <glm/glm.hpp>
#include <vector>
#include <string>

#ifdef _WIN32
#include <windows.h>
#else
#include <sys/time.h>
#endif

#ifdef OSX
#include <GLUT/glut.h>
#include <OpenGL/glu.h>
#else
#include <GL/glut.h>
#include <GL/glu.h>
#endif

#include "Joint.h"
#include "Arm.h"
#include "IKSolver.h"

class Scene{
	Arm* arm;
	IKSolver* solver;
	float step;

	public:
		Scene();
		virtual ~Scene();
		void render();
		void draw();
		void print();
};

#endif