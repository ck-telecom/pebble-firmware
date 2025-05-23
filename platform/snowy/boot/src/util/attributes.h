/*
 * Copyright 2024 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#if defined(__clang__)
#define GCC_ONLY(x)
#else
#define GCC_ONLY(x) x
#endif

// Function attributes
#define FORMAT_FUNC(TYPE, STR_IDX, FIRST) __attribute__((__format__(TYPE, STR_IDX, FIRST)))

#define FORMAT_PRINTF(STR_IDX, FIRST) FORMAT_FUNC(__printf__, STR_IDX, FIRST)

#define ALWAYS_INLINE __attribute__((__always_inline__)) inline
#define NOINLINE __attribute__((__noinline__))
#define NORETURN __attribute__((__noreturn__)) void
#define NAKED_FUNC __attribute__((__naked__))
#define OPTIMIZE_FUNC(LVL) __attribute__((__optimize__(LVL)))
#define CONST_FUNC __attribute__((__const__))
#define PURE_FUNC __attribute__((__pure__))

// Variable attributes
#define ATTR_CLEANUP(FUNC) __attribute__((__cleanup__(FUNC)))

// Structure attributes
#define PACKED __attribute__((__packed__))

// General attributes
#define USED __attribute__((__used__))
#define UNUSED __attribute__((__unused__))
#define WEAK __attribute__((__weak__))
#define ALIAS(sym) __attribute__((__weak__, __alias__(sym)))
#define SECTION(SEC) GCC_ONLY(__attribute__((__section__(SEC))))
#define EXTERNALLY_VISIBLE GCC_ONLY(__attribute__((__externally_visible__)))
