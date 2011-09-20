/*################################################################################
##
##   R package rgarch by Alexios Ghalanos Copyright (C) 2009, 2010, 2011
##   This file is part of the R package rgarch.
##
##   The R package rgarch is free software: you can redistribute it and/or modify
##   it under the terms of the GNU General Public License as published by
##   the Free Software Foundation, either version 3 of the License, or
##   (at your option) any later version.
##
##   The R package rgarch is distributed in the hope that it will be useful,
##   but WITHOUT ANY WARRANTY; without even the implied warranty of
##   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
##   GNU General Public License for more details.
##
#################################################################################*/
#ifndef _garchsim_H
#define _garchsim_H
#include <R.h>
#include <Rmath.h>
#include <math.h>
#include <RcppArmadillo.h>
RcppExport SEXP marmaxsim(SEXP , SEXP , SEXP , SEXP , SEXP , SEXP , SEXP );
RcppExport SEXP msgarchsim(SEXP , SEXP , SEXP , SEXP , SEXP , SEXP , SEXP , SEXP , SEXP );
RcppExport SEXP mgjrgarchsim(SEXP , SEXP , SEXP , SEXP , SEXP , SEXP , SEXP , SEXP , SEXP , SEXP , SEXP );
RcppExport SEXP maparchsim(SEXP , SEXP , SEXP , SEXP , SEXP , SEXP , SEXP , SEXP );
RcppExport SEXP mfgarchsim(SEXP , SEXP , SEXP , SEXP , SEXP , SEXP , SEXP , SEXP , SEXP );
RcppExport SEXP megarchsim(SEXP , SEXP , SEXP , SEXP , SEXP , SEXP , SEXP, SEXP , SEXP );
#endif