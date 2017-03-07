#include "user.hpp"


User::User(std::string NN, std::string PPassword,
           uint16_t IIdentification)
  : Name(NN),
    Password(PPassword),
    Identification(IIdentification)
{};

User::~User(){}

