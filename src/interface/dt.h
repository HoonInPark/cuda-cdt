//
// Created by changjoon-lee on 2/17/26.
//

#ifndef CUDA_CDT_DT_INTERFACE_H
#define CUDA_CDT_DT_INTERFACE_H
#include <memory>

/**
 * @brief Entity for pointcloud data
 */
struct PCD {};

/**
 * @brief Entity for mesh generated
 */
struct Mesh {};

/**
 * @brief Usecase for Delaunay Triangulation (DT)
 */
class IDT {
protected:
  virtual ~IDT() {}

public:
  virtual std::unique_ptr<Mesh> Execute(const PCD& inputPcd) = 0;
};

#endif // CUDA_CDT_DT_INTERFACE_H
