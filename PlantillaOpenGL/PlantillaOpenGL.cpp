// PlantillaOpenGL.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"

#include <stdio.h>
#include <stdlib.h>

#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream>

#include "Shader.h"
#include "Vertice.h"

#include "Modelo.h"


using namespace std;



Shader *shader;
GLuint posicionID;
GLuint colorID;

Modelo *triangulo;
Modelo *cuadrado;

Modelo *rectangulo1;
Modelo *rectangulo2;
Modelo *rectangulo3;
Modelo *rectangulo4;
Modelo *rectangulo5;

Modelo *ojoCuadrado1;



Modelo *ojo1cuadro1;
Modelo *ojo1cuadro2;
Modelo *ojo1iris;

Modelo *ojo2cuadro1;
Modelo *ojo2cuadro2;
Modelo *ojo2iris;

Modelo *cuerpo1;
Modelo *cuerpo2;
Modelo *cuerpo3;
Modelo *cuerpo4;
Modelo *cuerpo5;


Modelo *pies1;
Modelo *pies2;

Modelo *cuadradoPies;

Modelo *pies3;
Modelo *pies4;



void inicializarOjo1cuadro1() {

	ojo1cuadro1 = new Modelo();

	Vertice v1 = {
		vec3(-0.25,-0.2,0.0),
		vec4(1.0f,1.0f,1.0f,1.0f)
	};

	Vertice v2 = {
		vec3(-0.25,0.0,0.0),
		vec4(1.0f,1.0f,1.0f,1.0f) 
	};

	Vertice v3 = {
		vec3(0.0,0.0,0.0),
		vec4(1.0f,1.0f,1.0f,1.0f) 
	};

	Vertice v4 = {
		vec3(0.0,-0.2,0.0),
		vec4(1.0f,1.0f,1.0f,1.0f) 
	};

	ojo1cuadro1->vertices.push_back(v1);
	ojo1cuadro1->vertices.push_back(v2);
	ojo1cuadro1->vertices.push_back(v3);
	ojo1cuadro1->vertices.push_back(v4);


}

void inicializarOjo1cuadro2() {

	ojo1cuadro2 = new Modelo();

	Vertice v1 = {
		vec3(-0.2,-0.3,0.0),
		vec4(1.0f,1.0f,1.0f,1.0f)
	};

	Vertice v2 = {
		vec3(-0.2,0.1,0.0),
		vec4(1.0f,1.0f,1.0f,1.0f)
	};

	Vertice v3 = {
		vec3(-0.05,0.1,0.0),
		vec4(1.0f,1.0f,1.0f,1.0f)
	};

	Vertice v4 = {
		vec3(-0.05,-0.3,0.0),
		vec4(1.0f,1.0f,1.0f,1.0f)
	};

	ojo1cuadro2->vertices.push_back(v1);
	ojo1cuadro2->vertices.push_back(v2);
	ojo1cuadro2->vertices.push_back(v3);
	ojo1cuadro2->vertices.push_back(v4);


}

void inicializarOjo1iris() {

	ojo1iris = new Modelo();

	Vertice v1 = {
		vec3(-0.1,-0.2,0.0),
		vec4(0.0f,0.0f,1.0f,1.0f)
	};

	Vertice v2 = {
		vec3(-0.1,-0.05,0.0),
		vec4(0.0f,0.0f,1.0f,1.0f)
	};

	Vertice v3 = {
		vec3(0.0,-0.05,0.0),
		vec4(0.0f,0.0f,1.0f,1.0f)
	};

	Vertice v4 = {
		vec3(0.0,-0.2,0.0),
		vec4(0.0f,0.0f,1.0f,1.0f)
	};

	ojo1iris->vertices.push_back(v1);
	ojo1iris->vertices.push_back(v2);
	ojo1iris->vertices.push_back(v3);
	ojo1iris->vertices.push_back(v4);


}



