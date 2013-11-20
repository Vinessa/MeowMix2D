#pragma once
#ifndef _BACKGROUND_H_
#define _BACKGROUND_H_
#include "sprite.h"
class Background :
	public Sprite
{
public:
	Background(void);
	Background(const char* a_TextureName, int a_Sprite_W, int a_Sprite_H, float a_Position_x, float a_Position_y, float a_Velocity_X, float a_Velocity_Y, int a_ScrollSpeed);
	~Background(void);

	void CheckForMovement();
	void CheckForVerticalMovement();
	void Jump();
	void CheckForJump();
	void UpdateJump();

	float ScrollSpeed;
	float Gravity;
	bool IsAlive;
	float JumpHeight;
	float dt;

	#endif //_BACKGROUND_H_
};

