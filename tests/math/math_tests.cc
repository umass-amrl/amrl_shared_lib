// Copyright 2019 kvedder@seas.upenn.edu
// School of Engineering and Applied Sciences,
// University of Pennsylvania
//
//
// This software is free: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License Version 3,
// as published by the Free Software Foundation.
//
// This software is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// Version 3 in the file COPYING that came with this distribution.
// If not, see <http://www.gnu.org/licenses/>.
// ========================================================================

#include <gtest/gtest.h>

#include "math/geometry.h"

TEST(AngleDiffFloat, AngleNegPiAnglePi) {
  const float angle0 = 0.0f;
  EXPECT_FLOAT_EQ(angle0,
                  math_util::AngleDiff<float>(-M_PI, M_PI));
}

TEST(AngleDiffFloat, Angle0Angle0) {
  const float angle0 = 0.0f;
  EXPECT_FLOAT_EQ(angle0,
                  math_util::AngleDiff(angle0, angle0));
}

TEST(AngleDiffFloat, Angle0Angle90) {
  const float angle0 = 0.0f;
  const float angle90 = 0.5 * M_PI;
  EXPECT_FLOAT_EQ(-angle90,
                  math_util::AngleDiff(angle0, angle90));
}

TEST(AngleDiffFloat, Angle0Angle270) {
  const float angle0 = 0.0f;
  const float angle90 = 0.5 * M_PI;
  const float angle270 = 1.5 * M_PI;
  EXPECT_FLOAT_EQ(angle90,
                  math_util::AngleDiff(angle0, angle270));
}

TEST(AngleDiffFloat, Angle0Angle181) {
  const float angle0 = 0.0f;
  const float angle179 = (179.0 / 180.0) * M_PI;
  const float angle181 = (181.0 / 180.0) * M_PI;
  EXPECT_FLOAT_EQ(angle179,
                  math_util::AngleDiff(angle0, angle181));
}

TEST(AngleDiffFloat, Angle179Angle181) {
  const float angle2 = (2.0 / 180.0) * M_PI;
  const float angle179 = (179.0 / 180.0) * M_PI;
  const float angle181 = (181.0 / 180.0) * M_PI;
  EXPECT_NEAR(-angle2, math_util::AngleDiff(angle179, angle181), 0.0001f);
}

TEST(AngleDiffFloat, Angle181Angle179) {
  const float angle2 = (2.0 / 180.0) * M_PI;
  const float angle179 = (179.0 / 180.0) * M_PI;
  const float angle181 = (181.0 / 180.0) * M_PI;
  EXPECT_NEAR(angle2, math_util::AngleDiff(angle181, angle179), 0.0001f);
}

TEST(AngleDiffFloat, Angle179Angle541) {
  const float angle2 = (2.0 / 180.0) * M_PI;
  const float angle179 = (179.0 / 180.0) * M_PI;
  const float angle541 = (541.0 / 180.0) * M_PI;
  EXPECT_NEAR(-angle2, math_util::AngleDiff(angle179, angle541), 0.0001f);
}

TEST(AngleDistFloat, AngleNegPiAnglePi) {
  const float angle0 = 0.0f;
  EXPECT_FLOAT_EQ(angle0,
                  math_util::AngleDist<float>(-M_PI, M_PI));
}

TEST(AngleDistFloat, Angle0Angle0) {
  const float angle0 = 0.0f;
  EXPECT_FLOAT_EQ(angle0,
                  math_util::AngleDist(angle0, angle0));
}

TEST(AngleDistFloat, Angle0Angle90) {
  const float angle0 = 0.0f;
  const float angle90 = 0.5 * M_PI;
  EXPECT_FLOAT_EQ(angle90,
                  math_util::AngleDist(angle0, angle90));
}

TEST(AngleDistFloat, Angle0Angle270) {
  const float angle0 = 0.0f;
  const float angle90 = 0.5 * M_PI;
  const float angle270 = 1.5 * M_PI;
  EXPECT_FLOAT_EQ(angle90,
                  math_util::AngleDist(angle0, angle270));
}

TEST(AngleDistFloat, Angle0Angle181) {
  const float angle0 = 0.0f;
  const float angle179 = (179.0 / 180.0) * M_PI;
  const float angle181 = (181.0 / 180.0) * M_PI;
  EXPECT_FLOAT_EQ(angle179,
                  math_util::AngleDist(angle0, angle181));
}

