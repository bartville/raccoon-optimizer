#pragma once
#include <Eigen/Core>
#include <Eigen/Geometry>

namespace raccoon {

  struct Vertex {
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW;

    int id;
    Eigen::Vector3f p;

    Vertex() {
      id = -1;
      p.setIdentity();
    }

    Vertex(const int id_, const Eigen::Vector3f& p_) {
      id = id_;
      p = p_;
    }

  };
  

}
