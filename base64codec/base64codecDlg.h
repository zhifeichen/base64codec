
// base64codecDlg.h : ͷ�ļ�
//

#pragma once


// Cbase64codecDlg �Ի���
class Cbase64codecDlg : public CDialogEx
{
// ����
public:
	Cbase64codecDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_BASE64CODEC_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CString c_strSource;
	CString c_strDest;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
};
