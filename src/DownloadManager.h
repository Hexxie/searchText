/**
 * @file DownloadManager.h
 * @brief
 * @author Anastasiia Rusakova
 */

#ifndef _DOWNLOAD_MNG_H_
#define _DOWNLOAD_MNG_H_

#include <string>

#include "Link.h"

class DownloadManager {
public:

  DownloadManager();
  DownloadManager(std::string word, std::string url);

  ~DownloadManager();

  void setWord (std::string word);
  void setUrl(std::string url);

  std::string getWord() const;
  std::string getUrl() const;

private:
  int maxUrls{10};
  std::string searchedWord{""};
  Link startUrl{};
};

#endif
