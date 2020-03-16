#ifndef __BULKTUM_H_
#define __BULKTUM_H_

#include <math.h>
#include <sys/stat.h>
#include <algorithm>
#include <array>
#include <fstream>
#include <iostream>
#include <iterator>
#include <memory>
#include <sstream>
#include <string>
#include <vector>

#include <franzblau.hpp>
#include <neighbours.hpp>
#include <pntCorrespondence.hpp>
#include <topo_bulk.hpp>

/*! \file bulkTUM.hpp
    \brief File containing functions used specific to bulk topological
   unit matching (TUM) criterion
*/

/*!
 *  \addtogroup ring
 *  @{
 */

namespace tum3 {

// Build a reference Hexagonal cage, reading in from a template XYZ file
Eigen::MatrixXd buildRefHC(std::string fileName);

// Build a reference Double-Diamond cage, reading in from a template XYZ file
Eigen::MatrixXd buildRefDDC(std::string fileName);

}  // namespace tum3

#endif  // __BULKTUM_H_
