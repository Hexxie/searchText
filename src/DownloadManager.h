/**
 * @file DownloadManager.h
 * @brief
 * @author Anastasiia Rusakova
 */

#ifndef _DOWNLOAD_MNG_H_
#define _DOWNLOAD_MNG_H_

#include <string>

DownloadManager();
~DownloadManager();

void setMaxUrl(int maxUrls);
void setWord (std::string word);
void setLink(std::string url);

int getMaxUrl();
std::string getWord();
std::string getLink();

#endif
