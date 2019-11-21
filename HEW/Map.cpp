/*========================================================
	
	[Map.cpp]
	Author : �o���đ�

=========================================================*/

#include <map>
#include "main.h"
#include "Map.h"

//	�}�N����`
#define FILELIST 2	//	�ǂݍ��ރt�@�C���̐�

//	�O���[�o���ϐ�
extern std::map<std::string, XFile *>g_pXFileList;
Model *Map::Actor[ACTOR_NUM];		//	Model�^�|�C���^�z��

void Map::Init()
{
	//!	XFlie�̃��[�h����
	// �ǂݍ��݃t�@�C�������X�g
	std::string file_name_list[] =
	{
		"asset/model/ri.x",
		"asset/model/dai.x",
	};

	// XFile�ǂݍ���
	for (int i = 0; i < FILELIST; i++)
	{
		g_pXFileList[file_name_list[i]] = new XFile();
		g_pXFileList[file_name_list[i]]->Load(file_name_list[i]);
	}
	
}

void Map::Uninit()
{
	delete Actor[0];	//!	�Ăяo����XFile�̃f�X�g���N�^�ŗ�O�X���[����
}

void Map::Draw()
{
	//	3D���f���̕`��
	Actor[0] = new Model(D3DXVECTOR3(0.0f, 0.0f, 0.0f),D3DXVECTOR3(30.0f, 30.0f, 30.0f),D3DXVECTOR3(0.0f, 0.0f, 0.0f),g_pXFileList["asset/model/dai.x"]);
	Actor[0]->Draw();

}