/*
						   o8888888o
						   88" . "88
						   (| -_- |)
							O\ = /O
						 ___/'---'\___
						 .' \\| |// '.
					   / \\||| : |||// \
					 / _||||| -:- |||||_ \
					   | | \\\ - /// | |
					 | |_| ''\---/'' |_| |
					  \ .-\__ '-' __/-. /
				   ___'. .' /--.--\ '. .'___
				."" '< '.___\_<|>_/___.' >'"".
			   | | : '- \'.:'\ _ /':.'/ -' : | |
				 \ \ '-. \_ __\ /__ _/ .-' / /
		 ******'-.____'-.___\_____/___.-'____.-'******
							'*---*'
							
		 ---------------------------------------------
				  佛祖保佑            永无BUG


   佛曰：
		 写字楼里写字间，写字间里程序员；
		 程序人员写程序，又拿程序换酒钱。
		 酒醒只在网上坐，酒醉还来网下眠；
		 酒醉酒醒日复日，网上网下年复年。
		 但愿老死电脑间，不愿鞠躬老板前；
		 奔驰宝马贵者趣，公交单车屌丝缘。
		 若将贵者比屌丝，一在平地一在天。
		 若将程序比车马，我何碌碌彼何闲。
		 别人笑我忒疯癫，我笑自己命太贱；
		 不见满街漂亮妹，哪个归得程序员？

		写字楼里写字间，写字间里程序员；程序人员写程序，又拿程序换酒钱。
		酒醒只在网上坐，酒醉还来网下眠；酒醉酒醒日复日，网上网下年复年。
		宁愿老死程序间，只要老板多发钱；小车大房不去想，撰个2k好过年。
		若要见识新世面，公务员比程序员；一个在天一在地，而且还比我们闲。
		别人看我穿白领，我看别人穿名牌；天生我才写程序，臀大近视肩周炎。

		年复一年春光度,度得他人做老板;老板扣我薄酒钱,没有酒钱怎过年;.
		春光逝去皱纹起,作起程序也委靡;来到水源把水灌,打死不做程序员.
		别人笑我忒疯癫，我笑他人命太贱；状元三百六十行，偏偏来做程序员！！
		但愿老死电脑间，不愿鞠躬老板前；奔驰宝马贵者趣，公交自行程序员。
		若将程员比妓女，一在平地一在天；若将程员比车马，他得驱驰我无闲。
		别人笑我忒疯癫，我笑自己命太贱；不见满街漂亮妹，哪个归得程序员。
		不想只挣打工钱，那个老板愿发钱；小车大房咱要想，任我享用多悠闲。
		比尔能搞个微软，我咋不能捞点钱；一个在天一在地，定有一日乾坤翻。
		我在天来他在地，纵横天下山水间；傲视武林豪杰墓，一樽还垒风月山。
		电脑面前眼发直，眼镜下面泪茫茫；做梦发财好几亿，从此不用手指忙。
		哪知梦醒手空空，老板看到把我训；待到老时眼发花，走路不知哪是家。
		各位在此穷抱怨，可知小弟更可怜；俺学编程几年半，至今没赚一分钱。
		听说三十是末日，二十三岁在眼前；发誓立志傍微软，渺渺前程对谁言？
		小农村里小民房，小民房里小民工；小民工人写程序，又拿代码讨赏钱。
		钱空只在代码中，钱醉仍在代码间；有钱无钱日复日，码上码下年复年。
		但愿老死代码间，不愿鞠躬奥迪前，奥迪奔驰贵者趣，程序代码贫者缘。
		若将贫贱比贫者，一在平地一在天；若将贫贱比车马，他得驱驰我得闲。
		别人笑我忒疯癫，我笑他人看不穿；不见盖茨两手间，财权富贵世人鉴。

		-- https://bbs.csdn.net/topics/240010413
*/
#ifndef __cplusplus
#error "tool.cpp is a C++ source file"
#endif
#include "tool.h"
using namespace std;

string& str_replace(string& strBase, const string strSrc, const string strDes){
	string::size_type pos = 0;
	string::size_type srcLen = strSrc.size();
	string::size_type desLen = strDes.size();
	pos = strBase.find(strSrc, pos);
	while ((pos != string::npos))
	{
		strBase.replace(pos, srcLen, strDes);
		pos = strBase.find(strSrc, (pos + desLen));
	}
	return strBase;
}
wstring& str_replace(std::wstring& strBase,
	const std::wstring strSrc,const std::wstring strDes){
	wstring::size_type pos = 0;
	wstring::size_type srcLen = strSrc.size();
	wstring::size_type desLen = strDes.size();
	pos = strBase.find(strSrc, pos);
	while ((pos != wstring::npos))
	{
		strBase.replace(pos, srcLen, strDes);
		pos = strBase.find(strSrc, (pos + desLen));
	}
	return strBase;
}
std::vector<std::string>& str_split(
	const std::string& src, 
	const std::string separator, 
	std::vector<std::string>& dest) //字符串分割到数组
{

	//参数1：要分割的字符串；参数2：作为分隔符的字符；参数3：存放分割后的字符串的vector向量

	string str = src;
	string substring;
	string::size_type start = 0, index;
	dest.clear();
	index = str.find_first_of(separator, start);
	do
	{
		if (index != string::npos)
		{
			substring = str.substr(start, index - start);
			dest.push_back(substring);
			start = index + separator.size();
			index = str.find(separator, start);
			if (start == string::npos) break;
		}
	} while (index != string::npos);

	//the last part
	substring = str.substr(start);
	dest.push_back(substring);
	return dest;
}
std::vector<std::wstring>& str_split(
	const std::wstring& src, 
	const std::wstring separator, 
	std::vector<std::wstring>& dest)
{
	wstring str = src;
	wstring substring;
	wstring::size_type start = 0, index;
	dest.clear();
	index = str.find_first_of(separator, start);
	do
	{
		if (index != wstring::npos)
		{
			substring = str.substr(start, index - start);
			dest.push_back(substring);
			start = index + separator.size();
			index = str.find(separator, start);
			if (start == wstring::npos) break;
		}
	} while (index != wstring::npos);

	//the last part
	substring = str.substr(start);
	dest.push_back(substring);
	return dest;
}
string ws2s(const wstring wstr)
{
	string result;
	size_t len = WideCharToMultiByte(CP_ACP, 0, wstr.c_str(),
		(int)(wstr.size()), NULL, 0, NULL, NULL);
	if (len <= 0)return result;
	char* buffer = new char[len + 1];
	if (buffer == NULL)return result;
	WideCharToMultiByte(CP_ACP, 0, wstr.c_str(), 
		(int)(wstr.size()), buffer, (int)len, NULL, NULL);
	buffer[len] = '\0';
	result.append(buffer);
	delete[] buffer;
	return result;
}
wstring s2ws(const string str)
{
	wstring result;
	size_t len = MultiByteToWideChar(CP_ACP, 0, str.c_str(), 
		(int)(str.size()), NULL, 0);
	if (len < 0)return result;
	wchar_t* buffer = new wchar_t[len + 1];
	if (buffer == NULL)return result;
	MultiByteToWideChar(CP_ACP, 0, str.c_str(), (int)(str.size()), 
		buffer, (int)len);
	buffer[len] = '\0';
	result.append(buffer);
	delete[] buffer;
	return result;
}

