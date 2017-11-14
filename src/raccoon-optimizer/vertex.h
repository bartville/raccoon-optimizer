#pragma once
#include <Eigen/Core>

namespace raccoon {

  struct Vertex {
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW;

    int id;
    Eigen::Isometry3f T;

    Vertex() {
      id = -1;
      T.setIdentity();
    }

    Vertex(const int id_, const Eigen::Isometry3f& T_) {
      id = id_;
      T = T_;
    }

  };
  

}
