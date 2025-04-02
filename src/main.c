#include "raylib.h"

int main(int argc, char** argv) {

	const int screenWidth = 500;
	const int screenHeight = 500;
	const char gameName[] = "snaek";

	InitWindow(screenWidth, screenHeight, gameName);
	SetTargetFPS(60);

	while (!WindowShouldClose()) {
		ClearBackground(RAYWHITE);
	}

	CloseWindow();

	return 0;
}