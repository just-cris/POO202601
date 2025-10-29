#pragma once
#include "Prerequisites.h"
#include "Sujeto.h"
#include "SujetoReal.h"

class
  Proxy : public Sujeto {
public:
  Proxy() : sujetoReal(nullptr) {}
  ~Proxy() = default;

  void
    Request() override {
    if (sujetoReal == nullptr) {
      sujetoReal = new SujetoReal;
    }
    std::cout << "Proxy: Delegating Request to SujetoReal" << std::endl;
    sujetoReal->Request();
  }
private:
  SujetoReal* sujetoReal;
};