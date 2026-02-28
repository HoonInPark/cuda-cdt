//
// Created by changjoon-lee on 2/17/26.
//

#ifndef CUDA_CDT_DT_2D_H
#define CUDA_CDT_DT_2D_H
#include <memory>
#include <vector>

struct Vertex {
  float x, y;
};

struct PCD_2D {
public:
  PCD_2D() = default;

  const auto &Data() const { return points_; }

  void Reserve(size_t n) { points_.reserve(n); }

  bool PushPoint(float x, float y) {
    if (points_.size() < points_.capacity()) {
      points_.push_back(Vertex{x, y});
      return true;
    } else {
      return false;
    }
  }

private:
  std::vector<Vertex> points_;
};

struct Triangles {
public:
  const auto &Data() const { return triangles_; }

  void Reserve(size_t n) { triangles_.reserve(n); }

  bool PushTriangle(Vertex a, Vertex b, Vertex c) {
    if (triangles_.size() < triangles_.capacity()) {
      triangles_.push_back(Triangle{a, b, c});
      return true;
    } else {
      return false;
    }
  }

private:
  struct Triangle {
    Vertex a, b, c;
  };

  std::vector<Triangle> triangles_;
};

class IDT_2D {
public:
  virtual ~IDT_2D() = default;
  virtual std::unique_ptr<Triangles> Execute(const PCD_2D &inputPCD) = 0;
};

#endif // CUDA_CDT_DT_2D_H
