#if !defined(AFX_CDC_H__3E91D768_85D4_4C04_A7D7_028DD19D283E__INCLUDED_)
#define AFX_CDC_H__3E91D768_85D4_4C04_A7D7_028DD19D283E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// cdc.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// cdc dialog

class cdc : public CDialog
{
// Construction
public:
	cdc(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(cdc)
	enum { IDD = IDD_DIALOG_BG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(cdc)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(cdc)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CDC_H__3E91D768_85D4_4C04_A7D7_028DD19D283E__INCLUDED_)
