// stdafx.h : include file for standard system include files,
//      or project specific include files that are used frequently,
//      but are changed infrequently

#if !defined(AFX_STDAFX_H__5E2121E4_0300_11D4_8D3B_444553540000__INCLUDED_)
#define AFX_STDAFX_H__5E2121E4_0300_11D4_8D3B_444553540000__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define STRICT
#define WINVER          0x0501
#define _WIN32_WINNT    0x0501
#define _WIN32_IE       0x0501

//#define WINVER _WINNT_WIN32_WIN7 // Minimum targeted Windows version is Windows 7


#define _ATL_APARTMENT_THREADED

#include <atlbase.h>
//You may derive a class from CComModule and use it if you want to override
//something, but do not change the name of _Module
extern CComModule _Module;
#include <atlcom.h>
#include <atlconv.h>

#include <shlobj.h>
#include <comdef.h>

#include <VersionHelpers.h>


//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__5E2121E4_0300_11D4_8D3B_444553540000__INCLUDED)