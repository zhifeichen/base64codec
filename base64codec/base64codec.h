
// base64codec.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// Cbase64codecApp:
// �йش����ʵ�֣������ base64codec.cpp
//

class Cbase64codecApp : public CWinApp
{
public:
	Cbase64codecApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern Cbase64codecApp theApp;