bool IsRunAsAdmin() //判断是否管理员模式
{
	BOOL bElevated = false;
	HANDLE hToken = NULL;
	// Get current process token
	if (!OpenProcessToken(GetCurrentProcess(), TOKEN_QUERY, &hToken))
		return false;
	TOKEN_ELEVATION tokenEle;
	DWORD dwRetLen = 0;
	// Retrieve token elevation information
	if (GetTokenInformation(hToken, TokenElevation,
		&tokenEle, sizeof(tokenEle), &dwRetLen))
	{
		if (dwRetLen == sizeof(tokenEle))
		{
			bElevated = tokenEle.TokenIsElevated;
		}
	}
	CloseHandle(hToken);
	return bElevated;
}

string GetProgramDir()
{
	char exeFullPath[MAX_PATH]; // Full path
	string strPath = "";

	GetModuleFileNameA(NULL, exeFullPath, MAX_PATH);
	return (string)exeFullPath;    // Get full path of the file
}
string GetProgramPath()
{
	char exeFullPath[MAX_PATH]; // Full path
	string strPath = "";

	GetModuleFileNameA(NULL, exeFullPath, MAX_PATH);
	string s= (string)exeFullPath;    // Get full path of the file
	s = s.substr(0, s.find_last_of("\\")+1);
	return s;
}

ProgramInfo GetProgramInfo(){
	ProgramInfo inf;
	inf.dir = ::GetProgramDir();
	inf.path = inf.dir;
	inf.path = inf.path.substr(0, inf.path.find_last_of("\\") + 1);
	inf.name = inf.dir;
	inf.name.erase(0,inf.name.find_last_of("\\")+1);
	return inf;
}

#ifdef _WIN32
bool FreeResFile(DWORD dwResName, string lpResType, string lpFilePathName)
{
	HMODULE hInstance = ::GetModuleHandle(NULL);//得到自身实例句柄  
	HRSRC hResID = ::FindResourceA(
		hInstance,
		MAKEINTRESOURCEA(dwResName), 
		lpResType.c_str());//查找资源  
	if (!hResID) return false;
	HGLOBAL hRes = ::LoadResource(hInstance, hResID);//加载资源  
	if (!hRes) return false;
	LPVOID pRes = ::LockResource(hRes);//锁定资源  

	if (pRes == NULL)//锁定失败  
	{
		return false;
	}
	DWORD dwResSize = ::SizeofResource(hInstance, hResID);//得到待释放文件大小  
	HANDLE hResFile = CreateFileA(
		lpFilePathName.c_str(), 
		GENERIC_WRITE,
		0, NULL, 
		CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);//创建文件  

	if (INVALID_HANDLE_VALUE == hResFile)
	{
		return false;
	}

	DWORD dwWritten = 0;//写入文件的大小     
	WriteFile(hResFile, pRes, dwResSize, &dwWritten, NULL);//写入文件  
	CloseHandle(hResFile);//关闭文件句柄  

	return (dwResSize == dwWritten);//若写入大小等于文件大小返回成功否则失败  
}
#endif

void __stdcall ReStart(int _Code) {
	Process.StartOnly(GetCommandLine());
	exit(_Code);
}

bool CheckSelfProcessExists()
{
	int i = 0;
	PROCESSENTRY32 pe32;
	pe32.dwSize = sizeof(pe32);
	string SelfProcessName = GetProgramDir();
	SelfProcessName = SelfProcessName.erase(0, 
		SelfProcessName.find_last_of("\\") + 1);
#ifdef UNICODE
	wstring PROCName_s = s2ws(SelfProcessName);
	LPCTSTR PROCName = PROCName_s.c_str();
#else
	LPCTSTR PROCName = SelfProcessName.c_str();
#endif
	HANDLE hProcessSnap = ::CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	if (hProcessSnap == INVALID_HANDLE_VALUE)
	{
		i += 0;
	}
	BOOL bMore = ::Process32First(hProcessSnap, &pe32);
	while (bMore)
	{
		//printf(" 进程名称：%s \n", pe32.szExeFile);
		if (STRCMP(PROCName, pe32.szExeFile) == 0)
		{
			//printf("进程运行中");
			i += 1;
		}
		bMore = ::Process32Next(hProcessSnap, &pe32);
	}
	if (i > 1) {           //大于1，排除自身
		return true;
	}
	else {
		return false;
	}
}

size_t CheckProcessCount(TSTRING pname){
	size_t i = 0;
	PROCESSENTRY32 pe32;
	pe32.dwSize = sizeof(pe32);
	LPCTSTR PROCName = pname.c_str();
	HANDLE hProcessSnap = ::CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	if (hProcessSnap == INVALID_HANDLE_VALUE)
	{
		return 0;
	}
	BOOL bMore = ::Process32First(hProcessSnap, &pe32);
	while (bMore)
	{
		if (STRCMP(PROCName, pe32.szExeFile) == 0)
		{
			i ++;
		}
		bMore = ::Process32Next(hProcessSnap, &pe32);
	}
	return i;
}



HANDLE GetProcessHandle(int nID){
	return OpenProcess(PROCESS_ALL_ACCESS, false, nID);
}
HANDLE GetProcessHandle(LPCTSTR lpName){
	HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	if (INVALID_HANDLE_VALUE == hSnapshot)
	{
		return NULL;
	}
	PROCESSENTRY32 pe = { sizeof(pe) };
	BOOL fOk;
	for (fOk = Process32First(hSnapshot, &pe); fOk; fOk = Process32Next(hSnapshot, &pe))
	{
		if (!_tcsicmp(pe.szExeFile, lpName)) // 不区分大小写
		{
			CloseHandle(hSnapshot);
			return GetProcessHandle(pe.th32ProcessID);
		}
	}
	return NULL;
}

DWORD GetProcessIdW(wstring lpName){
	HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	if (INVALID_HANDLE_VALUE == hSnapshot)
	{
		return NULL;
	}
	PROCESSENTRY32 pe = { sizeof(pe) };
	BOOL fOk;
	for (fOk = Process32First(hSnapshot, &pe); fOk; fOk = Process32Next(hSnapshot, &pe))
	{
#ifdef UNICODE
		if (!_wcsicmp(pe.szExeFile, lpName.c_str())) // 不区分大小写
#else
		if (!_stricmp(pe.szExeFile, ws2c(lpName))) // 不区分大小写
#endif
		{
			CloseHandle(hSnapshot);
			return (pe.th32ProcessID);
		}
	}
	return NULL;
}
vector<DWORD>* GetProcessIdFromAll(LPCTSTR lpName) {
	vector<DWORD>* v = new vector<DWORD>;
	HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	if (INVALID_HANDLE_VALUE == hSnapshot)
	{
		return v;
	}
	PROCESSENTRY32 pe = { sizeof(pe) };
	BOOL fOk;
	for (fOk = Process32First(hSnapshot, &pe); fOk; fOk = Process32Next(hSnapshot, &pe))
	{
		if (!_tcsicmp(pe.szExeFile, lpName)) // 不区分大小写
		{
			v->push_back(pe.th32ProcessID);
		}
	}
	CloseHandle(hSnapshot);
	return v;
}

