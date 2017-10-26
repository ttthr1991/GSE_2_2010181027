#include "stdafx.h"
#include "Player.h"

CPlayer::CPlayer()
{	
	m_fLife = 30000;
	m_fAttack = 10;
}

CPlayer::~CPlayer()
{


}

void CPlayer::Initialize(void)
{
	m_Info.x = 150;
	m_Info.y = 150;
	m_Info.z = 0;
	m_Info.size = 40;


}

void CPlayer::Update(float _ElapsedTime)
{

	if (m_Info.x > 250)
		m_Info.x = 250;
	else if (m_Info.x <= -250)
		m_Info.x = -250;

	if (m_Info.y > 250)
		m_Info.y = 250;
	else if (m_Info.y <= -250)
		m_Info.y = -250;

	if (GetAsyncKeyState(VK_LEFT) & 0x8000)
	{
		m_Info.x -= 0.1f;
	}
	if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
	{
		m_Info.x += 0.1f;
	}
	if (GetAsyncKeyState(VK_UP) & 0x8000)
	{
		m_Info.y += 0.1f;
	}
	if (GetAsyncKeyState(VK_DOWN) & 0x8000)
	{
		m_Info.y -= 0.1f;
	}
}

void CPlayer::PlayerLifeDown(float _fAttack)
{
	m_fLife -= _fAttack;
}


