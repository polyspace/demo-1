
#if !defined(COVERITY_COMPAT_2dc32581caf853d96ea89aba084e725a)
#define COVERITY_COMPAT_2dc32581caf853d96ea89aba084e725a

/*
  Copyright (c) 2017 Synopsys, Inc. All rights reserved worldwide.
  The information contained in this file is the proprietary and confidential
  information of Synopsys, Inc. and its licensors, and is supplied subject to,
  and may be used only by Synopsys customers in accordance with the terms and
  conditions of a previously executed license agreement between Synopsys and
  that customer.
*/


/* DO NOT MODIFY THE CONTENTS OF THIS FILE */

#define _export

#if defined(_Wp64)
typedef __COVERITY_SIZE_TYPE__ size_t;
#endif

#if defined(_MSC_FULL_VER) && _MSC_FULL_VER >= 190023506
#pragma builtin begin
extern float __builtin_huge_valf();
extern float __builtin_nanf(const char*);
extern float __builtin_nansf(const char*);
extern double __builtin_huge_val();
extern double __builtin_nan(const char*);
extern double __builtin_nans(const char*);
#pragma builtin end
#endif

#if defined(_DEBUG) && defined (_CRTDBG_MAP_ALLOC)
#nodef malloc
#nodef calloc
#nodef realloc
#nodef free
#nodef _malloca
#nodef _strdup
#nodef _wcsdup
#nodef _mbsdup
#nodef _wtempnam
#nodef _fullpath
#nodef _wfullpath
#nodef _wgetcwd
#nodef _wgetdcwd
#endif

#nodef getchar

#endif /* COVERITY_COMPAT_2dc32581caf853d96ea89aba084e725a */