bool EnableDebugPrivilege() {

	HANDLE hToken;
	LUID sedebugnameValue;
	TOKEN_PRIVILEGES tkp;
	if (!OpenProcessToken(
		GetCurrentProcess(), 
		TOKEN_ADJUST_PRIVILEGES |TOKEN_QUERY, &hToken)) {
		return false;
	}
	if (!LookupPrivilegeValue(NULL, SE_DEBUG_NAME, &sedebugnameValue)) {
		__try {
			if (hToken) {
				CloseHandle(hToken);
			}
		}
		__except (EXCEPTION_EXECUTE_HANDLER) {};
		return false;
	}
	tkp.PrivilegeCount = 1;
	tkp.Privileges[0].Luid = sedebugnameValue;
	tkp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;
	if (!AdjustTokenPrivileges(hToken, false, &tkp, sizeof(tkp), NULL, NULL)) {
		__try {
			if (hToken) {
				CloseHandle(hToken);
			}
		}
		__except (EXCEPTION_EXECUTE_HANDLER) {};
		return false;
	}
	return true;
}

//void StartExecute(const TSTRING& paras) {
//	//初始化shellexe信息
//	SHELLEXECUTEINFO ExeInfo;
//	ZeroMemory(&ExeInfo, sizeof(SHELLEXECUTEINFO));
//	ExeInfo.cbSize = sizeof(SHELLEXECUTEINFO);
//	ExeInfo.lpFile = _C_AUTOTEXT("explorer.exe");
//	ExeInfo.lpParameters = (paras).c_str();
//	ExeInfo.fMask = SEE_MASK_NOCLOSEPROCESS;
//	ExeInfo.nShow = SW_HIDE;
//	ExeInfo.hwnd = NULL;
//	ExeInfo.lpVerb = NULL;
//	ExeInfo.lpDirectory = NULL;
//	ExeInfo.hInstApp = NULL;
//	//执行命令
//	ShellExecuteEx(&ExeInfo);
//	//等待进程结束
//	WaitForSingleObject(ExeInfo.hProcess, INFINITE);
//}

template<typename str, typename fs>
wstring _TempFile<str,fs>::GetRdmFileNameW() {
	wstring rdmfn = _T("");
	BASSTRING nlist[] = _T(
		codetostr(0123456789abcdef)
		codetostr(ghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ)
		"+-_=@");
	srand((UINT)time(0)); 
#ifdef UNICODE
	auto len = lstrlenW(nlist) - 1;
#else
	auto len = strlen(nlist) - 1;
#endif
	for (int i = 0; i < (int)16; ++i) {
		rdmfn += nlist[(time(0) % rand()) % len];
	}
	return rdmfn;
}
template<typename str, typename fs>
string _TempFile<str,fs>::GetRdmFileNameA(){
	string rdmfn = ("");
	char nlist[] = (
		codetostr(0123456789abcdef)
		codetostr(ghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ)
		"+-_=@");
	srand((UINT)time(0)); auto len = strlen(nlist) - 1;
	for (int i = 0; i < (int)16; ++i) {
		rdmfn += nlist[(time(0) % rand()) % len];
	}
	return rdmfn;
}

template<typename str, typename fs>
_TempFile<str,fs>::_TempFile(){
	NoRemove = false;
}

template<typename str, typename fs>
_TempFile<str,fs>::_TempFile(str fileName){
	NoRemove = false;
	this->open(fileName);
}

template<typename str, typename fs>
_TempFile<str,fs>::~_TempFile(){
	fs::close();
}

template<typename str, typename fs>
void _TempFile<str,fs>::open(str fileName){
	this->FilePathName = fileName;
	fs::open(fileName, ios::in | ios::out | ios::trunc | ios::binary);
}

template<typename str, typename fs>
str _TempFile<str,fs>::GetFilePathName(){
	return this->FilePathName;
}

int ExecBatch(TSTRING Batch){
	vector<TSTRING> str;
	str.push_back(Batch);
	return ExecBatch(str);
}

int ExecBatch(vector<TSTRING>& Batch){
	TempFile fp;
#ifdef UNICODE
	fp.open(fp.GetRdmFileNameW() + L"bat");
#else
	fp.open(fp.GetRdmFileNameA() + "bat");
#endif

	fp << _T("@echo off") << endl;

	for (auto i : Batch) {
		fp << i << endl;
	}
	fp << _T("del /f /s /q ") << fp.GetFilePathName() << endl;

	fp.close();

	TSTRING sFiPn = fp.GetFilePathName();

	int nRes = 0;

#if (!(defined(__NO_UNICODE__)))&&defined(UNICODE)
	nRes = system((""+ws2s(sFiPn)).c_str());
#else
	nRes = system((""+sFiPn).c_str());
#endif

	//::SetCurrentDirectory(nWorkPath.c_str());

	return nRes;
}


#if 0
StringEx& StringEx::operator=(StringEx& argv){
	*this = (StringEx)argv; return *this;
}
StringEx& StringEx::operator=(wstring& argv){
	*this = (StringEx)argv; return *this;
}
StringEx& StringEx::operator=(const char* argv){
	*this = (StringEx)argv; return *this;
}

StringEx StringEx::operator+(string& argv){
	string str = (string)(*this);
	return str + argv;
}

StringEx StringEx::operator+(StringEx& argv){
	string str = (string)(*this);
	return str + (string)argv;
}

StringEx StringEx::operator+(wstring& argv){
	string str = (string)(*this);
	return str + ws2s(argv);
}
#endif


#if 0
void CTrayIcon::Create(TSTRING IconText,HWND hwnd){
	m_nid.cbSize = (DWORD)sizeof(NOTIFYICONDATA);
	m_nid.hWnd = hwnd;
	m_nid.uID = 128;
	m_nid.uFlags = NIF_ICON | NIF_MESSAGE | NIF_TIP;
	m_nid.uCallbackMessage = WM_USER+1;

	//自定义的消息名称 WM_SHOWTASK 头函数中定义为WM_USER+1
	m_nid.hIcon = LoadIcon(AfxGetInstanceHandle(), MAKEINTRESOURCE(128));
	strcpyt(m_nid.szTip, IconText.c_str());//鼠标放在上面显示的内容
	Shell_NotifyIcon(NIM_ADD, &m_nid);//在托盘区添加图标
}
#endif

ServiceManager_ ServiceManager;