TEST(AngleDistFloat, Angle179Angle181) {
  const float angle2 = (2.0 / 180.0) * M_PI;
  const float angle179 = (179.0 / 180.0) * M_PI;
  const float angle181 = (181.0 / 180.0) * M_PI;
  EXPECT_NEAR(angle2, math_util::AngleDist(angle179, angle181), 0.0001f);
}

TEST(AngleDistFloat, Angle181Angle179) {
  const float angle2 = (2.0 / 180.0) * M_PI;
  const float angle179 = (179.0 / 180.0) * M_PI;
  const float angle181 = (181.0 / 180.0) * M_PI;
  EXPECT_NEAR(angle2, math_util::AngleDist(angle181, angle179), 0.0001f);
}

TEST(AngleDistFloat, Angle179Angle541) {
  const float angle2 = (2.0 / 180.0) * M_PI;
  const float angle179 = (179.0 / 180.0) * M_PI;
  const float angle541 = (541.0 / 180.0) * M_PI;
  EXPECT_NEAR(angle2, math_util::AngleDist(angle179, angle541), 0.0001f);
}

TEST(AngleDiffDouble, AngleNegPiAnglePi) {
  const double angle0 = 0.0f;
  EXPECT_NEAR(angle0, math_util::AngleDiff<float>(-M_PI, M_PI), 0.0001);
}

TEST(AngleDiffDouble, Angle0Angle0) {
  const double angle0 = 0.0f;
  EXPECT_NEAR(angle0, math_util::AngleDiff(angle0, angle0), 0.0001);
}

TEST(AngleDiffDouble, Angle0Angle90) {
  const double angle0 = 0.0f;
  const double angle90 = 0.5 * M_PI;
  EXPECT_NEAR(-angle90, math_util::AngleDiff(angle0, angle90), 0.0001);
}

TEST(AngleDiffDouble, Angle0Angle270) {
  const double angle0 = 0.0f;
  const double angle90 = 0.5 * M_PI;
  const double angle270 = 1.5 * M_PI;
  EXPECT_NEAR(angle90, math_util::AngleDiff(angle0, angle270), 0.0001);
}

TEST(AngleDiffDouble, Angle0Angle181) {
  const double angle0 = 0.0f;
  const double angle179 = (179.0 / 180.0) * M_PI;
  const double angle181 = (181.0 / 180.0) * M_PI;
  EXPECT_NEAR(angle179, math_util::AngleDiff(angle0, angle181), 0.0001);
}

TEST(AngleDiffDouble, Angle179Angle181) {
  const double angle2 = (2.0 / 180.0) * M_PI;
  const double angle179 = (179.0 / 180.0) * M_PI;
  const double angle181 = (181.0 / 180.0) * M_PI;
  EXPECT_NEAR(-angle2, math_util::AngleDiff(angle179, angle181), 0.0001);
}

TEST(AngleDiffDouble, Angle181Angle179) {
  const double angle2 = (2.0 / 180.0) * M_PI;
  const double angle179 = (179.0 / 180.0) * M_PI;
  const double angle181 = (181.0 / 180.0) * M_PI;
  EXPECT_NEAR(angle2, math_util::AngleDiff(angle181, angle179), 0.0001);
}

TEST(AngleDiffDouble, Angle179Angle541) {
  const double angle2 = (2.0 / 180.0) * M_PI;
  const double angle179 = (179.0 / 180.0) * M_PI;
  const double angle541 = (541.0 / 180.0) * M_PI;
  EXPECT_NEAR(-angle2, math_util::AngleDiff(angle179, angle541), 0.0001);
}

TEST(AngleDistDouble, AngleNegPiAnglePi) {
  const double angle0 = 0.0f;
  EXPECT_NEAR(angle0, math_util::AngleDist<float>(-M_PI, M_PI), 0.0001);
}

TEST(AngleDistDouble, Angle0Angle0) {
  const double angle0 = 0.0f;
  EXPECT_NEAR(angle0, math_util::AngleDist(angle0, angle0), 0.0001);
}

TEST(AngleDistDouble, Angle0Angle90) {
  const double angle0 = 0.0f;
  const double angle90 = 0.5 * M_PI;
  EXPECT_NEAR(angle90, math_util::AngleDist(angle0, angle90), 0.0001);
}

TEST(AngleDistDouble, Angle0Angle270) {
  const double angle0 = 0.0f;
  const double angle90 = 0.5 * M_PI;
  const double angle270 = 1.5 * M_PI;
  EXPECT_NEAR(angle90, math_util::AngleDist(angle0, angle270), 0.0001);
}

