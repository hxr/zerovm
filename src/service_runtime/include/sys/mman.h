/*
 * Copyright 2008 The Native Client Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can
 * be found in the LICENSE file.
 */

/*
 * NaCl Service Runtime.  IMC API.
 */

#ifndef NATIVE_CLIENT_SRC_TRUSTED_SERVICE_RUNTIME_INCLUDE_SYS_MMAN_H_
#define NATIVE_CLIENT_SRC_TRUSTED_SERVICE_RUNTIME_INCLUDE_SYS_MMAN_H_

#include "src/service_runtime/include/bits/mman.h"

#ifdef __cplusplus
extern "C" {
#endif

/** Description of mmap. More details... */
extern void *mmap(void *start, size_t length, int prot, int flags,
                  int desc, off_t offset);

/** Description of munmap. More details... */
extern int munmap(void *start, size_t length);

#ifdef __cplusplus
}
#endif

#endif
