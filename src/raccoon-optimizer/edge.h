#pragma once
#include <Eigen/Core>
#include "vertex.h"

namespace raccoon {

  typedef Eigen::Matrix<float, 6, 6> Matrix6f;
  
  struct Edge {
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW;

    int from_id;
    int to_id;
    Vertex* from;
    Vertex* to;
    Eigen::Isometry3f T;
    Matrix6f information;

    Edge() {
      from_id = -1;
      to_id = -1;
      from = 0;
      to = 0;
      T.setIdentity();
      information.setZero();
    }

    Edge(const int from_id_,
	 const int to_id_,
	 Vertex* from_,
	 Vertex* to_,
	 const Eigen::Isometry3f& T_,
	 const Matrix6f& information_) {
      from_id = from_id_;
      to_id = to_id_;
      from = from_;
      to = to_;
      T = T_;
      information = information_;     
    }
    
  };

}
