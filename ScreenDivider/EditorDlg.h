#pragma once


// CEditorDlg ��ȭ �����Դϴ�.

class CEditorDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CEditorDlg)

public:
	CEditorDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CEditorDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_EDITOR_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};