#ifndef __STDAFX_H__
#define __STDAFX_H__

// Change these values to use different versions
#define WINVER              0x0604
#define _WIN32_IE           0x0400
#define _RICHEDIT_VER       0x0100

#ifdef WIN32_PLATFORM_PSPC
#include <aygshell.h>
#endif // WIN32_PLATFORM_PSPC

#include <atlbase.h>
#include <atlapp.h>

extern CAppModule _Module;

#include <atlcom.h>
#include <atlhost.h>
#include <atlwin.h>
#include <atlctl.h>

#include <atlcrack.h>
#include <atlframe.h>
#include <atlmisc.h>
#include <atldlgs.h>
#include <atlsplit.h>
#include <atlctrls.h>
#include <shellapi.h>
#include <atlctrlx.h>

#include <shlobj.h>
#include <shlguid.h>
#include <wincrypt.h>

#ifdef _EMBEDDED_MANIFEST
#if defined _M_IX86
  #pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_IA64
  #pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='ia64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif defined _M_X64
  #pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
  #pragma comment(linker, "/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif
#endif // _EMBEDDED_MANIFEST

#endif // __STDAFX_H__