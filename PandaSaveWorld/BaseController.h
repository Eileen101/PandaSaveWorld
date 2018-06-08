#pragma once
#include <GL/glew.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include "Flame.h"
#include "shader.h"
#include "camera.h"
#include "model.h"
#include "PhysicsEngine.h"

#include <vector>
#include <unordered_map>
#include <iostream>

// settings
#define SCR_WIDTH 1000
#define SCR_HEIGHT 1000

class BaseController {

public:
	// ���ָ����shader
	Shader* getShader(string name);

	// ����ָ����shader
	void setShader(string name, Shader &shader);

	// ���ָ����model
	Model* getModel(string name);

	// ����ָ����model
	void setModel(string name, Model &model);

	// ���ָ��������ϵͳ
	Flame* getFlame(string name);

	// ����ָ��������ϵͳ
	void setFlame(string name, Flame &flame);

	PhysicsEngine *_physicsEngine;

protected:
	// ����shader
	void compileShader(string vsPath, string fsPath, string name);

	// ����ģ��
	void loadModel(string path, string name);

	std::vector<Shader> shaderArr;
	std::map<string, int> shaderIndex;
	std::vector<Model> modelArr;
	std::map<string, int> modelIndex;
	std::vector<Flame> flameArr;
	std::map<string, int> flameIndex;
};