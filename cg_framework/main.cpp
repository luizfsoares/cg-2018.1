#include "main.h"

//-----------------------------------------------------------------------------
void MyGlDraw(void)
{
	//*************************************************************************
	// Chame aqui as funções do mygl.h
	//*************************************************************************
	FBptr[0] = 255;
	FBptr[1] = 0;
	FBptr[2] = 0;
	FBptr[3] = 255;
	FBptr[4] = 255;
	FBptr[5] = 0;
	FBptr[6] = 0;
	FBptr[7] = 255;



}

//-----------------------------------------------------------------------------
int main(int argc, char **argv)
{
	// Inicializações.
	InitOpenGL(&argc, argv);
	InitCallBacks();
	InitDataStructures();

	// Ajusta a função que chama as funções do mygl.h
	DrawFunc = MyGlDraw;
	MyGlDraw();

	// Framebuffer scan loop.
	glutMainLoop();

	return 0;
}

