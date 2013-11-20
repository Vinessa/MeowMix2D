#include "Background.h"


Background::Background(void)
{
}


Background::Background(const char* a_TextureName, int a_Sprite_W, int a_Sprite_H, float a_Position_X, float a_Position_Y, float a_Velocity_X, float a_Velocity_Y, int a_ScrollSpeed)
{
	Init(a_TextureName, a_Sprite_W,  a_Sprite_H, a_Position_X, a_Position_Y);
	m_SpriteID = CreateSprite( m_TextureName, m_Sprite_W, m_Sprite_H, true );
	IsAlive = true;
	Vector2D Velocity (a_Velocity_X, a_Velocity_Y);
	//m_DeathID = CreateSprite( "./images/Crumpled_Plane.png", m_Sprite_W, m_Sprite_H, true );
	//m_RespawnID = CreateSprite( "./images/HERO.png", m_Sprite_W, m_Sprite_H, true );
	//Score = 1000;
	Gravity = 2;
	JumpHeight = 1;
	
}



Background::~Background(void)
{
}

void Background::UpdateJump() //formerly jump
{
	dt = GetDeltaTime();
	
	if((m_Velocity.GetY()) == 0)
		{
			m_Position.SetY((m_Position.GetY())+((m_Velocity.GetY()*dt)));
		}

	else 
		if((m_Velocity.GetY()) >= 0)
		{
		m_Velocity.SetY((m_Velocity.GetY() + (Gravity *dt)));
		}

	else 
		if (m_Position.GetY() < 720)
			{
				m_Velocity.SetY(0);
				m_Position.SetY(720);
			}
	}


void Background::CheckForJump()
 {
  	if (IsKeyDown(KEY_SPACE))
	{
 		if ((m_Velocity.GetY()) == 0)
		{
			m_Velocity.SetY(JumpHeight);
		}
	}
}

void Background::CheckForVerticalMovement()
{
		if(IsKeyDown(KEY_RIGHT))
			{
			m_Velocity.SetX(-1);
			}
			else if(IsKeyDown(KEY_LEFT))
			{
				m_Velocity.SetX(1);
			}else{
				m_Velocity.SetX(0);
			}

}

void Background::CheckForMovement()
{
	CheckForVerticalMovement();
	Jump();
}

void Background::Jump()
{   
	CheckForJump();
	UpdateJump();

}