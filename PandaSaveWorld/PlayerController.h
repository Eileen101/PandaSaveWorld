#pragma once
#include <GL/glew.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include "shader.h"
#include "model.h"
#include "BaseController.h"

#include <vector>
#include <iostream>

class PlayerController : public BaseController {
public:
	PlayerController(PhysicsEngine* physicsEngine);

	// ��ʼ�����
	void initPlayer();

	// ��Ⱦ���
	void renderPlayer(Camera *currentCamera, float deltaTime);

private:

	// ������ײ����(δ���)
	void setPlayerCollisionBox();
};