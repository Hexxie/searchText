/**
 * @file Page.h
 * @brief
 * @author Anastasiia Rusakova
 */

#ifndef _PAGE_H_
#define _PAGE_H_

#include <iostream>
#include <string>

class Page {

public:
    Page();
    ~Page();

  static size_t headerCallback(char *buffer, size_t size,
                               size_t nitems, void *userdata) {
    std::cout<<buffer<<std::endl;
    return nitems * size;
  }

    static size_t writerCallback(char *buffer, size_t size,
                               size_t nitems, std::string userdata) {
    std::cout<<buffer<<std::endl;
    return nitems * size;
  }
  
};

#endif