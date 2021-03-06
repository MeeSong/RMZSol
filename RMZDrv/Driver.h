#pragma once

#define NDIS_SUPPORT_NDIS6 1

#include <ntddk.h>
#include <wdf.h>
#include <ntstrsafe.h>

#pragma warning(push)
#pragma warning(disable:4201)       // unnamed struct/union
#include <fwpsk.h>
#pragma warning(pop)

#include <fwpmk.h>

#define INITGUID
#include <guiddef.h>

#include "..\RMZCommon\common.h"

extern HANDLE InjectionHandle;
extern UINT32 CalloutStreamId;
extern NDIS_HANDLE NBLPoolHandle;
extern LONG AppStarted;