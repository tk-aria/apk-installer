//
// @file main.cpp
// @brief 簡単な説明
// @author 作成者
// @date 作成日
// @details 詳細な説明
//
#pragma once

// UNIX OS 
#ifdef __unix__|__linux__|__FreeBSD__|__NetBSD__ 

#include <Carbon/Carbon.h>
#include <unistd.h>

#define GetCurrentDirectory getcwd
#define ChangeDirectory chdir

#else _WIN32

#include <Windows.h>

#undef GetCurrentDirectory
#define GetCurrentDirectory(dir,size) GetCurrentDirectoryA(size,dir)
#define ChangeDirectory SetCurrentDirectoryA

#endif // OS Dependence

