#include <GLFW/glfw3.h>
#include <iostream>

int main(void)
{

	std::cout << "Hello World!" << std::endl;
	std::cout << "Press [Enter] to open a GLFW window..." << std::endl;
	std::cin.get();

	GLFWwindow* window;

	if (!glfwInit())
		return -1;

	window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window);
	glfwSwapInterval(1);

	while (!glfwWindowShouldClose(window))
	{
		glClearColor(0.0f, 0.5f, 0.25f, 0.0f);
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	glfwTerminate();

	std::cout << "Finished, press [Enter] to continue..." << std::endl;
	std::cin.get();

	return 0;
}