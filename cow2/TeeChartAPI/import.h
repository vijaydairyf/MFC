#if !defined(AFX_IMPORT_H__E9ECC2E7_187E_4718_B074_3A5D91AAD510__INCLUDED_)
#define AFX_IMPORT_H__E9ECC2E7_187E_4718_B074_3A5D91AAD510__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CImport wrapper class

class CImport : public COleDispatchDriver
{
public:
	CImport() {}		// Calls COleDispatchDriver default constructor
	CImport(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CImport(const CImport& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	void LoadFromFile(LPCTSTR FileName);
	void LoadFromURL(LPCTSTR URL);
	void LoadFromStream(const VARIANT& AStream);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_IMPORT_H__E9ECC2E7_187E_4718_B074_3A5D91AAD510__INCLUDED_)
