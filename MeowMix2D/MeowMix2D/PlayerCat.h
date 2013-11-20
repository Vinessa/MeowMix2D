#pragma once
#ifndef _PLAYERCAT_H_
#define _PLAYERCAT_H_

#include <time.h>
#include "sprite.h"

class PlayerCat :
	public Sprite
{
public:
	PlayerCat(void);
	PlayerCat(const char* a_TextureName, int a_Sprite_W, int a_Sprite_H, float a_Position_x, float a_Position_y, float a_Velocity_X, float a_Velocity_Y, int a_Health);
	~PlayerCat(void);

	void Jump();
	void DeltaTime();
	void UpdateCat();
	void CheckforJump();

	bool IsAlive; //Alive or Dead? >^._.^<
	int m_HeroHealth; //Current Health
	char m_SpriteType; //E= Enemy, F= Friendly, H = Hero
	int i;
	//unsigned int m_DeathID;
	//unsigned int m_RespawnID;
	//float Score;
	float Lives;
	float Gravity;
	float JumpHeight;
	float dt;
};
#endif //_PLAYERCAT_H_

