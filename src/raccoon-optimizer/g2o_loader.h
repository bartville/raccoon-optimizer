#pragma once
#include <iostream>
#include <Eigen/Core>
#include <map>
#include <vector>
#include "vertex.h"
#include "edge.h"

#define PARAMS_SE3OFFSET "PARAMS_SE3OFFSET"
#define VERTEX_TRACKXYZ "VERTEX_TRACKXYZ"
#define EDGE_SE3_QUAT "EDGE_SE3:QUAT"
#define EDGE_SE3_TRACKXYZ "EDGE_SE3_TRACKXYZ"

namespace raccoon {

  class G2oLoader {
  public:
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW;

    G2oLoader(std::map<int, Vertex*> *vertices,
	      std::vector<Edge*> *edges) {
      _vertices_ptr = vertices;
      _edges_ptr = edges;      
    }

    ~G2oLoader(){}
    
    void loadFromFile(const std::string& filename);   
    
  private:
    std::map<int, Vertex*> *_vertices_ptr;
    std::vector<Edge*> *_edges_ptr;

    int _vertices_num;
    int _edges_num;    
  };
  

  
}
