#include <gtest/gtest.h>
#include "DownloadManager.h"

class DownloadManagerTest:public::testing::Test {

};

TEST_F(DownloadManagerTest, setWordStringGetTheSameString) {
  DownloadManager d;

  EXPECT_EQ("", d.getWord());

  d.setWord("CruelWorld");

  EXPECT_EQ("CruelWorld", d.getWord());
}

TEST_F(DownloadManagerTest, setUrlStringGetTheSameString) {
  DownloadManager d;

  EXPECT_EQ("", d.getUrl());

  d.setUrl("CruelWorld");

  EXPECT_EQ("CruelWorld", d.getUrl());
}

