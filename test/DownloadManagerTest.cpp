#include <gtest/gtest.h>
#include "DownloadManager.h"

class DownloadManagerTest:public::testing::Test {

};

TEST_F(DownloadManagerTest, setUrlStringGetTheSameString) {
  DownloadManager d;

  EXPECT_EQ("", d.getUrl());

  d.setUrl("CruelWorld");

  EXPECT_EQ("CruelWorld", d.getUrl());
}


TEST_F(DownloadManagerTest, testDownload) {
  DownloadManager d;
  d.setUrl("https://curl.haxx.se/libcurl/c/CURLOPT_HEADERFUNCTION.html");

  EXPECT_EQ(0, d.downloadUrl());
}
