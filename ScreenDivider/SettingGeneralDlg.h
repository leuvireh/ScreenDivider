#pragma once


// CSettingGeneralDlg ��ȭ �����Դϴ�.

class CSettingGeneralDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CSettingGeneralDlg)

public:
	CSettingGeneralDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CSettingGeneralDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_SETTING_GENERAL_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};
