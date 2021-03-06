/*
 * Copyright (c) 2011 The Native Client Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef NATIVE_CLIENT_SRC_INCLUDE_NACL_COMPILER_ANNOTATIONS_H_
#define NATIVE_CLIENT_SRC_INCLUDE_NACL_COMPILER_ANNOTATIONS_H_

/* gcc only */
#define INLINE __inline__
#define DLLEXPORT __attribute__ ((visibility("default")))
#define ATTRIBUTE_FORMAT_PRINTF(m, n) __attribute__((format(printf, m, n)))
#define UNREFERENCED_PARAMETER(P) do { (void) P; } while (0)
#define NORETURN __attribute__((noreturn))
#define _cdecl /* empty */
#define THREAD __thread
#define WINAPI
#define NACL_WUR __attribute__((__warn_unused_result__))

#endif
