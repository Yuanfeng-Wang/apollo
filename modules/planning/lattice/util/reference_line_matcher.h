/******************************************************************************
 * Copyright 2017 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

/**
 * @file
 **/

#ifndef MODULES_PLANNING_LATTIC_UTIL_REFERENCE_LINE_MATCHER_H_
#define MODULES_PLANNING_LATTIC_UTIL_REFERENCE_LINE_MATCHER_H_

#include <utility>
#include <vector>

#include "modules/common/proto/pnc_point.pb.h"

namespace apollo {
namespace planning {

class ReferenceLineMatcher {
 public:
  ReferenceLineMatcher() = delete;

  static common::PathPoint MatchToReferenceLine(
      const std::vector<common::PathPoint>& reference_line, const double x,
      const double y);

  static std::pair<double, double> GetReferenceLineCoordinate(
      const std::vector<common::PathPoint>& reference_line, const double x,
      const double y);

  static common::PathPoint MatchToReferenceLine(
      const std::vector<common::PathPoint>& reference_line, const double s);

 private:
  static common::PathPoint FindProjectionPoint(const common::PathPoint& p0,
                                               const common::PathPoint& p1,
                                               const double x, const double y);
};

}  // namespace planning
}  // namespace apollo

#endif  // MODULES_PLANNING_LATTIC_UTIL_REFERENCE_LINE_MATCHER_H_
