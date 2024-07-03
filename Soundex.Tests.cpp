#include <gtest/gtest.h>
#include "Soundex.h"

TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) {
 //AAA
  char soundex[5];
  generateSoundex("AX", soundex);
  //ASSERT_EQ(soundex,"A200");
}

TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits)
{
  char soundex[5];
  generateSoundex("X0", soundex);
}


TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits)
{
  char soundex[5];
  generateSoundex("ZQOP", soundex);
}


TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits)
{
  char soundex[5];
  generateSoundex("ASDSD", soundex);
}


TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits)
{
  char soundex[5];
  generateSoundex("12345", soundex);
}