bool ServiceManager_::InitSch() {
	// Get a handle to the SCM database.
	schSCManager = OpenSCManager(
		NULL,                    // local computer
		NULL,                    // ServicesActive database
		SC_MANAGER_ALL_ACCESS);  // full access rights
	if (NULL == schSCManager)
	{
		return false;
	}
	return true;
}

bool ServiceManager_::FreeSch() {
	return CloseServiceHandle(schSCManager);
}

unsigned ServiceManager_::Start(string ServiceName) {
	if (!InitSch()) return ERROR_OPEN_SCMANAGER;
	SC_HANDLE schService;
	// Get a handle to the service.
	schService = OpenServiceA(
		schSCManager,         // SCM database
		ServiceName.c_str(),            // name of service        
		SERVICE_START 
	);  
	if (schService == NULL) {
		FreeSch();
		return ERROR_OPEN_SERVICE;
	}
	unsigned ret = OK;
	if (!::StartServiceA(schService, 0, NULL)) {
		ret = ERROR_START_SERVICE;
	}
	::CloseServiceHandle(schService);
	FreeSch();
	return ret;
}

unsigned ServiceManager_::ReStart(string ServiceName) {
	Stop (ServiceName);
	Start(ServiceName);
	return OK;
}

unsigned ServiceManager_::Stop(string ServiceName) {
	if (!InitSch()) return ERROR_OPEN_SCMANAGER;
	SC_HANDLE schService;
	// Get a handle to the service.
	schService = OpenServiceA(
		schSCManager,         // SCM database
		ServiceName.c_str(),            // name of service        
		SERVICE_STOP
	);  
	if (schService == NULL) {
		if (!FreeSch()) return ERROR_CLOSE_SCMANAGER;
		return ERROR_OPEN_SERVICE;
	}
	unsigned ret = OK;
	SERVICE_STATUS stat;
	if (!::ControlService(schService, SERVICE_CONTROL_STOP, &stat)) {
		ret = ERROR_STOP_SERVICE;
	}
	::WaitForSingleObject(schService, MAXDWORD);
	::CloseServiceHandle(schService);
	if (!FreeSch()) return ERROR_CLOSE_SCMANAGER;
	return ret;
}

unsigned ServiceManager_::Query(LPCTSTR ServiceName) {
	TCHAR* szSvcName = const_cast<TCHAR*>(ServiceName);

	SERVICE_STATUS_PROCESS ssStatus;
	//DWORD dwOldCheckPoint;

	//DWORD dwStartTickCount;
	//DWORD dwWaitTime;
	DWORD dwBytesNeeded;

	if (!InitSch()) return ERROR_OPEN_SCMANAGER;
	SC_HANDLE schService;
	// Get a handle to the service.
	schService = OpenService(
		schSCManager,         // SCM database
		szSvcName,            // name of service        
		SERVICE_QUERY_STATUS |
		SERVICE_ENUMERATE_DEPENDENTS
	);  // full access
	if (schService == NULL)
	{
		if (!FreeSch()) return ERROR_CLOSE_SCMANAGER;
		return ERROR_OPEN_SERVICE;
	}

	// Check the status in case the service is not stopped.
	if (!QueryServiceStatusEx(
		schService,                     // handle to service
		SC_STATUS_PROCESS_INFO,         // information level
		(LPBYTE)&ssStatus,             // address of structure
		sizeof(SERVICE_STATUS_PROCESS), // size of structure
		&dwBytesNeeded))              
	{
		CloseServiceHandle(schService);
		if (!FreeSch()) return ERROR_CLOSE_SCMANAGER;
		return ERROR_QUERY_SERVICESTATUS;
	}
	else {
		unsigned return_val = ERROR_UNKNOWN;
		switch (ssStatus.dwCurrentState)
		{
		case SERVICE_STOPPED:
			return_val = STATUS_STOP;
		case SERVICE_STOP_PENDING:
			return_val = STATUS_STOPPING;
		case SERVICE_PAUSED:
			return_val = STATUS_PAUSE;
		case SERVICE_PAUSE_PENDING:
			return_val = STATUS_PAUSE_PENDING;
		case SERVICE_CONTINUE_PENDING:
			return_val = STATUS_CONTINUE_PENDING;
		case SERVICE_RUNNING:
			return_val = STATUS_START;
		case SERVICE_START_PENDING:
			return_val = STATUS_STARTING;
		default:
			return_val = ERROR_UNKNOWN;
		}
		CloseServiceHandle(schService);
		if (!FreeSch()) return ERROR_CLOSE_SCMANAGER;
		return return_val;
	}
	return ERROR_UNKNOWN;
}

unsigned ServiceManager_::Pause(string ServiceName) {
	if (!InitSch()) return ERROR_OPEN_SCMANAGER;
	SC_HANDLE schService;
	// Get a handle to the service.
	schService = OpenServiceA(
		schSCManager,         // SCM database
		ServiceName.c_str(),            // name of service        
		SERVICE_PAUSE_CONTINUE 
	);  
	if (schService == NULL) {
		if (!FreeSch()) return ERROR_CLOSE_SCMANAGER;
		return ERROR_OPEN_SERVICE;
	}
	unsigned ret = OK;
	SERVICE_STATUS sss;
	if (!::ControlService(schService, SERVICE_CONTROL_PAUSE, &sss)) {
		ret = ERROR_PAUSE_SERVICE;
	}
	::CloseServiceHandle(schService);
	if (!FreeSch()) return ERROR_CLOSE_SCMANAGER;
	return ret;
}

unsigned ServiceManager_::Continue(string ServiceName) {
	if (!InitSch()) return ERROR_OPEN_SCMANAGER;
	SC_HANDLE schService;
	// Get a handle to the service.
	schService = OpenServiceA(
		schSCManager,         // SCM database
		ServiceName.c_str(),            // name of service        
		SERVICE_PAUSE_CONTINUE 
	);  
	if (schService == NULL) {
		if (!FreeSch()) return ERROR_CLOSE_SCMANAGER;
		return ERROR_OPEN_SERVICE;
	}
	unsigned ret = OK;
	if (!::StartServiceA(schService, SERVICE_CONTROL_CONTINUE, NULL)) {
		ret = ERROR_CONTINUE_SERVICE;
	}
	::CloseServiceHandle(schService);
	if (!FreeSch()) return ERROR_CLOSE_SCMANAGER;
	return ret;
}

#pragma warning(push)
#pragma warning(disable: 26812)
unsigned ServiceManager_::New(string name, string bin, STARTUP_TYPE stype,
	string display, string des, DWORD type) {
#pragma warning(pop)
	if (stype == Undefined) return ERROR_UNDEFINED_SCOPE;
	if (!InitSch()) return ERROR_OPEN_SCMANAGER;

	if (display.empty()) display = name;
	SC_HANDLE svc = CreateServiceA(schSCManager, name.c_str(), display.c_str(), SERVICE_ALL_ACCESS,
		type, stype, SERVICE_ERROR_NORMAL, bin.c_str(), NULL, NULL, NULL, NULL, NULL);
	if (!svc) {
		if (!FreeSch()) return ERROR_CLOSE_SCMANAGER;
		return ERROR_NEW_SERVICE;
	}

	if (!FreeSch()) return ERROR_CLOSE_SCMANAGER;
	return OK;
}

