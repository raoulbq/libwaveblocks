#pragma once

#include <iostream>

#include <Eigen/Core>
#include <Eigen/Dense>

#include "basic_types.hpp"
#include "hawp.hpp"

namespace waveblocks {

template<dim_t D, class MultiIndex>
class HomogeneousInnerProduct
{
public:
    using CMatrixDD = CMatrix<Eigen::Dynamic, Eigen::Dynamic>;

    HomogeneousInnerProduct()
    {
    }

    CMatrixDD
        build_matrix(const HaWp<D, MultiIndex>& packet, int order)
    {
        // Placeholder
        std::cout << (*packet.coefficients)[0] << std::endl;
        return CMatrixDD::Ones(order, order);
    }
};

}