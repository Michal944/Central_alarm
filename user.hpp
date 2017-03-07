#ifndef USER_HPP
#define USER_HPP
#include <iostream>
class User
{
  protected:
    std::string   Name;
    std::string   Password;
    uint16_t      Identification;
  public:
    User(std::string NN, std::string PPassword, 
         uint16_t IIdentification);
    virtual ~User();
    virtual std::string Whoami() = 0;
};





#endif
