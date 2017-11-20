#include "graph.h"
#include "g2o_loader.h"
#include <iostream>

namespace raccoon {

  Graph::Graph() {
    _vertices_num = 0;
    _edges_num    = 0;
  }

  Graph::Graph(const std::string& filename){
    std::cerr << "[Graph]: loading " << filename << std::endl; 
    // TODO: graph loading
  }
  
  Graph::~Graph() {/*nothing to destroy*/}

  void addVertex(const int id, Vertex* vertex){
    //todo
  }

  void addEdge(Edge* edge){
    //todo
  }
  
}
