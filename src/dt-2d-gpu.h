//
// Created by changjoon-lee on 2/18/26.
//

#ifndef CUDA_CDT_DT_2D_GPU_H
#define CUDA_CDT_DT_2D_GPU_H

#include "interface/dt-2d.h"

class DT_2D_GPU : public IDT_2D {
public:
  DT_2D_GPU();
  virtual std::unique_ptr<Triangles> Execute(const PCD_2D &inputPCD) override;
};

#endif // CUDA_CDT_DT_2D_GPU_H
