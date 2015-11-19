#if !defined(AFX_CURSORTOOL_H__5D5FEE2F_3F2D_4B85_A23A_F4026992AABE__INCLUDED_)
#define AFX_CURSORTOOL_H__5D5FEE2F_3F2D_4B85_A23A_F4026992AABE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CPen1;

/////////////////////////////////////////////////////////////////////////////
// CCursorTool wrapper class

class CCursorTool : public COleDispatchDriver
{
public:
	CCursorTool() {}		// Calls COleDispatchDriver default constructor
	CCursorTool(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CCursorTool(const CCursorTool& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetSeries();
	void SetSeries(const VARIANT& newValue);
	BOOL GetFollowMouse();
	void SetFollowMouse(BOOL bNewValue);
	CPen1 GetPen();
	BOOL GetSnap();
	void SetSnap(BOOL bNewValue);
	long GetStyle();
	void SetStyle(long nNewValue);
	double GetXVal();
	void SetXVal(double newValue);
	double GetYVal();
	void SetYVal(double newValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CURSORTOOL_H__5D5FEE2F_3F2D_4B85_A23A_F4026992AABE__INCLUDED_)
