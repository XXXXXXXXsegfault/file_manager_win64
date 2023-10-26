struct wndclassex
{
	unsigned int cbSize;
	unsigned int style;
	void *lpfnWndProc;
	int cbClsExtra;
	int cbWndExtra;
	void *hInstance;
	void *hIcon;
	void *hCursor;
	void *hbrBackground;
	char *lpszMenuName;
	char *lpszClassName;
	void *hIconSm;
};
struct msg
{
	void *hwnd;
	unsigned int message;
	unsigned int wparam;
	unsigned int lparam;
	unsigned int time;
	unsigned long ptx;
	unsigned long pty;
	unsigned int lprivate;
	unsigned int pad;
};
struct paintstruct
{
	void *hdc;
	int erase;
	int rcpaint[4];
	int restore;
	int incupdate;
	char rsv[32];
	int pad;
};
struct _Point
{
	int x;
	int y;
};
struct _Rect
{
	int left;
	int top;
	int right;
	int bottom;
};
#define IDI_APPLICATION ((char *)0x7f00)
#define IDC_ARROW ((char *)0x7f00)
#define WS_EX_WINDOWEDGE 0x100
#define WS_EX_CLIENTEDGE 0x200
#define WS_VISIBLE 0x10000000
#define WS_SYSMENU 0x80000
#define WS_CAPTION 0xc00000
#define WS_POPUP 0x80000000
#define WS_CHILD 0x40000000
#define WS_THICKFRAME 0x40000
#define WM_DESTROY 2
#define WM_PAINT 15
#define WM_LBUTTONDOWN 513
#define WM_LBUTTONUP 514
#define WM_RBUTTONDOWN 516
#define WM_RBUTTONUP 517
#define WM_MOUSEMOVE 512
#define WM_ACTIVATE 6
#define WM_KEYDOWN 256
#define WM_KEYUP 257
#define WM_CHAR 258
#define WM_TIMER 275
#define WM_ERASEBKGND 20
#define WM_MOUSEWHEEL 522
#define VK_ESCAPE 27
#define VK_LEFT 37
#define VK_UP 38
#define VK_RIGHT 39
#define VK_DOWN 40
#define SRCCOPY 0xcc0020
#define INFINITE 0xffffffff
#define NULL ((void *)0)
#define LOWORD(x) ((long)(short)((x)&0xffff))
#define HIWORD(x) ((long)(short)((x)>>16&0xffff))
#define INVALID_HANDLE_VALUE ((void *)0xffffffffffffffff)
struct win32_find_data_a
{
	unsigned int attr;
	unsigned int ctime[2];
	unsigned int atime[2];
	unsigned int wtime[2];
	unsigned int size_hi;
	unsigned int size_lo;
	unsigned int rsv[2];
	char name[260];
	char rsv2[36];
};
