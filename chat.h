#pragma once
#include <Windows.h>
#include <string>
#include "img32.h"
#include "image_blender.h"

using namespace std;

class CChat {
private:
	CImage32 mImgBord;
	CImage32 mImgCharactor[4];
	string mChatStr[7][4];
public:
	void showChat(CImage32* bg, int stage, int num) {
		CImageBlender::Blt(bg, &mImgBord, 250, 500);
	}

	CChat() {
		mImgBord.load("dat/img/chat/bord.bmp");
		mImgCharactor[0].load("dat/img/dummy.bmp");
		mImgCharactor[1].load("dat/img/dummy.bmp");
		mImgCharactor[2].load("dat/img/dummy.bmp");
		mImgCharactor[3].load("dat/img/dummy.bmp");
		mChatStr[0][0] = "�z���߁A�悭����X�̒n�����c�c\n�����񂼐N���҂ǂ��B";
		mChatStr[0][1] = "��l�c�炸���􂫂ɂ��Ă��I�I";
		mChatStr[0][2] = "";
		mChatStr[0][3] = "";
		mChatStr[1][0] = "�܂����A���ꂾ���̃~�T�C�����󂯂�\n�����҂�����Ƃ͂ȁB";
		mChatStr[1][1] = "�o�l�B�ɕ񍐂��邩�c�c\n���₻�̑O�ɋM�l���E���I�I";
		mChatStr[1][2] = "";
		mChatStr[1][3] = "";
		mChatStr[2][0] = "�M�l���B�ߋ�2��̐l�ޖŖS��@���~�����S��Ƃ����̂́B";
		mChatStr[2][1] = "�܂��ǂ��B\n�M�l���E���A���x�������ׂĂ̐���������₵�ɂ��Ă��B";
		mChatStr[2][2] = "�������������̐��A�n���B\n���̑S�Ă��I��X�͋����Ȃ��I�I";
		mChatStr[2][3] = "";
		mChatStr[3][0] = "";
		mChatStr[3][1] = "";
		mChatStr[3][2] = "";
		mChatStr[3][3] = "";
		mChatStr[4][0] = "";
		mChatStr[4][1] = "";
		mChatStr[4][2] = "";
		mChatStr[4][3] = "";
		mChatStr[5][0] = "��������50";
		mChatStr[5][1] = "��������51";
		mChatStr[5][2] = "��������52";
		mChatStr[5][3] = "��������53";
		mChatStr[6][0] = "��������60";
		mChatStr[6][1] = "�܂��I���ł͂Ȃ��B";
		mChatStr[6][2] = "";
		mChatStr[6][3] = "";
	}
};

