/*=======================================================

	[SecneModeSelect.h]
	Author : �o���đ�

=======================================================*/

#pragma once
#include "SceneBase.h"

class SceneModeSelect : public SceneBase
{
public:
	//SceneBase�̃����o�[�֐��̃I�[�o�[���C�h
	void Init();	//	�Q�[���̏���������	
	void Uninit();	//	�Q�[���̏I������
	void Update();	//	�Q�[���̍X�V����
	void Draw();	//	�Q�[���̕`�揈��
};