TEST(AngleDistDouble, Angle0Angle181) {
  const double angle0 = 0.0f;
  const double angle179 = (179.0 / 180.0) * M_PI;
  const double angle181 = (181.0 / 180.0) * M_PI;
  EXPECT_NEAR(angle179, math_util::AngleDist(angle0, angle181), 0.0001);
}

TEST(AngleDistDouble, Angle179Angle181) {
  const double angle2 = (2.0 / 180.0) * M_PI;
  const double angle179 = (179.0 / 180.0) * M_PI;
  const double angle181 = (181.0 / 180.0) * M_PI;
  EXPECT_NEAR(angle2, math_util::AngleDist(angle179, angle181), 0.0001);
}

TEST(AngleDistDouble, Angle181Angle179) {
  const double angle2 = (2.0 / 180.0) * M_PI;
  const double angle179 = (179.0 / 180.0) * M_PI;
  const double angle181 = (181.0 / 180.0) * M_PI;
  EXPECT_NEAR(angle2, math_util::AngleDist(angle181, angle179), 0.0001);
}

TEST(AngleDistDouble, Angle179Angle541) {
  const double angle2 = (2.0 / 180.0) * M_PI;
  const double angle179 = (179.0 / 180.0) * M_PI;
  const double angle541 = (541.0 / 180.0) * M_PI;
  EXPECT_NEAR(angle2, math_util::AngleDist(angle179, angle541), 0.0001);
}

TEST(AngleDiffGeneric, AngleNegPiAnglePi) {
  const long double angle0 = 0.0f;
  EXPECT_NEAR(angle0, math_util::AngleDiff<float>(-M_PI, M_PI), 0.0001);
}

TEST(AngleDiffGeneric, Angle0Angle0) {
  const long double angle0 = 0.0f;
  EXPECT_NEAR(angle0, math_util::AngleDiff(angle0, angle0), 0.0001);
}

TEST(AngleDiffGeneric, Angle0Angle90) {
  const long double angle0 = 0.0f;
  const long double angle90 = 0.5 * M_PI;
  EXPECT_NEAR(-angle90, math_util::AngleDiff(angle0, angle90), 0.0001);
}

TEST(AngleDiffGeneric, Angle0Angle270) {
  const long double angle0 = 0.0f;
  const long double angle90 = 0.5 * M_PI;
  const long double angle270 = 1.5 * M_PI;
  EXPECT_NEAR(angle90, math_util::AngleDiff(angle0, angle270), 0.0001);
}

TEST(AngleDiffGeneric, Angle0Angle181) {
  const long double angle0 = 0.0f;
  const long double angle179 = (179.0 / 180.0) * M_PI;
  const long double angle181 = (181.0 / 180.0) * M_PI;
  EXPECT_NEAR(angle179, math_util::AngleDiff(angle0, angle181), 0.0001);
}

TEST(AngleDiffGeneric, Angle179Angle181) {
  const long double angle2 = (2.0 / 180.0) * M_PI;
  const long double angle179 = (179.0 / 180.0) * M_PI;
  const long double angle181 = (181.0 / 180.0) * M_PI;
  EXPECT_NEAR(-angle2, math_util::AngleDiff(angle179, angle181), 0.0001);
}

TEST(AngleDiffGeneric, Angle181Angle179) {
  const long double angle2 = (2.0 / 180.0) * M_PI;
  const long double angle179 = (179.0 / 180.0) * M_PI;
  const long double angle181 = (181.0 / 180.0) * M_PI;
  EXPECT_NEAR(angle2, math_util::AngleDiff(angle181, angle179), 0.0001);
}

TEST(AngleDiffGeneric, Angle179Angle541) {
  const long double angle2 = (2.0 / 180.0) * M_PI;
  const long double angle179 = (179.0 / 180.0) * M_PI;
  const long double angle541 = (541.0 / 180.0) * M_PI;
  EXPECT_NEAR(-angle2, math_util::AngleDiff(angle179, angle541), 0.0001);
}

TEST(AngleDistGeneric, AngleNegPiAnglePi) {
  const long double angle0 = 0.0f;
  EXPECT_NEAR(angle0, math_util::AngleDist<float>(-M_PI, M_PI), 0.0001);
}

TEST(AngleDistGeneric, Angle0Angle0) {
  const long double angle0 = 0.0f;
  EXPECT_NEAR(angle0, math_util::AngleDist(angle0, angle0), 0.0001);
}

