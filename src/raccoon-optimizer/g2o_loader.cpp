#include "g2o_loader.h"
#include <fstream>

namespace raccoon {

  void G2oLoader::loadFromFile(const std::string& filename) {

    std::ifstream input(filename.c_str());
    int num_of_lines = 0;
    float id, x, y, z, qx, qy, qz;

    for(std::string line; getline(input, line); ) {
      ++num_of_lines;      

      if(line.at(0) == '#')
	continue;

      std::istringstream iss(line);
      std::string value;
      getline(iss, value, ' ');
      if(!strcmp(value.c_str(), PARAMS_SE3OFFSET)) {
	throw std::runtime_error("[G2oLoader]: PARAMS_SE3OFFSET not yet supported");
      }
      else if(!strcmp(value.c_str(), VERTEX_TRACKXYZ)) {
	// line >> id >> x >> y >> z;
	// Vertex* new_vertex = new Vertex(id, Eigen::Vector3f(x, y, z));
	// _vertices_ptr->insert(std::pair<int, Vertex*>(id, new_vertex));
      }
      else if(!strcmp(value.c_str(), EDGE_SE3_QUAT)) {
	
      }
      else if(!strcmp(value.c_str(), EDGE_SE3_TRACKXYZ)) {
	
      }
    }
      
    std::cerr << "num_of_lines: " << num_of_lines << std::endl;
  }

}
