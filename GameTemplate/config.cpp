#include"Config.h"
#include"SceneMgr.h"
#include"DxLib.h"

static int mImageHandle;

//������
void Config_Initialize() {
	mImageHandle = LoadGraph(TEXT("images1/Scene_Config.bmp"));
}

//�I������
void Config_Finalize() {
	DeleteGraph(mImageHandle);
}


void Config_Update() {
	if (CheckHitKey(KEY_INPUT_ESCAPE) != 0) {
		SceneMgr_ChangeScene(eScene_Menu);
	}
}


void Config_Draw() {
	DrawGraph(0, 0, mImageHandle, FALSE);
	DrawString(20, 380, TEXT("�R���t�B�O��ʂł��B"), GetColor(136, 136, 255));
	DrawString(20, 400, TEXT("Esc�L�[�������ƃ��j���[��ʂɖ߂�܂��B"), GetColor(136, 136, 255));
}