#pragma once
#include "afxwin.h"


// CFilterDlg 对话框

class CFilterDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CFilterDlg)

public:
	CFilterDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CFilterDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
    CButton m_tcp;
    CButton m_udp;
    CButton m_arp;
    CButton m_icmp;
    CButton m_rarp;
    CButton m_igmp;
    CString filtername;
    
    virtual BOOL OnInitDialog();
    afx_msg void OnBnClickedOk();
    CString GetFilterName() { return filtername; }

};