unsigned ServiceManager_::Remove(string name) {
	if (!InitSch()) return ERROR_OPEN_SCMANAGER;

	SC_HANDLE schService;
	// Get a handle to the service.
	schService = OpenServiceA(
		schSCManager,         // SCM database
		name.c_str(),            // name of service        
		SERVICE_ALL_ACCESS 
	);  
	if (schService == NULL) {
		if (!FreeSch()) return ERROR_CLOSE_SCMANAGER;
		return ERROR_OPEN_SERVICE;
	}
	if (!DeleteService(schService)) {
		if (!FreeSch()) return ERROR_CLOSE_SCMANAGER;
		return ERROR_DEL_SERVICE;
	}

	if (!FreeSch()) return ERROR_CLOSE_SCMANAGER;
	return OK;
}

DWORD Process_t::GetParentProcessId(DWORD dwProcessId)
{
	typedef struct
	{
		DWORD ExitStatus;
		DWORD PebBaseAddress;
		DWORD AffinityMask;
		DWORD BasePriority;
		ULONG UniqueProcessId;
		ULONG InheritedFromUniqueProcessId;
	}   PROCESS_BASIC_INFORMATION;
	typedef LONG(__stdcall* PROCNTQSIP)(HANDLE, UINT, PVOID, ULONG, PULONG);

	LONG                        status;
	DWORD                       dwParentPID = (DWORD)-1;
	HANDLE                      hProcess;
	PROCESS_BASIC_INFORMATION   pbi;

	HMODULE ntdll = ::LoadLibrary(_T("ntdll.dll"));
	assert(ntdll);
	if(!ntdll) return (DWORD)-1;

	PROCNTQSIP NtQueryInformationProcess = 
		(PROCNTQSIP)GetProcAddress(ntdll,"NtQueryInformationProcess");
	if (NULL == NtQueryInformationProcess)
	{
		return (DWORD)-1;
	}
	// Get process handle
	hProcess = OpenProcess(PROCESS_QUERY_INFORMATION, FALSE, dwProcessId);
	if (!hProcess)
	{
		return (DWORD)-1;
	}
	// Retrieve information
	status = NtQueryInformationProcess(hProcess,
		0,
		(PVOID)&pbi,
		sizeof(0),
		NULL
	);
	// Copy parent Id on success
	if (!status){
		dwParentPID = pbi.InheritedFromUniqueProcessId;
	}
	CloseHandle(hProcess);
	FreeLibrary(ntdll);
	return dwParentPID;
}

void Process_t::checkFlushTime() {
	if (_time64(0) - LastFlush >= 1024) flush();
}

bool Process_t::flush(void) {
	LastFlush = _time64(0);
	HANDLE hsnap = ::CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	if (INVALID_HANDLE_VALUE == hsnap) return false;
	for(auto i : this->prs){
		::CloseHandle(i.handle);
	}
	this->prs.clear();
	PROCESSENTRY32 pe;
	pe.dwSize = sizeof(PROCESSENTRY32);
	int b = ::Process32First(hsnap, &pe);
	while (b) {
		prs.push_back(ProcessInfo(
			pe.szExeFile,
			pe.th32ProcessID,
			pe.th32ParentProcessID,
			::OpenProcess(PROCESS_ALL_ACCESS, false, pe.th32ProcessID)));
		b = ::Process32Next(hsnap, &pe);
	}
	return ::CloseHandle(hsnap);
}

void Process_t::find(vector<Process_t::ProcessInfo>& dest) {
	checkFlushTime();
	dest.clear();
	dest = this->prs;
}

void Process_t::find(TSTRING pname, vector<Process_t::ProcessInfo>& dest) {
	checkFlushTime();
	dest.clear();
	for (auto i : prs) {
#ifdef _DEBUG
		bool cmpres = !ua_lstrcmpi(pname.c_str(), i.m_name.c_str());
		if (cmpres) dest.push_back(i);
#else
		if (!ua_lstrcmpi(pname.c_str(), i.m_name.c_str())) dest.push_back(i);
#endif
	}
}

Process_t::ProcessInfo Process_t::find(DWORD pid) {
	checkFlushTime();
	for (auto i : prs) {
		if (pid == i.m_id) {
			return i; 
		}
	}
	return ProcessInfo();
}

Process_t::ProcessInfo Process_t::GetCurrentProcess(void) {
	return Process_t::ProcessInfo(
		to__str(GetProgramInfo().name),
		GetCurrentProcessId(),
		GetParentProcessId(GetCurrentProcessId()),
		::OpenProcess(PROCESS_ALL_ACCESS, FALSE, GetCurrentProcessId())
	);
}

void Process_t::findWindows(ProcessInfo process, vector<HWND>& dest) {
	HWND hWnd = GetTopWindow(NULL); if (!hWnd) return; do {
		DWORD dwProcessId = 0;
		GetWindowThreadProcessId(hWnd, &dwProcessId);
		if (dwProcessId == process) dest.push_back(hWnd);
	} while (hWnd = GetWindow(hWnd, GW_HWNDNEXT));
}

bool Process_t::kill(const Process_t::ProcessInfo& exe, UINT exitCode) {
	if (exe.m_id != current_process_id) suspend(exe);
	_NtTerminateProcess NtTerminateProcess = reinterpret_cast<_NtTerminateProcess>
		(GetProcAddress(ntdll, "NtTerminateProcess"));
	if(!NtTerminateProcess) return false;
	if (0 == NtTerminateProcess(exe, exitCode)) return true;
	//// wmic kill
	//string wmic_build = "wmic process where processid=\"" + to_string(exe.m_id) + "\" delete";
	//string wmic_out = GetProcessStdOutputA(wmic_build);
	//if (wmic_out.find("uccessfully") != string::npos || wmic_out.find("成功") != string::npos) {
	//	return true;
	//}
	// try to crash it
	crash(exe);
	// cannot kill
	return false;
}

bool Process_t::killall(TSTRING name) {
	vector<ProcessInfo> pis;
	find(name, pis);
	if(pis.empty()) return false;
	bool _ = true;
	for (auto i : pis) {
		_&= kill(i);
	}
	return _;
}

