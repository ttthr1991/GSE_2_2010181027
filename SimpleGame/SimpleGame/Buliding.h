#pragma once
#include "GameObject.h"
#include "Bullet.h"

class CBuliding :
	public CGameObject
{
public:
	CBuliding();
	virtual ~CBuliding();
public:
	virtual void Initialize(void);
	virtual int  Update(float _ElapsedTime);
private:
	list<CGameObject*>* m_pBulletList;
	bool     m_bCheck;
	float    m_fLife;
public:
	void  SetBullet(list<CGameObject*>* pBulletList);
	CGameObject* CreateBullet(eDirType eType);
	float GetLife() { return m_fLife; }
	void  BulidingLifeDown(float _fAttack) { m_fLife -= _fAttack; }
};

