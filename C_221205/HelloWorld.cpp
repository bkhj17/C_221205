#include "HelloWorld.h"

const char* HelloWorld::hello_world = "Hello World!";

void HelloWorld::Run() {
	printf("%s", HelloWorld::hello_world);
}