#pragma warning(push)
#pragma warning(disable: 6335)
PROCESS_INFORMATION Process_t::Start(const TSTRING& paras, STARTUPINFO& si) {
	PROCESS_INFORMATION pi;
	ZeroMemory(&pi, sizeof(pi));
	BOOL r = ::CreateProcess(
		NULL, const_cast<TCHAR*>(paras.c_str()),
		NULL, NULL, false, 0, NULL, NULL,
		&si, &pi);
	if (!r) return PROCESS_INFORMATION{ 0,0,0,0 };
	flush();
	return pi;
}
bool Process_t::StartOnly(const TSTRING& paras, STARTUPINFO& si) {
	PROCESS_INFORMATION pi;
	ZeroMemory(&pi, sizeof(pi));
	BOOL r = ::CreateProcess(
		NULL, const_cast<TCHAR*>(paras.c_str()),  
		NULL, NULL, false, 0, NULL, NULL,
		&si, &pi);
	if (!r) return false;
	flush();
	CloseProcessHandle(pi);
	return true;
}
#pragma warning(pop)

size_t Process_t::count() {
	size_t i = 0;
	PROCESSENTRY32 pe32;
	pe32.dwSize = sizeof(pe32);
	HANDLE hProcessSnap = ::CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	if (hProcessSnap == INVALID_HANDLE_VALUE){
		return (size_t)-1;
	}
	BOOL bMore = ::Process32First(hProcessSnap, &pe32);
	while (bMore){
		i++;
		bMore = ::Process32Next(hProcessSnap, &pe32);
	}
	return i;
}

size_t Process_t::count(const TSTRING& paras) {
	size_t i = 0;
	PROCESSENTRY32 pe32;
	pe32.dwSize = sizeof(pe32);
	LPCTSTR PROCName = paras.c_str();
	HANDLE hProcessSnap = ::CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	if (hProcessSnap == INVALID_HANDLE_VALUE)
	{
		i += 0;
	}
	BOOL bMore = ::Process32First(hProcessSnap, &pe32);
	while (bMore)
	{
		if (STRCMP(PROCName, pe32.szExeFile) == 0)
		{
			i++;
		}
		bMore = ::Process32Next(hProcessSnap, &pe32);
	}
	return i;
}

DWORD Process_t::suspend(HANDLE hProcess){
	if (!ZwSuspendProcess) {
		if (!InitSuspend()) return (DWORD)-1;
	}
	return ZwSuspendProcess(hProcess);
}

DWORD Process_t::resume(HANDLE hProcess){
	if (!ZwResumeProcess) {
		if (!InitSuspend()) return (DWORD)-1;
	}
	return ZwResumeProcess(hProcess);
}

bool Process_t::CloseAllWindows(ProcessInfo pi, bool wait, DWORD waittime) {
	vector<HWND> win; this->findWindows(pi, win);
	if (win.empty()) { SetLastError(233); return false; }
	for (auto i : win) {
		::SendMessageW(i, WM_CLOSE, 0, 0);
		::DestroyWindow(i);
	}
	if (!wait) return true;
	return !::WaitForSingleObject(pi, waittime);
}

bool Process_t::InitSuspend(){
	ZwSuspendProcess = (SUSPENDPROCESS)GetProcAddress(ntdll, "ZwSuspendProcess");
	ZwResumeProcess = (RESUMEPROCESS)GetProcAddress(ntdll, "ZwResumeProcess");
	if (!(ZwSuspendProcess&&ZwResumeProcess)) {
		return 0;
	}
	return 1;
}

NTSTATUS Process_t::NtSetInformationProcess(
	HANDLE ProcessHandle, 
	PROCESS_INFORMATION_CLASS ProcessInformationClass,
	PVOID ProcessInformation,
	ULONG ProcessInformationLength){
	if (!_NtSetInformationProcess) {
		_NtSetInformationProcess = (__NtSetInformationProcess)GetProcAddress(
			ntdll, "NtSetInformationProcess");
		if (!_NtSetInformationProcess) return -1;
	}
	return _NtSetInformationProcess(ProcessHandle, ProcessInformationClass,
		ProcessInformation, ProcessInformationLength);
}

__kernel_entry NTSTATUS Process_t::NtQueryInformationProcess(
	HANDLE ProcessHandle,
	PROCESSINFOCLASS ProcessInformationClass,
	PVOID ProcessInformation, 
	ULONG ProcessInformationLength, 
	PULONG ReturnLength){
	if (!_NtQueryInformationProcess) {
		_NtQueryInformationProcess = (__NtQueryInformationProcess)GetProcAddress(
			ntdll, "NtQueryInformationProcess");
		if (!_NtQueryInformationProcess) return -1;
	}
	return _NtQueryInformationProcess(ProcessHandle, ProcessInformationClass,
		ProcessInformation, ProcessInformationLength, ReturnLength);
}

#pragma warning(push)
#pragma warning(disable: 6387)
bool Process_t::crash(HANDLE hProcess, bool wait) {
	if (!hProcess) return false;
	HANDLE h = codecat(CreateRem, oteThread)(hProcess, 0, 0, 0, 0, 0, 0);
	if(!h) return false;
	if (wait) WaitForSingleObject(h, 0xffffffff);
	CloseHandle(h);
	return true;
}
#pragma warning(pop)

Process_t Process;

bool WindowShowOnTaskBar(HWND hWnd, bool bShow) {
	HRESULT hr;
	ITaskbarList* pTaskbarList;
	hr = CoCreateInstance(CLSID_TaskbarList, NULL, CLSCTX_INPROC_SERVER,
		IID_ITaskbarList, (void**)&pTaskbarList);

	if (SUCCEEDED(hr))
	{
		pTaskbarList->HrInit();
		if (bShow)
			pTaskbarList->AddTab(hWnd);
		else
			pTaskbarList->DeleteTab(hWnd);

		pTaskbarList->Release();
		return true;
	}

	return false;
}

errno_t CopyText(const wstring& text, UINT uFormat) {
	if (!::OpenClipboard(NULL)) {
		return 1;
	}
	if (!::EmptyClipboard()) {
		if (!::CloseClipboard()) {
			return 2;
		}
		return 3;
	}
	size_t tSize = (text.length() + 1) * sizeof(wchar_t);
	HGLOBAL hMem = ::GlobalAlloc(GHND, tSize);
	if (!hMem) {
		if (!::CloseClipboard()) {
			return 4;
		}
		return 5;
	}
	wchar_t* strText = (wchar_t*)calloc(tSize, 1);
	//wcscpy_s(strText, tSize, text.c_str());
	if (strText == 0) return 15;
	memcpy(strText, text.c_str(), tSize);

	// 把数据拷贝到全局内存中   
	// 锁住内存区    
	LPWSTR lpStr = (LPWSTR)GlobalLock(hMem);

	wchar_t* pMem = reinterpret_cast<wchar_t*>(lpStr);
	if (!pMem) {
		if (!::CloseClipboard()) {
			return 6;
		}
		if ((!::GlobalUnlock(hMem)) && (GetLastError() != NO_ERROR)) {
			return 7;
		}
		if (!::GlobalFree(hMem)) {
			return 8;
		}
		return 9;
	}
	// 内存复制   
	::memcpy(lpStr, strText, tSize);
	// 字符结束符: GMEM_ZEROINIT
	if ((!::GlobalUnlock(hMem)) && (GetLastError() != NO_ERROR)) {
		return 10;
	}
	HANDLE hResult = ::SetClipboardData(uFormat, hMem);
	if (!::CloseClipboard()) {
		return 11;
	}
	::free(strText);
	if ((!hResult) || hResult == INVALID_HANDLE_VALUE) {
		return 14;
	}
	return 0;
}