TEST(AngleDistGeneric, Angle0Angle90) {
  const long double angle0 = 0.0f;
  const long double angle90 = 0.5 * M_PI;
  EXPECT_NEAR(angle90, math_util::AngleDist(angle0, angle90), 0.0001);
}

TEST(AngleDistGeneric, Angle0Angle270) {
  const long double angle0 = 0.0f;
  const long double angle90 = 0.5 * M_PI;
  const long double angle270 = 1.5 * M_PI;
  EXPECT_NEAR(angle90, math_util::AngleDist(angle0, angle270), 0.0001);
}

TEST(AngleDistGeneric, Angle0Angle181) {
  const long double angle0 = 0.0f;
  const long double angle179 = (179.0 / 180.0) * M_PI;
  const long double angle181 = (181.0 / 180.0) * M_PI;
  EXPECT_NEAR(angle179, math_util::AngleDist(angle0, angle181), 0.0001);
}

TEST(AngleDistGeneric, Angle179Angle181) {
  const long double angle2 = (2.0 / 180.0) * M_PI;
  const long double angle179 = (179.0 / 180.0) * M_PI;
  const long double angle181 = (181.0 / 180.0) * M_PI;
  EXPECT_NEAR(angle2, math_util::AngleDist(angle179, angle181), 0.0001);
}

TEST(AngleDistGeneric, Angle181Angle179) {
  const long double angle2 = (2.0 / 180.0) * M_PI;
  const long double angle179 = (179.0 / 180.0) * M_PI;
  const long double angle181 = (181.0 / 180.0) * M_PI;
  EXPECT_NEAR(angle2, math_util::AngleDist(angle181, angle179), 0.0001);
}

TEST(AngleDistGeneric, Angle179Angle541) {
  const long double angle2 = (2.0 / 180.0) * M_PI;
  const long double angle179 = (179.0 / 180.0) * M_PI;
  const long double angle541 = (541.0 / 180.0) * M_PI;
  EXPECT_NEAR(angle2, math_util::AngleDist(angle179, angle541), 0.0001);
}

TEST(Heading, AngleZero) {
  EXPECT_EQ(Eigen::Vector2f(1, 0), geometry::Heading(0.0f));
}

