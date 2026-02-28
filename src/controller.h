//
// Created by changjoon-lee on 2/28/26.
//

#ifndef CUDA_CDT_CONTROLLER_H
#define CUDA_CDT_CONTROLLER_H

#include <condition_variable>
#include <thread>
#include "interface/dt-2d.h"

using namespace std;

class Controller {
public:
  Controller(shared_ptr<IDT_2D> dt_2d) noexcept;
  virtual ~Controller();

private:
  thread condWorker_;
  condition_variable condVar_;

  shared_ptr<IDT_2D> dt_2d_;
};

#endif // CUDA_CDT_CONTROLLER_H
