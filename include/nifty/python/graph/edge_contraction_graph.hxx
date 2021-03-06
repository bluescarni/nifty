#pragma once
#ifndef NIFTY_PYTHON_GRAPH_EDGE_CONTRACTION_GRAPH_HXX
#define NIFTY_PYTHON_GRAPH_EDGE_CONTRACTION_GRAPH_HXX

#include <string>
#include <set>

#include "nifty/python/graph/graph_name.hxx"
#include "nifty/graph/edge_contraction_graph.hxx"


namespace nifty{
namespace graph{

    template<class BASE_GRAPH>
    using PyContractionGraph = EdgeContractionGraphWithSets<
        BASE_GRAPH, 
        FlexibleCallback, 
        std::set<uint64_t> 
    >;


    template<class BASE_GRAPH>
    struct GraphName< PyContractionGraph<BASE_GRAPH> >{
        static std::string name(){
            return std::string("EdgeContractionGraph") + GraphName<BASE_GRAPH>::name();
        }
    };

}
}

#endif // NIFTY_PYTHON_GRAPH_EDGE_CONTRACTION_GRAPH_HXX