void inicializarOjo2cuadro1() {

	ojo2cuadro1 = new Modelo();

	Vertice v1 = {
		vec3(0.15,-0.2,0.0),
		vec4(1.0f,1.0f,1.0f,1.0f)
	};

	Vertice v2 = {
		vec3(0.15,0.0,0.0),
		vec4(1.0f,1.0f,1.0f,1.0f)
	};

	Vertice v3 = {
		vec3(0.4,0.0,0.0),
		vec4(1.0f,1.0f,1.0f,1.0f)
	};

	Vertice v4 = {
		vec3(0.4,-0.2,0.0),
		vec4(1.0f,1.0f,1.0f,1.0f)
	};

	ojo2cuadro1->vertices.push_back(v1);
	ojo2cuadro1->vertices.push_back(v2);
	ojo2cuadro1->vertices.push_back(v3);
	ojo2cuadro1->vertices.push_back(v4);


}

void inicializarOjo2cuadro2() {

	ojo2cuadro2 = new Modelo();

	Vertice v1 = {
		vec3(0.2,-0.3,0.0),
		vec4(1.0f,1.0f,1.0f,1.0f)
	};

	Vertice v2 = {
		vec3(0.2,0.1,0.0),
		vec4(1.0f,1.0f,1.0f,1.0f)
	};

	Vertice v3 = {
		vec3(0.35,0.1,0.0),
		vec4(1.0f,1.0f,1.0f,1.0f)
	};

	Vertice v4 = {
		vec3(0.35,-0.3,0.0),
		vec4(1.0f,1.0f,1.0f,1.0f)
	};

	ojo2cuadro2->vertices.push_back(v1);
	ojo2cuadro2->vertices.push_back(v2);
	ojo2cuadro2->vertices.push_back(v3);
	ojo2cuadro2->vertices.push_back(v4);


}

void inicializarOjo2iris() {

	ojo2iris = new Modelo();

	Vertice v1 = {
		vec3(0.3,-0.2,0.0),
		vec4(0.0f,0.0f,1.0f,1.0f)
	};

	Vertice v2 = {
		vec3(0.3,-0.05,0.0),
		vec4(0.0f,0.0f,1.0f,1.0f)
	};

	Vertice v3 = {
		vec3(0.4,-0.05,0.0),
		vec4(0.0f,0.0f,1.0f,1.0f)
	};

	Vertice v4 = {
		vec3(0.4,-0.2,0.0),
		vec4(0.0f,0.0f,1.0f,1.0f)
	};

	ojo2iris->vertices.push_back(v1);
	ojo2iris->vertices.push_back(v2);
	ojo2iris->vertices.push_back(v3);
	ojo2iris->vertices.push_back(v4);


}



void inicializarCuerpo1() {

	cuerpo1 = new Modelo();

	Vertice v1 = {
		vec3(-0.5,-0.7,0.0),
		vec4(1.0f,0.5f,0.0f,1.0f)
	};

	Vertice v2 = {
		vec3(-0.5,-0.1,0.0),
		vec4(1.0f,0.5f,0.0f,1.0f)
	};

	Vertice v3 = {
		vec3(0.5,-0.1,0.0),
		vec4(1.0f,0.5f,0.0f,1.0f)
	};

	Vertice v4 = {
		vec3(0.5,-0.7,0.0),
		vec4(1.0f,0.5f,0.0f,1.0f)
	};

	cuerpo1->vertices.push_back(v1);
	cuerpo1->vertices.push_back(v2);
	cuerpo1->vertices.push_back(v3);
	cuerpo1->vertices.push_back(v4);


}

void inicializarCuerpo2() {

	cuerpo2 = new Modelo();

	Vertice v1 = {
		vec3(-0.4,-0.1,0.0),
		vec4(1.0f,0.5f,0.0f,1.0f)
	};

	Vertice v2 = {
		vec3(-0.4,0.1,0.0),
		vec4(1.0f,0.5f,0.0f,1.0f)
	};

	Vertice v3 = {
		vec3(0.4,0.1,0.0),
		vec4(1.0f,0.5f,0.0f,1.0f)
	};

	Vertice v4 = {
		vec3(0.4,-0.1,0.0),
		vec4(1.0f,0.5f,0.0f,1.0f)
	};

	cuerpo2->vertices.push_back(v1);
	cuerpo2->vertices.push_back(v2);
	cuerpo2->vertices.push_back(v3);
	cuerpo2->vertices.push_back(v4);


}

