/**
 * @file DownloadManager.cpp
 * @brief
 * @author Anastasiia Rusakova
 */

#include "DownloadManager.h"

DownloadManager::DownloadManager() {}
DownloadManager::DownloadManager(
    std::string word,
    std::string url)
  :searchedWord(word), startUrl(url){}

DownloadManager::~DownloadManager() {}

void DownloadManager::setMaxUrl(int maxUrls){
  this->maxUrls = maxUrls;
}
void DownloadManager::setWord (std::string word){
  this->searchedWord = word;
}

void DownloadManager::setLink(std::string url){
  this->setLink(url);
}

int DownloadManager::getMaxUrl(){
  return maxUrls;
}

std::string DownloadManager::getWord(){
  return searchedWord;
}

std::string DownloadManager::getLink(){
  return startUrl;
}
