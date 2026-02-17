//
// Created by changjoon-lee on 2/17/26.
//

#ifndef CUDA_CDT_DT_INTERFACE_H
#define CUDA_CDT_DT_INTERFACE_H
#include <memory>

/**
 * Entity for pointcloud data
 */
struct PCD {};

/**
 * Entity for mesh generated
 */
struct Mesh {};

/**
 * Usecase for Delaunay Triangulation (DT)
 */
class IDT {
protected:
  virtual ~IDT() {}

public:
  virtual std::unique_ptr<Mesh> Execute(const PCD& inputPCD) = 0;
};

#endif // CUDA_CDT_DT_INTERFACE_H