TEST(CheckLineLineCollision, Collides) {
  {
    Eigen::Vector2f p1(1.1, 0.1);
    Eigen::Vector2f p2(1.9, -0.1);
    Eigen::Vector2f l1(1, 0);
    Eigen::Vector2f l2(2, 0);
    EXPECT_TRUE(geometry::CheckLineLineCollision(p1, p2, l1, l2));
  }
  {
    Eigen::Vector2f p1(1.1, 0.1);
    Eigen::Vector2f p2(1.9, 0);
    Eigen::Vector2f l1(1, 0);
    Eigen::Vector2f l2(2, 0);
    EXPECT_TRUE(geometry::CheckLineLineCollision(p1, p2, l1, l2));
  }
  {
    Eigen::Vector2f p1(1.1, 0.1);
    Eigen::Vector2f p2(1.9, 0.001);
    Eigen::Vector2f l1(1, 0);
    Eigen::Vector2f l2(2, 0);
    EXPECT_FALSE(geometry::CheckLineLineCollision(p1, p2, l1, l2));
  }
  {
    Eigen::Vector2f p1(0, 0.1);
    Eigen::Vector2f p2(1.1, -0.1);
    Eigen::Vector2f l1(1, 0);
    Eigen::Vector2f l2(2, 0);
    EXPECT_FALSE(geometry::CheckLineLineCollision(p1, p2, l1, l2));
  }
  {
    const Eigen::Vector2f p1(1, 1);
    const Eigen::Vector2f p2(2, 2);
    const Eigen::Vector2f p3(3, 3);
    const Eigen::Vector2f p4(6, 6);
    EXPECT_FALSE(geometry::CheckLineLineCollision(p1, p2, p3, p4));
  }
  {
    const Eigen::Vector2f p1(0, 0);
    const Eigen::Vector2f p2(0, 5);
    const Eigen::Vector2f p3(0, 5);
    const Eigen::Vector2f p4(6, 6);
    EXPECT_TRUE(geometry::CheckLineLineCollision(p1, p2, p3, p4));
  }
  {
    const Eigen::Vector2f p1(0, 0);
    const Eigen::Vector2f p2(0, 5);
    const Eigen::Vector2f p3(0, 4);
    const Eigen::Vector2f p4(0, 6);
    EXPECT_TRUE(geometry::CheckLineLineCollision(p1, p2, p3, p4));
  }
  {
    const Eigen::Vector2f p1(0, 0);
    const Eigen::Vector2f p2(0, 5);
    const Eigen::Vector2f p3(0, 5);
    const Eigen::Vector2f p4(0, 6);
    EXPECT_TRUE(geometry::CheckLineLineCollision(p1, p2, p3, p4));
  }
  {
    const Eigen::Vector2f p1(0, 0);
    const Eigen::Vector2f p2(2, 3);
    const Eigen::Vector2f p3(4, 6);
    const Eigen::Vector2f p4(6, 9);
    EXPECT_FALSE(geometry::CheckLineLineCollision(p1, p2, p3, p4));
  }
  {
    const Eigen::Vector2f p1(1, 1);
    const Eigen::Vector2f p2(2, 2);
    const Eigen::Vector2f p3(1, 1);
    const Eigen::Vector2f p4(2, 2);
    EXPECT_TRUE(geometry::CheckLineLineCollision(p1, p2, p3, p4));
  }
  {
    const Eigen::Vector2f p1(1, 1);
    const Eigen::Vector2f p2(2, 2);
    const Eigen::Vector2f p3(2, 1);
    const Eigen::Vector2f p4(3, 2);
    EXPECT_FALSE(geometry::CheckLineLineCollision(p1, p2, p3, p4));
  }
  {
    const Eigen::Vector2f p1(5, 0);
    const Eigen::Vector2f p2(5, 10);
    const Eigen::Vector2f p3(0, 5);
    const Eigen::Vector2f p4(10, 5);
    EXPECT_TRUE(geometry::CheckLineLineCollision(p1, p2, p3, p4));
  }
  {
    const Eigen::Vector2f p1(5, 0);
    const Eigen::Vector2f p2(5, 10);
    const Eigen::Vector2f p3(50, 50);
    const Eigen::Vector2f p4(60, 60);
    EXPECT_FALSE(geometry::CheckLineLineCollision(p1, p2, p3, p4));
  }
  {
    const Eigen::Vector2f p1(-1, -1);
    const Eigen::Vector2f p2(1, 1);
    const Eigen::Vector2f p3(-2, -2);
    const Eigen::Vector2f p4(3, 3);
    EXPECT_TRUE(geometry::CheckLineLineCollision(p1, p2, p3, p4));
  }
  {
    const Eigen::Vector2f p1(0, 0);
    const Eigen::Vector2f p2(0, 5);
    const Eigen::Vector2f p3(1, 1);
    const Eigen::Vector2f p4(5, 5);
    EXPECT_FALSE(geometry::CheckLineLineCollision(p1, p2, p3, p4));
  }
  {
    const Eigen::Vector2f p1(0, 0);
    const Eigen::Vector2f p2(0, 5);
    const Eigen::Vector2f p3(0, 4);
    const Eigen::Vector2f p4(0, 10);
    EXPECT_TRUE(geometry::CheckLineLineCollision(p1, p2, p3, p4));
  }
  {
    const Eigen::Vector2f p1(10, 10);
    const Eigen::Vector2f p2(10, 10);
    const Eigen::Vector2f p3(30, 4);
    const Eigen::Vector2f p4(30, 10);
    EXPECT_FALSE(geometry::CheckLineLineCollision(p1, p2, p3, p4));
  }
  {
    const Eigen::Vector2f p1(0, 200);
    const Eigen::Vector2f p2(300, 200);
    const Eigen::Vector2f p3(100, 300);
    const Eigen::Vector2f p4(100, 200);
    EXPECT_TRUE(geometry::CheckLineLineCollision(p1, p2, p3, p4));
  }
  {
    const Eigen::Vector2f p1(0, 0);
    const Eigen::Vector2f p2(0.396010, 0);
    const Eigen::Vector2f p3(2.927000, 0);
    const Eigen::Vector2f p4(2.927000, 0);
    EXPECT_FALSE(geometry::CheckLineLineCollision(p1, p2, p3, p4));
  }
  {
    const Eigen::Vector2f p1(0, 0);
    const Eigen::Vector2f p2(0.396010, 0);
    const Eigen::Vector2f p3(2.927000, 0);
    const Eigen::Vector2f p4(2.927000, 0);
    EXPECT_FALSE(geometry::CheckLineLineCollision(p3, p4, p1, p2));
  }
  {
    const Eigen::Vector2f p1(0, 0);
    const Eigen::Vector2f p2(0, 0.396010);
    const Eigen::Vector2f p3(0, 2.927000);
    const Eigen::Vector2f p4(0, 2.927000);
    EXPECT_FALSE(geometry::CheckLineLineCollision(p1, p2, p3, p4));
  }
  {
    const Eigen::Vector2f p1(0, 0);
    const Eigen::Vector2f p2(0, 0.396010);
    const Eigen::Vector2f p3(0, 2.927000);
    const Eigen::Vector2f p4(0, 2.927000);
    EXPECT_FALSE(geometry::CheckLineLineCollision(p3, p4, p1, p2));
  }
  {
    const Eigen::Vector2f p1(0, 0);
    const Eigen::Vector2f p2(0, 0);
    const Eigen::Vector2f p3(0, 2.927000);
    const Eigen::Vector2f p4(0, 2.927000);
    EXPECT_FALSE(geometry::CheckLineLineCollision(p3, p4, p1, p2));
  }
  {
    const Eigen::Vector2f p1(0, 0);
    const Eigen::Vector2f p2(0, 0);
    const Eigen::Vector2f p3(0, 0);
    const Eigen::Vector2f p4(0, 0);
    EXPECT_TRUE(geometry::CheckLineLineCollision(p3, p4, p1, p2));
  }
}

