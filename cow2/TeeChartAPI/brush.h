#if !defined(AFX_BRUSH_H__56A5D650_7E0A_4362_86F5_11DD11C81379__INCLUDED_)
#define AFX_BRUSH_H__56A5D650_7E0A_4362_86F5_11DD11C81379__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CBrush1 wrapper class

class CBrush1 : public COleDispatchDriver
{
public:
	CBrush1() {}		// Calls COleDispatchDriver default constructor
	CBrush1(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CBrush1(const CBrush1& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	unsigned long GetColor();
	void SetColor(unsigned long newValue);
	long GetStyle();
	void SetStyle(long nNewValue);
	void LoadImage(LPCTSTR FileName);
	void AssignImage(long ImageHandle);
	void ClearImage();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BRUSH_H__56A5D650_7E0A_4362_86F5_11DD11C81379__INCLUDED_)
