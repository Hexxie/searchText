#ifndef LINK_H
#define LINK_H

#include <string>

class Link
{
public:
  Link();
  Link(std::string url);

  void setLink(std::string url);

  std::string toString() const;

private:
  std::string _url{""};

};

#endif // LINK_H
