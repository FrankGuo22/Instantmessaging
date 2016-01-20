// cdc.cpp : implementation file
//

#include "stdafx.h"
#include "instantmessaging.h"
#include "cdc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// cdc dialog


cdc::cdc(CWnd* pParent /*=NULL*/)
	: CDialog(cdc::IDD, pParent)
{
	//{{AFX_DATA_INIT(cdc)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void cdc::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(cdc)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(cdc, CDialog)
	//{{AFX_MSG_MAP(cdc)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// cdc message handlers
