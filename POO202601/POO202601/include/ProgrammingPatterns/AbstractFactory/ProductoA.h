#pragma once
#include "Prerequisites.h"

class
  ProductoA {
public:
  virtual void
    operacionA() const = 0;

  virtual
    ~ProductoA() = default;
};