void inicializarCuerpo3() {

	cuerpo3 = new Modelo();

	Vertice v1 = {
		vec3(-0.3,0.1,0.0),
		vec4(1.0f,0.5f,0.0f,1.0f)
	};

	Vertice v2 = {
		vec3(-0.3,0.2,0.0),
		vec4(1.0f,0.5f,0.0f,1.0f)
	};

	Vertice v3 = {
		vec3(0.3,0.2,0.0),
		vec4(1.0f,0.5f,0.0f,1.0f)
	};

	Vertice v4 = {
		vec3(0.3,0.1,0.0),
		vec4(1.0f,0.5f,0.0f,1.0f)
	};

	cuerpo3->vertices.push_back(v1);
	cuerpo3->vertices.push_back(v2);
	cuerpo3->vertices.push_back(v3);
	cuerpo3->vertices.push_back(v4);


}

void inicializarCuerpo4() {

	cuerpo4 = new Modelo();

	Vertice v1 = {
		vec3(-0.2,0.2,0.0),
		vec4(1.0f,0.5f,0.0f,1.0f)
	};

	Vertice v2 = {
		vec3(-0.2,0.3,0.0),
		vec4(1.0f,0.5f,0.0f,1.0f)
	};

	Vertice v3 = {
		vec3(0.2,0.3,0.0),
		vec4(1.0f,0.5f,0.0f,1.0f)
	};

	Vertice v4 = {
		vec3(0.2,0.2,0.0),
		vec4(1.0f,0.5f,0.0f,1.0f)
	};

	cuerpo4->vertices.push_back(v1);
	cuerpo4->vertices.push_back(v2);
	cuerpo4->vertices.push_back(v3);
	cuerpo4->vertices.push_back(v4);


}

void inicializarCuerpo5() {

	cuerpo5 = new Modelo();

	Vertice v1 = {
		vec3(-0.08,0.3,0.0),
		vec4(1.0f,0.5f,0.0f,1.0f)
	};

	Vertice v2 = {
		vec3(-0.08,0.4,0.0),
		vec4(1.0f,0.5f,0.0f,1.0f)
	};

	Vertice v3 = {
		vec3(0.08,0.4,0.0),
		vec4(1.0f,0.5f,0.0f,1.0f)
	};

	Vertice v4 = {
		vec3(0.08,0.3,0.0),
		vec4(1.0f,0.5f,0.0f,1.0f)
	};

	cuerpo5->vertices.push_back(v1);
	cuerpo5->vertices.push_back(v2);
	cuerpo5->vertices.push_back(v3);
	cuerpo5->vertices.push_back(v4);


}


void inicializarPies1() {

	pies1 = new Modelo();

	Vertice v1 = {
		vec3(-0.4,-0.7,0.0),
		vec4(0.0f,0.0f,0.0f,1.0f)
	};

	Vertice v2 = {
		vec3(-0.4,-0.6,0.0),
		vec4(0.0f,0.0f,0.0f,1.0f)
	};

	Vertice v3 = {
		vec3(-0.2,-0.6,0.0),
		vec4(0.0f,0.0f,0.0f,1.0f)
	};

	Vertice v4 = {
		vec3(-0.2,-0.7,0.0),
		vec4(0.0f,0.0f,0.0f,1.0f)
	};

	pies1->vertices.push_back(v1);
	pies1->vertices.push_back(v2);
	pies1->vertices.push_back(v3);
	pies1->vertices.push_back(v4);


}

void inicializarPies2() {

	pies2 = new Modelo();

	Vertice v1 = {
		vec3(-0.33,-0.6,0.0),
		vec4(0.0f,0.0f,0.0f,1.0f)
	};

	Vertice v2 = {
		vec3(-0.33,-0.5,0.0),
		vec4(0.0f,0.0f,0.0f,1.0f)
	};

	Vertice v3 = {
		vec3(-0.27,-0.5,0.0),
		vec4(0.0f,0.0f,0.0f,1.0f)
	};

	Vertice v4 = {
		vec3(-0.27,-0.6,0.0),
		vec4(0.0f,0.0f,0.0f,1.0f)
	};

	pies2->vertices.push_back(v1);
	pies2->vertices.push_back(v2);
	pies2->vertices.push_back(v3);
	pies2->vertices.push_back(v4);


}