string CopyText(errno_t err) {
	static map<errno_t, string> kv;
	kv[0] = "No any error";
	kv[1] = "OpenClipboard(NULL)";
	kv[2] = "CloseClipboard()";
	kv[3] = "EmptyClipboard()";
	kv[4] = "CloseClipboard()";
	kv[5] = "GlobalAlloc(GHND, text.length() + 1)";
	kv[6] = "CloseClipboard()";
	kv[7] = "GlobalUnlock(hMem)";
	kv[8] = "GlobalFree(hMem)";
	kv[9] = "GlobalLock(hMem)";
	kv[10] = "GlobalUnlock(hMem)";
	kv[11] = "CloseClipboard()";
	kv[14] = "SetClipboardData(uFormat, hMem)";
	kv[15] = "calloc(tSize, 1)";
	try {
		return kv.at(err);
	}
	catch (std::out_of_range&) {
		return "Unknown";
	}
	catch (std::exception&) {
		return "std::exception";
	}
	return "Bad luck!The program was tampered with.";
}

std::string GenerateUUID()
{
	std::string guid("");
#ifdef _WIN32
	UUID uuid;
	if (RPC_S_OK != UuidCreate(&uuid))
	{
		return guid;
	}
	char tmp[37] = { 0 };
	sprintf_s(tmp, "%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x",
		uuid.Data1, uuid.Data2, uuid.Data3,
		uuid.Data4[0], uuid.Data4[1],
		uuid.Data4[2], uuid.Data4[3],
		uuid.Data4[4], uuid.Data4[5],
		uuid.Data4[6], uuid.Data4[7]);
	guid.assign(tmp);
#else
	uuid_t uuid;
	char str[50] = {};
	uuid_generate(uuid);
	uuid_unparse(uuid, str);
	guid.assign(str);
#endif
	return guid;
}

std::string GenerateUUIDWithoutDelim()
{
	std::string str = GenerateUUID();
	std::string uuid;
	for (auto& i : str)
	{
		if ('-' != i)
		{
			uuid += i;
		}
	}
	return uuid;
}

void PrintTextEachCharW(wstring text, DWORD timeout) {
	for (wchar_t& x : text) {
		_putwch(x);
		if (timeout) Sleep(timeout);
	}
}

void PrintTextEachCharA( string text, DWORD timeout) {
	for (char& x : text) {
		_putch(x);
		if (timeout) Sleep(timeout);
	}
}

string GetCurrentUserSecurityId() {
	constexpr int MAX_NAME = 260;
	char userName[MAX_NAME] = "";
	char sid[MAX_NAME] = "";
	stringstream ss;
	DWORD nameSize = sizeof(userName);
	GetUserNameA((LPSTR)userName, &nameSize);


	char userSID[MAX_NAME] = "";
	char userDomain[MAX_NAME] = "";
	DWORD sidSize = sizeof(userSID);
	DWORD domainSize = sizeof(userDomain);


	SID_NAME_USE snu;
	LookupAccountNameA(NULL,
		(LPSTR)userName,
		(PSID)userSID,
		&sidSize,
		(LPSTR)userDomain,
		&domainSize,
		&snu);


	PSID_IDENTIFIER_AUTHORITY psia = GetSidIdentifierAuthority(userSID);
	//sidSize = sprintf(sid, "S-%lu-", SID_REVISION);
	//sidSize += sprintf(sid + strlen(sid), "%-lu", psia->Value[5]);
	ss << "S-" << SID_REVISION << "-" << int(psia->Value[5]);

	int i = 0;
	int subAuthorities = *GetSidSubAuthorityCount(userSID);


	for (i = 0; i < subAuthorities; i++)
	{
		ss << "-" << (*GetSidSubAuthority(userSID, i));
	}
	
	//printf("current sid is %s\n", sid);
	return ss.str();;
}

LPWSTR ErrorCodeToStringW(DWORD ErrorCode)
{
	HLOCAL LocalAddress = NULL;
	FormatMessageW(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_IGNORE_INSERTS | 
		FORMAT_MESSAGE_FROM_SYSTEM, NULL, ErrorCode, 0, (PWSTR)&LocalAddress, 0, NULL);
	((LPWSTR)LocalAddress)[wcslen((LPWSTR)LocalAddress) - 1] = 0;
	return (LPWSTR)LocalAddress;
}

LPSTR ErrorCodeToStringA(DWORD ErrorCode)
{
	HLOCAL LocalAddress = NULL;
	FormatMessageA(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_IGNORE_INSERTS | 
		FORMAT_MESSAGE_FROM_SYSTEM, NULL, ErrorCode, 0, (PSTR)&LocalAddress, 0, NULL);
	((LPSTR)LocalAddress)[strlen((LPSTR)LocalAddress) - 1] = 0;
	return (LPSTR)LocalAddress;
}

void* GetBufMemory(size_t& maxsize)
{
	void* ptr = NULL;
	while (maxsize > 1) {
		ptr = malloc(maxsize);
		if (ptr != NULL) break;
		maxsize /= 2;
	}
	if (ptr) memset(ptr, 0, maxsize);
	return ptr;
}

wstring GetProcessStdOutputW(wstring cmd_line) {
	wstring r;

	SECURITY_ATTRIBUTES sa;                //保存设定管道的安全属性
	HANDLE hRead, hWrite;

	sa.nLength = sizeof(SECURITY_ATTRIBUTES);
	sa.lpSecurityDescriptor = NULL;        //安全描述符
	sa.bInheritHandle = TRUE;              //安全描述的对象能否被新创建的进程继承

	if (!CreatePipe(&hRead, &hWrite, &sa, 0)) {
		return r;
	}
	STARTUPINFOW si;             //用于指定新进程的主窗口特性的一个结构
	PROCESS_INFORMATION pi;     //构返回有关新进程及其主线程的信息
	si.cb = sizeof(STARTUPINFO);//包含STARTUPINFO结构中的字节数.
	GetStartupInfoW(&si);        //取得进程在启动时被指定的 STARTUPINFO 结构

	//hWrite为匿名管理写入句柄
	si.hStdError = hWrite;     //错误输出写入匿名管道
	si.hStdOutput = hWrite;    //标准输出写入匿名管道
	//si.hStdInput             //标准输入,这里没用到
	si.wShowWindow = SW_HIDE;  //隐藏窗口

	si.dwFlags = STARTF_USESHOWWINDOW | //使用wShowWindow 成员(用于隐藏窗口)
		STARTF_USESTDHANDLES;  //使用hStdInput 、hStdOutput和hStdError成员
#pragma warning(push)
#pragma warning(disable: 6335)
	if (!CreateProcessW(NULL, (LPWSTR)(cmd_line.c_str())
		, NULL, NULL, TRUE, CREATE_SUSPENDED, NULL, NULL, &si, &pi)) {
		return r;
	}
	CloseHandle(hWrite);     //关闭匿名管道写入
	Process.resume(pi.hProcess);
	Process.CloseProcessHandle(pi);
#pragma warning(pop)

	size_t buffer_size = 4096;
	char* buffer = (char*)GetBufMemory(buffer_size); //用于保存输出信息
	if (buffer == nullptr) {
		return r;
	}
	memset(buffer, 0, buffer_size);
	DWORD bytesRead = 0;
	while (TRUE)
	{
		if (!ReadFile(hRead, buffer, (DWORD)(buffer_size - 1), &bytesRead, NULL)) break;
		r += s2ws(buffer);
	}
	free(buffer);

	::CloseHandle(hRead);

	return r;
}

