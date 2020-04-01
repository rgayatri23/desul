/* 
Copyright (c) 2019, Lawrence Livermore National Security, LLC
and DESUL project contributors. See the COPYRIGHT file for details.
Source: https://github.com/desul/desul

SPDX-License-Identifier: (BSD-3-Clause)
*/

#ifndef DESUL_ATOMICS_COMPARE_EXCHANGE_HPP_
#define DESUL_ATOMICS_COMPARE_EXCHANGE_HPP_

#include "Macros.hpp"

#ifdef DESUL_HAVE_GCC_ATOMICS
#include "Compare_Exchange_GCC.hpp"
#endif
#ifdef DESUL_HAVE_MSVC_ATOMICS
#include "Compare_Exchange_MSVC.hpp"
#endif
#ifdef DESUL_HAVE_SERIAL_ATOMICS
#include "Compare_Exchange_SERIAL.hpp"
#endif
#ifdef DESUL_HAVE_CUDA_ATOMICS
#include "Compare_Exchange_CUDA.hpp"
#endif
#endif