void inicializarCuadradoPies() {

	cuadradoPies = new Modelo();

	Vertice v1 = {
		vec3(-0.1,-0.7,0.0),
		vec4(0.0f,0.0f,0.0f,1.0f)
	};

	Vertice v2 = {
		vec3(-0.1,-0.5,0.0),
		vec4(0.0f,0.0f,0.0f,1.0f)
	};

	Vertice v3 = {
		vec3(0.1,-0.5,0.0),
		vec4(0.0f,0.0f,0.0f,1.0f)
	};

	Vertice v4 = {
		vec3(0.1,-0.7,0.0),
		vec4(0.0f,0.0f,0.0f,1.0f)
	};

	cuadradoPies->vertices.push_back(v1);
	cuadradoPies->vertices.push_back(v2);
	cuadradoPies->vertices.push_back(v3);
	cuadradoPies->vertices.push_back(v4);


}


void inicializarPies3() {

	pies3 = new Modelo();

	Vertice v1 = {
		vec3(0.2,-0.7,0.0),
		vec4(0.0f,0.0f,0.0f,1.0f)
	};

	Vertice v2 = {
		vec3(0.2,-0.6,0.0),
		vec4(0.0f,0.0f,0.0f,1.0f)
	};

	Vertice v3 = {
		vec3(0.4,-0.6,0.0),
		vec4(0.0f,0.0f,0.0f,1.0f)
	};

	Vertice v4 = {
		vec3(0.4,-0.7,0.0),
		vec4(0.0f,0.0f,0.0f,1.0f)
	};

	pies3->vertices.push_back(v1);
	pies3->vertices.push_back(v2);
	pies3->vertices.push_back(v3);
	pies3->vertices.push_back(v4);


}

void inicializarPies4() {

	pies4 = new Modelo();

	Vertice v1 = {
		vec3(0.27,-0.6,0.0),
		vec4(0.0f,0.0f,0.0f,1.0f)
	};

	Vertice v2 = {
		vec3(0.27,-0.5,0.0),
		vec4(0.0f,0.0f,0.0f,1.0f)
	};

	Vertice v3 = {
		vec3(0.33,-0.5,0.0),
		vec4(0.0f,0.0f,0.0f,1.0f)
	};

	Vertice v4 = {
		vec3(0.33,-0.6,0.0),
		vec4(0.0f,0.0f,0.0f,1.0f)
	};

	pies4->vertices.push_back(v1);
	pies4->vertices.push_back(v2);
	pies4->vertices.push_back(v3);
	pies4->vertices.push_back(v4);


}






void inicializarOjoCuadrado1() {

}

