#include "Link.h"

Link::Link()
{
}

void Link::setLink(std::string url) {
  this->_url = url;
}

std::string Link::toString() const {
  return _url;
}
