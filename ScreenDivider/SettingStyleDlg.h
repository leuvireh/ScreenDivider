#pragma once


// CSettingStyleDlg ��ȭ �����Դϴ�.

class CSettingStyleDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CSettingStyleDlg)

public:
	CSettingStyleDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CSettingStyleDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_SETTING_STYLE_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};
