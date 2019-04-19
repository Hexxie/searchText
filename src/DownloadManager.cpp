/**
 * @file DownloadManager.cpp
 * @brief
 * @author Anastasiia Rusakova
 */

#include "DownloadManager.h"
#include <iostream>

DownloadManager::DownloadManager() {
}
DownloadManager::DownloadManager(
    std::string word,
    std::string url)
  :searchedWord(word){
  this->startUrl.setLink(url);
}

DownloadManager::~DownloadManager() {}

void DownloadManager::setWord (std::string word){
  this->searchedWord = word;
}

void DownloadManager::setUrl(std::string url){
  this->startUrl.setLink(url);
}

std::string DownloadManager::getWord() const{
  return searchedWord;
}

std::string DownloadManager::getUrl() const{
  return startUrl.toString();
}

int DownloadManager::downloadUrl() {}
