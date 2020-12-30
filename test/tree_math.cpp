#include "test_vectors.h"
#include <doctest/doctest.h>
#include <mls_vectors/mls_vectors.h>

#include <vector>

using namespace mls_vectors;

TEST_CASE("Tree Math Test Vectors")
{
  const auto tv = TreeMathTestVector::create(256);
  REQUIRE(tv.verify() == std::nullopt);
}
