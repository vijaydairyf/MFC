#if !defined(AFX_HORIZBOXPLOTSERIES_H__74BC7ED2_1398_4DE5_B76A_5CD4C2B4D192__INCLUDED_)
#define AFX_HORIZBOXPLOTSERIES_H__74BC7ED2_1398_4DE5_B76A_5CD4C2B4D192__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CPointer;
class CPen1;

/////////////////////////////////////////////////////////////////////////////
// CHorizBoxPlotSeries wrapper class

class CHorizBoxPlotSeries : public COleDispatchDriver
{
public:
	CHorizBoxPlotSeries() {}		// Calls COleDispatchDriver default constructor
	CHorizBoxPlotSeries(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CHorizBoxPlotSeries(const CHorizBoxPlotSeries& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CPointer GetPointer();
	BOOL GetDark3D();
	void SetDark3D(BOOL bNewValue);
	CPointer GetExtrOut();
	CPen1 GetMedianPen();
	CPointer GetMildOut();
	double GetPosition();
	void SetPosition(double newValue);
	double GetWhiskerLength();
	void SetWhiskerLength(double newValue);
	CPen1 GetWhiskerPen();
	CPointer GetBox();
	double MaxYValue();
	double MinYValue();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_HORIZBOXPLOTSERIES_H__74BC7ED2_1398_4DE5_B76A_5CD4C2B4D192__INCLUDED_)
