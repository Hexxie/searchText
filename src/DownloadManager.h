/**
 * @file DownloadManager.h
 * @brief
 * @author Anastasiia Rusakova
 */

#ifndef _DOWNLOAD_MNG_H_
#define _DOWNLOAD_MNG_H_

#include <string>

#include "wrappers/Link.h"
#include <curl/curl.h>

class DownloadManager {
public:

  DownloadManager();
  DownloadManager(std::string word, std::string url);

  ~DownloadManager();

  void setUrl(std::string url);

  std::string getUrl() const;
  
  int downloadUrl();

private:
  int maxUrls{10};
  std::string searchedWord{""};
  Link startUrl{};
  CURL *curl;
  std::string buffer;
};

#endif