void inicializarRectangulo1(){

	rectangulo1 = new Modelo();

	Vertice v1 = {
		vec3(-0.5,0.15,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	Vertice v2 = {
		vec3(-0.5,0.06,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	Vertice v3 = {
		vec3(0.5,0.06,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	Vertice v4 = {
		vec3(0.5,0.15,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	rectangulo1->vertices.push_back(v1);
	rectangulo1->vertices.push_back(v2);
	rectangulo1->vertices.push_back(v3);
	rectangulo1->vertices.push_back(v4);

}

void inicializarRectangulo2() {

	rectangulo2 = new Modelo();

	Vertice v1 = {
		vec3(-0.4,0.2,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	Vertice v2 = {
		vec3(-0.4,0.15,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	Vertice v3 = {
		vec3(0.4,0.15,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	Vertice v4 = {
		vec3(0.4,0.2,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	rectangulo2->vertices.push_back(v1);
	rectangulo2->vertices.push_back(v2);
	rectangulo2->vertices.push_back(v3);
	rectangulo2->vertices.push_back(v4);

}

void inicializarRectangulo3() {

	rectangulo3 = new Modelo();

	Vertice v1 = {
		vec3(-0.3,0.25,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	Vertice v2 = {
		vec3(-0.3,0.2,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	Vertice v3 = {
		vec3(0.3,0.2,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	Vertice v4 = {
		vec3(0.3,0.25,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	rectangulo3->vertices.push_back(v1);
	rectangulo3->vertices.push_back(v2);
	rectangulo3->vertices.push_back(v3);
	rectangulo3->vertices.push_back(v4);

}

void inicializarRectangulo4() {

	rectangulo4 = new Modelo();

	Vertice v1 = {
		vec3(-0.2,0.3,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	Vertice v2 = {
		vec3(-0.2,0.25,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	Vertice v3 = {
		vec3(0.2,0.25,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	Vertice v4 = {
		vec3(0.2,0.3,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	rectangulo4->vertices.push_back(v1);
	rectangulo4->vertices.push_back(v2);
	rectangulo4->vertices.push_back(v3);
	rectangulo4->vertices.push_back(v4);

}

void inicializarRectangulo5() {

	rectangulo5 = new Modelo();

	Vertice v1 = {
		vec3(-0.1,0.36,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	Vertice v2 = {
		vec3(-0.1,0.3,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	Vertice v3 = {
		vec3(0.1,0.3,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	Vertice v4 = {
		vec3(0.1,0.36,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	rectangulo5->vertices.push_back(v1);
	rectangulo5->vertices.push_back(v2);
	rectangulo5->vertices.push_back(v3);
	rectangulo5->vertices.push_back(v4);

}

void inicializarCuadrado() {

	cuadrado = new Modelo();

	Vertice v1 = {
		vec3(-0.8,0.8,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	Vertice v2 = {
		vec3(-0.4,0.8,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	Vertice v3 = {
		vec3(-0.4,0.5,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	Vertice v4 = {
		vec3(-0.8,0.5,0.0),
		vec4(0.4,0.7,0.1,1.0)
	};

	cuadrado->vertices.push_back(v1);
	cuadrado->vertices.push_back(v2);
	cuadrado->vertices.push_back(v3);
	cuadrado->vertices.push_back(v4);

}

void inicializarTriangulo() {

	triangulo = new Modelo();

	Vertice v1 =
	{
		vec3(0.0f,0.3f,0.0f),
		vec4(1.0f,0.8f,0.0f,1.0f)
	};

	Vertice v2 =
	{
		vec3(-0.3f,-0.3f,0.0f),
		vec4(1.0f,0.8f,0.0f,1.0f)
	};

	Vertice v3 =
	{
		vec3(0.3f,-0.3f,0.0f),
		vec4(1.0f,0.8f,0.0f,1.0f)
	};

	triangulo->vertices.push_back(v1);
	triangulo->vertices.push_back(v2);
	triangulo->vertices.push_back(v3);
	
}



void dibujar() {

	

	cuerpo1->dibujar(GL_QUADS);
	cuerpo2->dibujar(GL_QUADS);
	cuerpo3->dibujar(GL_QUADS);
	cuerpo4->dibujar(GL_QUADS);
	cuerpo5->dibujar(GL_QUADS);

	pies1->dibujar(GL_QUADS);
	pies2->dibujar(GL_QUADS);

	cuadradoPies->dibujar(GL_QUADS);

	pies3->dibujar(GL_QUADS);
	pies4->dibujar(GL_QUADS);

	ojo2cuadro1->dibujar(GL_QUADS);
	ojo2cuadro2->dibujar(GL_QUADS);
	ojo2iris->dibujar(GL_QUADS);

	ojo1cuadro1->dibujar(GL_QUADS);
	ojo1cuadro2->dibujar(GL_QUADS);
	ojo1iris->dibujar(GL_QUADS);

	/*
	triangulo->dibujar(GL_TRIANGLES);
	cuadrado->dibujar(GL_QUADS);
	

	
	rectangulo1->dibujar(GL_QUADS);
	rectangulo2->dibujar(GL_QUADS);
	rectangulo3->dibujar(GL_QUADS);
	rectangulo4->dibujar(GL_QUADS);
	rectangulo5->dibujar(GL_QUADS);
	*/
}

void actualizar() {
	
}


int main()
{
	//Declaramos apuntador de ventana
	GLFWwindow *window;
	
	//Si no se pudo iniciar glfw
	//terminamos ejcución
	if (!glfwInit()) {
		exit(EXIT_FAILURE);
	}
	//Si se pudo iniciar GLFW
	//entonces inicializamos la ventana
	window = glfwCreateWindow(1024, 768, "Ventana", 
			NULL, NULL);
	//Si no podemos iniciar la ventana
	//Entonces terminamos ejecucion
	if (!window) {
		glfwTerminate();
		exit(EXIT_FAILURE);
	}
	//Establecemos el contexto
	glfwMakeContextCurrent(window);

	//Una vez establecido  el contexto
	//Activamos funciones modernas
	glewExperimental = true;
	GLenum errorGlew = glewInit();

	if (errorGlew != GLEW_OK) {
		cout << glewGetErrorString(errorGlew);
	}

	const GLubyte *versionGL = glGetString(GL_VERSION);
	cout << "Version OpenGL: " << versionGL;

	//---------------------------------------------------------------------....................................................................................

	//AQUI INICIALIZAMOS METODOS/PROCEDIMIENTO

	inicializarOjo2cuadro1();
	inicializarOjo2cuadro2();
	inicializarOjo2iris();

	inicializarOjo1cuadro1();
	inicializarOjo1cuadro2();
	inicializarOjo1iris();

	

	inicializarCuerpo1();
	inicializarCuerpo2();
	inicializarCuerpo3();
	inicializarCuerpo4();
	inicializarCuerpo5();

	inicializarPies1();
	inicializarPies2();
	inicializarCuadradoPies();
	inicializarPies3();
	inicializarPies4();


	
	/*
	inicializarTriangulo();
	inicializarCuadrado();
	

	
	inicializarRectangulo1();
	inicializarRectangulo2();
	inicializarRectangulo3();
	inicializarRectangulo4();
	inicializarRectangulo5();
	*/


	const char *rutaVertex = "VertexShader.shader";
	const char *rutaFragment = "FragmentShader.shader";

	shader = new Shader(rutaVertex, rutaFragment);

	//Mapeo de atributos
	posicionID = glGetAttribLocation(shader->getID(), "posicion");
	colorID = glGetAttribLocation(shader->getID(), "color");

	//Desenlazar el shader
	shader->desenlazar();




	//-------------AQUI MANDAMOS LLAMAR LOS SHADERS Y VERTEX ARRAY DE LOS OBJETOS------------------------

	/*----------------------------------OJO 1 IRIS----------------------------------*/
	//Establecer shader al modelo
	ojo1iris->shader = shader;
	//Inicializar el vertex array
	ojo1iris->inicializarVertexArray(posicionID, colorID);


	/*----------------------------------OJO 1 CUADRO 1----------------------------------*/
	//Establecer shader al modelo
	ojo1cuadro1->shader = shader;
	//Inicializar el vertex array
	ojo1cuadro1->inicializarVertexArray(posicionID, colorID);

	/*----------------------------------OJO 1 CUADRO 2----------------------------------*/
	//Establecer shader al modelo
	ojo1cuadro2->shader = shader;
	//Inicializar el vertex array
	ojo1cuadro2->inicializarVertexArray(posicionID, colorID);




	/*----------------------------------OJO 2 CUADRO 1----------------------------------*/
	//Establecer shader al modelo
	ojo2cuadro1->shader = shader;
	//Inicializar el vertex array
	ojo2cuadro1->inicializarVertexArray(posicionID, colorID);


	/*----------------------------------OJO 2 CUADRO 2----------------------------------*/
	//Establecer shader al modelo
	ojo2cuadro2->shader = shader;
	//Inicializar el vertex array
	ojo2cuadro2->inicializarVertexArray(posicionID, colorID);


	/*----------------------------------OJO 2 IRIS----------------------------------*/
	//Establecer shader al modelo
	ojo2iris->shader = shader;
	//Inicializar el vertex array
	ojo2iris->inicializarVertexArray(posicionID, colorID);





	/*----------------------------------PIES 1----------------------------------*/
	//Establecer shader al modelo
	pies1->shader = shader;
	//Inicializar el vertex array
	pies1->inicializarVertexArray(posicionID, colorID);


	/*----------------------------------PIES 2----------------------------------*/
	//Establecer shader al modelo
	pies2->shader = shader;
	//Inicializar el vertex array
	pies2->inicializarVertexArray(posicionID, colorID);




	/*----------------------------------CUADRADO PIES----------------------------------*/
	//Establecer shader al modelo
	cuadradoPies->shader = shader;
	//Inicializar el vertex array
	cuadradoPies->inicializarVertexArray(posicionID, colorID);


	/*----------------------------------PIES 3----------------------------------*/
	//Establecer shader al modelo
	pies3->shader = shader;
	//Inicializar el vertex array
	pies3->inicializarVertexArray(posicionID, colorID);


	/*----------------------------------PIES 4----------------------------------*/
	//Establecer shader al modelo
	pies4->shader = shader;
	//Inicializar el vertex array
	pies4->inicializarVertexArray(posicionID, colorID);




	/*----------------------------------CUERPO 1----------------------------------*/
	//Establecer shader al modelo
	cuerpo1->shader = shader;
	//Inicializar el vertex array
	cuerpo1->inicializarVertexArray(posicionID, colorID);


	/*----------------------------------CUERPO 2----------------------------------*/
	//Establecer shader al modelo
	cuerpo2->shader = shader;
	//Inicializar el vertex array
	cuerpo2->inicializarVertexArray(posicionID, colorID);


	/*----------------------------------CUERPO 3----------------------------------*/
	//Establecer shader al modelo
	cuerpo3->shader = shader;
	//Inicializar el vertex array
	cuerpo3->inicializarVertexArray(posicionID, colorID);


	/*----------------------------------CUERPO 4----------------------------------*/
	//Establecer shader al modelo
	cuerpo4->shader = shader;
	//Inicializar el vertex array
	cuerpo4->inicializarVertexArray(posicionID, colorID);


	/*----------------------------------CUERPO 5----------------------------------*/
	//Establecer shader al modelo
	cuerpo5->shader = shader;
	//Inicializar el vertex array
	cuerpo5->inicializarVertexArray(posicionID, colorID);





	/*----------------------------------TRIANGULO----------------------------------
	//Establecer shader al modelo
	triangulo->shader = shader;
	//Inicializar el vertex array
	triangulo->inicializarVertexArray(posicionID, colorID);*/



	/*----------------------------------CUADRADO----------------------------------
	//Establecer shader al modelo
	cuadrado->shader = shader;
	//Inicializar el vertex array
	cuadrado->inicializarVertexArray(posicionID, colorID);*/


	


	/*----------------------------------RECTANGULO 1----------------------------------
	//Establecer shader al modelo
	rectangulo1->shader = shader;
	//Inicializar el vertex array
	rectangulo1->inicializarVertexArray(posicionID, colorID);*/


	/*----------------------------------RECTANGULO 2----------------------------------
	//Establecer shader al modelo
	rectangulo2->shader = shader;
	//Inicializar el vertex array
	rectangulo2->inicializarVertexArray(posicionID, colorID);*/


	/*----------------------------------RECTANGULO 3----------------------------------
	//Establecer shader al modelo
	rectangulo3->shader = shader;
	//Inicializar el vertex array
	rectangulo3->inicializarVertexArray(posicionID, colorID);*/


	/*----------------------------------RECTANGULO 4----------------------------------
	//Establecer shader al modelo
	rectangulo4->shader = shader;
	//Inicializar el vertex array
	rectangulo4->inicializarVertexArray(posicionID, colorID);*/


	/*----------------------------------RECTANGULO 5----------------------------------
	//Establecer shader al modelo
	rectangulo5->shader = shader;
	//Inicializar el vertex array
	rectangulo5->inicializarVertexArray(posicionID, colorID);*/


	//----------------------------------------------------------------------....................................................................................

	//Ciclo de dibujo (Draw loop)
	while (!glfwWindowShouldClose(window)) {

		//Esablecer region de dibujo
		glViewport(0, 0, 1024, 768);

		//Establece el color de borrado
		glClearColor(0.0, 0.0, 0.0, 1);

		//Borramos
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		//Rutina de dibujo
		dibujar();
		actualizar();

		//Cambiar los buffers
		glfwSwapBuffers(window);

		//Reconocer si hay entradas
		glfwPollEvents();

	}

	glfwDestroyWindow(window);
	glfwTerminate();

    return 0;

}

