#pragma once


// CFinderDlg ��ȭ �����Դϴ�.

class CFinderDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CFinderDlg)

public:
	CFinderDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CFinderDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_FINDER_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};