ULONGLONG MyGetFileSizeW(wstring filename) {
	GET_FILEEX_INFO_LEVELS fInfoLevelId = GetFileExInfoStandard;
	WIN32_FILE_ATTRIBUTE_DATA FileInformation;
	// 通过winapi获取文件属性
	BOOL bGet = GetFileAttributesExW(filename.c_str(), fInfoLevelId, &FileInformation);
	if (bGet) {
		_fsize_t nFileSizeLow = FileInformation.nFileSizeLow;
		_fsize_t nFileSizeHigh = FileInformation.nFileSizeHigh;
		ULARGE_INTEGER szFile;
		szFile.HighPart = nFileSizeHigh; // 超大文件才需要
		szFile.LowPart = nFileSizeLow;
		return szFile.QuadPart;
	}
	return 0;
}

signed char IsFileOrDirectory(string path) {
	if (!file_exists(path)) return 0;
	WIN32_FIND_DATAA FindFileData;
	FindFirstFileA(path.c_str(), &FindFileData);
	if (FindFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
		return -1;
	} else {
		return 1;
	}
}

signed char IsFileOrDirectory(wstring path){
	if (!file_exists(path)) return 0;
	WIN32_FIND_DATAW FindFileData;
	FindFirstFileW(path.c_str(), &FindFileData);
	if (FindFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
		return -1;
	} else {
		return 1;
	}
}

bool LoadLibAsProcessW(HANDLE hProcess, wstring LibPath) {
	HMODULE ntdll = ::GetModuleHandleW(L"ntdll.dll");
	if (!ntdll) return false;
	LPTHREAD_START_ROUTINE LoadLibraryW = 
		(LPTHREAD_START_ROUTINE)::GetProcAddress(ntdll, "LoadLibraryW");
	if (!LoadLibraryW) return false;
	HANDLE hThread = ::CreateRemoteThread(hProcess, NULL, 0, LoadLibraryW,
		static_cast<void*>(const_cast<wchar_t*>(LibPath.c_str())), 0, NULL);
	if(!hThread) return false;
	::WaitForSingleObject(hThread, MAXDWORD);
	::CloseHandle(hThread);
	return true;
}

bool MyStartAsServiceW(wstring svc_name, LPSERVICE_MAIN_FUNCTIONW svc_main) {
	SERVICE_TABLE_ENTRYW ServiceTable[2];

	ServiceTable[0].lpServiceName = const_cast<LPWSTR>(svc_name.c_str());
	ServiceTable[0].lpServiceProc = (LPSERVICE_MAIN_FUNCTIONW)svc_main;

	ServiceTable[1].lpServiceName = NULL;
	ServiceTable[1].lpServiceProc = NULL;
	// 启动服务的控制分派机线程
	StartServiceCtrlDispatcherW(ServiceTable);
	return true;
}

bool MyStartAsServiceA(string svc_name, LPSERVICE_MAIN_FUNCTIONA svc_main) {
	SERVICE_TABLE_ENTRYA ServiceTable[2];

	ServiceTable[0].lpServiceName = const_cast<LPSTR>(svc_name.c_str());
	ServiceTable[0].lpServiceProc = (LPSERVICE_MAIN_FUNCTIONA)svc_main;

	ServiceTable[1].lpServiceName = NULL;
	ServiceTable[1].lpServiceProc = NULL;
	// 启动服务的控制分派机线程
	StartServiceCtrlDispatcherA(ServiceTable);
	return true;
}

bool MyWriteApplicationEvent(LPCWSTR string, DWORD id, WORD type, void* lpRawData,
	DWORD dwDataSize, WORD wCategory, PSID lpUserSid, HANDLE hEventLog) {
	bool $ = false;
	hEventLog ? 0 : $ = hEventLog = RegisterEventSourceW(NULL, L"Application");
	if (!hEventLog) return false;
	LPCWSTR strs[1] = { string };
	bool _ = ::ReportEventW(hEventLog, type, wCategory, id, lpUserSid, 1, dwDataSize, strs, lpRawData);
	if($) ::DeregisterEventSource(hEventLog);
	return _;
}

void FullScreenWindow(HWND hWindow, PFullScreenWindowRestoreInfo winfo) {
	if (winfo) {
		winfo->style = GetWindowLong(hWindow, GWL_STYLE); //存储上次的窗口风格，退出时使用
		GetWindowRect(hWindow, &winfo->wrect);//存储上次的窗口大小，退出时使用
	}

	LONG l_WinStyle = GetWindowLong(hWindow, GWL_STYLE);   /* 获取窗口信息 */
	SetWindowLong(hWindow, GWL_STYLE, 
		(l_WinStyle | WS_POPUP | WS_MAXIMIZE) & ~WS_CAPTION & ~WS_THICKFRAME & ~WS_BORDER);

	SetWindowPos(hWindow, 0, 0, 0, GetSystemMetrics(SM_CXSCREEN), GetSystemMetrics(SM_CYSCREEN),
		SWP_NOACTIVATE | SWP_NOZORDER);
}

void UnFullScreenWindow(HWND hWindow, PFullScreenWindowRestoreInfo winfo) {
	SetWindowLong(hWindow, GWL_STYLE, winfo->style);
	SetWindowPos(hWindow, NULL, winfo->wrect.left, winfo->wrect.top,
		winfo->wrect.right - winfo->wrect.left, winfo->wrect.bottom - winfo->wrect.top,
		SWP_NOZORDER);
	ShowWindow(hWindow, SW_SHOW);
	UpdateWindow(hWindow);
}

void CenterWindow(HWND hWnd) {
	//取得窗口尺寸
	RECT rect; GetWindowRect(hWnd, &rect);
	//重新设置rect里的值
	rect.left = (GetSystemMetrics(SM_CXSCREEN) - rect.right ) / 2;
	rect.top  = (GetSystemMetrics(SM_CYSCREEN) - rect.bottom) / 2;
	//移动窗口到指定的位置
	SetWindowPos(hWnd, HWND_TOP, rect.left, rect.top,
		rect.right, rect.bottom, 0);
}

