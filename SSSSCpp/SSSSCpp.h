#ifndef SSSSCPP_H
#define SSSSCPP_H

#include "stdafx.h"
#include "PGF256.h"
#include "GF256.h"
#include <vector>
#include <stdlib.h>
#include <time.h>

#define UINT unsigned int

PGF256 generateRandomPolynomial(unsigned int degree, GF256elm secret);
std::vector<std::pair<UINT, UINT>> encodeByte(UINT byte, int n, int k);
UINT decodeByte(std::vector<std::pair<UINT, UINT>> keys);

#endif