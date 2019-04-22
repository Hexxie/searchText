/**
 * @file DownloadManager.cpp
 * @brief
 * @author Anastasiia Rusakova
 */

#include "DownloadManager.h"
#include "page/Page.h"

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

//check return for each statement
  curl_easy_setopt(curl, CURLOPT_URL, startUrl.toString().c_str());
  curl_easy_setopt(curl, CURLOPT_HEADERFUNCTION, &Page::headerCallback);
  curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, &Page::writerCallback);
  curl_easy_setopt(curl, CURLOPT_WRITEDATA, &buffer);

  int result = curl_easy_perform(curl);

  //save data to file

   return result;
}
