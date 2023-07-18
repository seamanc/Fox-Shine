#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "Shader.h"

#ifndef FOX_H
#define FOX_H

class Fox
{
	Shader* pShader;

	float data[20] = {
	 0.25f,  0.5f, 0.0f,	1.0f, 1.0f,
	 0.25f, -0.5f, 0.0f,	1.0f, 0.0f,
	-0.25f, -0.5f, 0.0f,	0.0f, 0.0f,
	-0.25f,  0.5f, 0.0f,	0.0f, 1.0f
	};

	unsigned int indices[6] = {  // note that we start from 0!
		0, 1, 3,   // first triangle
		1, 2, 3    // second triangle
	};

	unsigned int VBO;
	unsigned int VAO;
	unsigned int EBO;
	unsigned int texture;

	glm::mat4 trans;

public:
	Fox() = default;
	// Creates Vertex info associated with Fox object
	Fox(Shader* pShader);

	// Draws Fox
	void Draw();

	void Translate(glm::vec3 vec);
};

#endif
