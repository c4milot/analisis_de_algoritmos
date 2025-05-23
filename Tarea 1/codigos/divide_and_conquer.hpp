#ifndef DIVIDE_AND_CONQUER_HPP
#define DIVIDE_AND_CONQUER_HPP
#include <vector>
#include <utility>
#include <algorithm>
#include <cmath>
#include <limits>
#include "brute_force.hpp"

bool compX(const std::pair<int, int> &p1, const std::pair<int, int> &p2);
bool compY(const std::pair<int, int> &p1, const std::pair<int, int> &p2);
double minDist(std::vector<std::pair<int, int>> &dots, int left, int right);
double minDist_DQ(std::vector<std::pair<int, int>> &dots);
double minDistCentro(std::vector<std::pair<int, int>> &centro, double d);

#endif

