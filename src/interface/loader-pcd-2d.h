//
// Created by changjoon-lee on 2/17/26.
//

#ifndef CUDA_CDT_PLY_INTERFACE_H
#define CUDA_CDT_PLY_INTERFACE_H
#include "dt-2d.h"

#include <memory>

class ILoaderPCD_2D {
public:
  virtual std::unique_ptr<PCD_2D> LoadPCD_2D() = 0;
};

#endif // CUDA_CDT_PLY_INTERFACE_H
