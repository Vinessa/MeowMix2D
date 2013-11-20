#include "PlayerCat.h"



PlayerCat::PlayerCat()
{
}

PlayerCat::PlayerCat(const char* a_TextureName, int a_Sprite_W, int a_Sprite_H, float a_Position_X, float a_Position_Y, float a_Velocity_X, float a_Velocity_Y, int a_Health)
{

	Init(a_TextureName, a_Sprite_W,  a_Sprite_H, a_Position_X, a_Position_Y);
	m_SpriteID = CreateSprite( m_TextureName, m_Sprite_W, m_Sprite_H, true );
	m_HeroHealth = a_Health;
	IsAlive = true;
	m_SpriteType = 'C';
	Vector2D Velocity (a_Velocity_X, a_Velocity_Y);
	m_Collider.SetRadius(8.0f);
	Vector2D tempPosition(200,300);
	//m_DeathID = CreateSprite( "./images/Crumpled_Plane.png", m_Sprite_W, m_Sprite_H, true );
	//m_RespawnID = CreateSprite( "./images/HERO.png", m_Sprite_W, m_Sprite_H, true );
	//Score = 1000;
	Lives = 9;
	Gravity = 400;
	JumpHeight = 300;
	
}


PlayerCat::~PlayerCat(void)
{
}

void PlayerCat::DeltaTime()
{
dt = GetDeltaTime();
}

void PlayerCat::UpdateCat() //formerly jump
{
	
	if((m_Velocity.GetY()) == 0)
	{
		m_Position.SetY((m_Position.GetY())+((m_Velocity.GetY()*dt)));
		m_Velocity.SetY((m_Velocity.GetY() - (Gravity *dt)));

			if (m_Position.GetY() < 0)
			{
				m_Velocity.SetY(0);
				m_Position.SetY(0);
			}
	}
}

void PlayerCat::CheckforJump()
 {
  	if (IsKeyDown(KEY_SPACE))
	{
 		if ((m_Velocity.GetY()) == 0)
		{
			m_Velocity.SetY(JumpHeight);
		}
	}
}

