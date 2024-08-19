#include <gtest/gtest.h>
#include "Soundex.h"

TEST(SoudexTestsuite, ReplacesConsonantsWithAppropriateDigits) {
 //AAA
  char soundex[5];
  generateSoundex("AX", soundex);
  EXPECT_STREQ(soundex,"A200");
}

TEST(SoudexTestsuite1, ReplacesConsonantsWithAppropriateDigits1)
{
  char soundex[5];
  generateSoundex("X0", soundex);
}


TEST(SoudexTestsuite2, ReplacesConsonantsWithAppropriateDigits2)
{
  char soundex[5];
  generateSoundex("ZQOP", soundex);
}


TEST(SoudexTestsuite3, ReplacesConsonantsWithAppropriateDigits3)
{
  char soundex[5];
  generateSoundex("ASDSD", soundex);
}


TEST(SoudexTestsuite4, ReplacesConsonantsWithAppropriateDigits4)
{
  char soundex[5];
  generateSoundex("12345", soundex);
}


