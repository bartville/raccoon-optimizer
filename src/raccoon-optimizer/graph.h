#pragma once
#include <Eigen/Core>
#include <Eigen/Geometry>
#include <stdlib.h>
#include <map>
#include <vector>
#include "vertex.h"
#include "edge.h"

namespace raccoon {

  class Graph {
  public:
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW;

    Graph();
    Graph(const std::string& filaname);
    ~Graph();

    void addVertex(const int id, Vertex* vertex);
    void addEdge(Edge* edge);
    
  private:
    
    std::map<int, Vertex*> _vertices;
    std::vector<Edge*>     _edges;
    
    int _vertices_num;
    int _edges_num;
    
  };
  
  
}
