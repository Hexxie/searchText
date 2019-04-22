/**
 * @file DownloadManager.cpp
 * @brief
 * @author Anastasiia Rusakova
 */

#include "DownloadManager.h"
#include <iostream>

DownloadManager::DownloadManager() {
  curl = curl_easy_init();
  //throw an exception here
}

DownloadManager::DownloadManager(
    std::string word,
    std::string url)
  :searchedWord(word){
  this->startUrl.setLink(url);
}

DownloadManager::~DownloadManager() {
  curl_easy_cleanup(curl);
}

void DownloadManager::setUrl(std::string url){
  this->startUrl.setLink(url);
}

std::string DownloadManager::getUrl() const{
  return startUrl.toString();
}


int DownloadManager::downloadUrl() {

   curl_easy_setopt(curl, CURLOPT_URL, startUrl.toString().c_str());
   curl_easy_setopt(curl, CURLOPT_HEADERFUNCTION,
                    [](char *buffer, size_t size,
                      size_t nitems, void *userdata)-> size_t
   {
       std::cout<<buffer<<std::endl;
       return nitems * size;
   });

  int result = curl_easy_perform(curl);

   return result;
}
