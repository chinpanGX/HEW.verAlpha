#pragma once
#include <d3dx9.h>
#include <d3d9.h>
#include "Map.h"
#include "sprite.h"
#include "Limit.h"

#define COUNTDOWN (128)


class Count 
{
private:

	Sprite      m_sprite;
	Map			m_Map;
	Limit	    m_Limit;

public:

	//�J�E���g�̃����o�[�֐��̃I�[�o�[���C�h
	void Init();	//	�Q�[���̏���������	
	void Uninit();	//	�Q�[���̏I������
	void Update();	//	�Q�[���̍X�V����
	void Draw();	//	�Q�[���̕`�揈��
};