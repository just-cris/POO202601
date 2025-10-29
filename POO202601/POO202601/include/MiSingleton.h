#pragma once
#include "Prerequisites.h"

class
MiSingleton {
private: 
  MiSingleton() :data(0) {}
  ~MiSingleton() = default;

public:
  static MiSingleton*
    getInstance() {
    if (instance == nullptr) {
      instance = new MiSingleton();
    }
    return instance;
  }

  int
  getData() const {
    return data;
  }

  void
    setData(int value) {
    data = value;
  }

private:
//instancia de clase
  static MiSingleton* instance;
  int data;
};

class
RegistroActividad {
RegistroActividad:data(0) {}
  ~RegistroActividad() = default;

public:
  static RegistroActividad*
    getInstance() {
    if (instance == nullptr) {
      instance = new RegistroActividad();
    }
    return instance;
  }
};