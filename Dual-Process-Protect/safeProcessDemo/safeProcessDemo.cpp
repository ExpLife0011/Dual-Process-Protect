// safeProcessDemo.cpp : �������̨Ӧ�ó������ڵ㡣
//
/**************************************************************************************
safeProcessDemoĿ¼Ϊ������,TempProcessĿ¼Ϊ��ʱ����,ExeProtectĿ¼Ϊ�ػ�����,binĿ¼Ϊ�����exe
safeProcessDemo.exe������ͨ��TempProcess.exe����ExeProtect.exe
ProcessSet.iniΪ�����ļ� ��Protect=1 safeProcessDemo.exe��ExeProtect.exe������,ɱһ������һ��
��Protect=0 safeProcessDemo.exe����ɱ��,ɱ��safeProcessDemo.exe��ͬʱExeProtect.exeҲ�Զ�����
***************************************************************************************/

#include "stdafx.h"
#include "ProProcess.h"

#include <stdio.h>
#include <afx.h>
#include <afxwin.h>
#include <conio.h>
#include <afxdisp.h>
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	if (!AfxWinInit(::GetModuleHandle(NULL), NULL, ::GetCommandLine(), 0))
	{
		_tprintf(_T("����: MFC ��ʼ��ʧ��\n"));
		return 1;
	}
	if (!AfxOleInit())
	{
		return 1;
	}

	CProProcess::InitProProcess(_T("safeProcessDemo"));

	cout << "Enter 'q' to exit:" << endl;
	while ((_getch() != 'q') && (_getch() != 'Q'))
	{
	}
	return 0;
}

