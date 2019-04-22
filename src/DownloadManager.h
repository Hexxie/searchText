/**
 * @file DownloadManager.h
 * @brief
 * @author Anastasiia Rusakova
 */

#ifndef _DOWNLOAD_MNG_H_
#define _DOWNLOAD_MNG_H_

#include <string>
#include <iostream>

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

  static size_t headerCallback(char *buffer, size_t size,
                               size_t nitems, void *userdata) {
    std::cout<<buffer<<std::endl;
    return nitems * size;
  }

};

#endif
