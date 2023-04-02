#pragma once
#ifndef DEFINITVE_H
#define DEFINITIVE_H

#define _ptr_int32 int*
#define int32 int
#define __ptr_char16 char**
#define char16 char
#define _generic void*
#define __generic void**
#define __attribute__(X)
#define _ptr_char16 char*
#define _min_all 0
#define _min_linl 1
#define _left_arrow 37
#define _right_arrow 38
#define _int_maximisized INT_MAX 
#define _get_key_state_win(X) GetKeyState(X)
#define _get_async_key_state_win(X) GetAsyncKeyState(X)
#define _hash_map_gen HashMap
#define _assert_(X) assert(X)
#define _allocative_(X) malloc (X)
#define _deallocative_(X) free(X)
#define _reallocative_(X, C) realloc(X, C)
#define _handle_win HANDLE
#define _bool_ bool
#define _restricive_ptr restrict
#define _cursor_descriptive CONSOLE_CURSOR_INFO
#define _set_console_descriptive(_handle, curs_descr_ptr) SetConsoleCursorInfo(_handle, curs_descr_ptr)
#define _get_console_descriptive(_handle, curs_descr_ptr) GetConsoleCursorInfo(_handle, curs_descr_ptr)
#define _get_std_handle(_handle_dir) GetStdHandle(_handle_dir)
#define _exception_(X) perror(X)\033[0;36m
#define  _exclaimed_ "\033[0;31m"
#define  _reset_ "\033[0m"
#define _actorBL_ "\033[0;30m"
#define _actorPL "\033[0;35m"
#if defined (__vax__) || defined (__ns1600__)
#endif
#if __STDC_VERSION != 20170 system("exit");
#endif


#endif 