TEST(LineLineIntersection, CollidesAndIntersection) {
  {
    const Eigen::Vector2f p1(-1, 0);
    const Eigen::Vector2f p2(1, 0);
    const Eigen::Vector2f p3(0, -1);
    const Eigen::Vector2f p4(0, 1);
    EXPECT_TRUE(geometry::CheckLineLineCollision(p1, p2, p3, p4));
    const Eigen::Vector2f intersection = geometry::LineLineIntersection(
        p1, p2, p3, p4);
    EXPECT_FLOAT_EQ(intersection.x(), 0);
    EXPECT_FLOAT_EQ(intersection.y(), 0);
  }
  {
    const Eigen::Vector2f p1(-1, -1);
    const Eigen::Vector2f p2(3, 3);
    const Eigen::Vector2f p3(2, -5);
    const Eigen::Vector2f p4(-2, 5);
    EXPECT_TRUE(geometry::CheckLineLineCollision(p1, p2, p3, p4));
    const Eigen::Vector2f intersection = geometry::LineLineIntersection(
        p1, p2, p3, p4);
    EXPECT_FLOAT_EQ(intersection.x(), 0);
    EXPECT_FLOAT_EQ(intersection.y(), 0);
  }
  {
    const Eigen::Vector2f p1(-5, -5);
    const Eigen::Vector2f p2(5, -5);
    const Eigen::Vector2f p3(0, -5.25);
    const Eigen::Vector2f p4(4.99, -5);
    EXPECT_TRUE(geometry::CheckLineLineCollision(p1, p2, p3, p4));
    const Eigen::Vector2f intersection = geometry::LineLineIntersection(
        p1, p2, p3, p4);
    EXPECT_FLOAT_EQ(intersection.x(), 4.99);
    EXPECT_FLOAT_EQ(intersection.y(), -5);
  }
}

TEST(DistanceFromLineSegment, Mid) {
  {
    const Eigen::Vector2f p0(1, 2);
    const Eigen::Vector2f p1(10, 2);
    const Eigen::Vector2f v(4, 5);
    EXPECT_FLOAT_EQ(geometry::DistanceFromLineSegment(v, p0, p1), 3);
  }
  {
    const Eigen::Vector2f p0(1, 2);
    const Eigen::Vector2f p1(6, 7);
    const Eigen::Vector2f v(2, 2);
    EXPECT_FLOAT_EQ(geometry::DistanceFromLineSegment(v, p0, p1), 1.0 / sqrt(2.0));
  }
}

TEST(DistanceFromLineSegment, End) {
  {
    const Eigen::Vector2f p0(1, 2);
    const Eigen::Vector2f p1(10, 2);
    const Eigen::Vector2f v(13, 5);
    EXPECT_FLOAT_EQ(geometry::DistanceFromLineSegment(v, p0, p1),
                    3.0 * sqrt(2.0));
  }
  {
    const Eigen::Vector2f p0(1, 2);
    const Eigen::Vector2f p1(6, 7);
    const Eigen::Vector2f v(0, 1);
    EXPECT_FLOAT_EQ(geometry::DistanceFromLineSegment(v, p0, p1),
                    sqrt(2.0));
  }
}