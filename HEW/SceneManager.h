/*======================================================

	[SceneManager.h]
	Author : �o���đ�

======================================================*/

#pragma once
#include "main.h"
#include "SceneBase.h"

//�}�N����`
#define SCENE_NUMBER 6	//	�V�[���̐�	

//#	SceneManager�N���X
class SceneManager
{
private:
	static SceneBase			*scene[SCENE_NUMBER];	//	�V�[���Ǘ��|�C���^�ϐ�
	static SCENE_STATE			scenestate;				//	�V�[���X�e�[�g�̊Ǘ��ϐ�
	static LPDIRECT3DDEVICE9	p3DDevice;				//	�f�o�C�X�̎擾�ϐ�
public:
	static void Init();					//	����������
	static void Uninit();				//	�I������
	static void Update();				//	�X�V����
	static void Draw();					//	�`�揈��
	static void ChangeSceneState();		//	�V�[���J�ڏ���
};
