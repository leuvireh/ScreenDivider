#pragma once


// CAeroDlg dialog

class CAeroDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CAeroDlg)

public:
	CAeroDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CAeroDlg();

// Dialog Data
	enum { IDD = IDD_AERO_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
};