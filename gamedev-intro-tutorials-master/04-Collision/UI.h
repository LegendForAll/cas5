#pragma once
#include "GameObject.h"
#include "define.h"
#include "Items.h"
#include "Mario.h"
#include "TextView.h"


class UI : public CGameObject
{

	int HPsimon = 10;
	int HPboss = 10;
	int subWeapon;

	D3DXVECTOR3 posHP;
	RECT rect;
	Items* item;
	CText *textG;

public:

	UI();
	~UI();

	virtual void LoadResource();
	void initFont(LPDIRECT3DDEVICE9 d3ddv);
	virtual void GetBoundingBox(float &l, float &t, float &r, float &b);
	virtual void Update(DWORD dt, vector<LPGAMEOBJECT> *coObjects, vector<LPGAMEOBJECT> *coObjectStatic, vector<LPGAMEOBJECT> *coObjectEnemy);
	virtual void Render(float xViewport, float yViewport);

	void setPositionUI(float _x, float _y);
	void setPositionHP(float _x, float _y);
	void resetUI();

	void setHPSimon(int _HPsimon);
	void setHPBoss(int _HPBoss);

	void UpdateItem(CMario *_simon);

	CText* getText() { return this->textG; }
};