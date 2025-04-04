/* Configuration for math tests: rounding mode support.  Generic version.
   Copyright (C) 2013-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#ifndef _MATH_TESTS_ROUNDING_H
#define _MATH_TESTS_ROUNDING_H 1

/* Indicate whether to run tests involving a given rounding mode for a
   given floating-point type, given that fesetround succeeds for that
   mode.  All are run if fesetround succeeds unless overridden.  */
#define ROUNDING_TESTS_float(MODE)	1
#define ROUNDING_TESTS_double(MODE)	1
#define ROUNDING_TESTS_long_double(MODE)	1
#define ROUNDING_TESTS_float128(MODE)	1

#endif /* math-tests-rounding.h.  */
