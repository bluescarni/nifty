
addPythonModule(
    NESTED_NAME 
        nifty/graph  
    SOURCES
        graph.cxx
        undirected_list_graph.cxx
        edge_contraction_graph_undirected_graph.cxx
    LIBRRARIES
        ${HDF5_LIBRARIES} ${NIFTY_LP_SOLVER_LIBS}
)


# submodules
add_subdirectory(agglo)
add_subdirectory(rag)

add_subdirectory(multicut)
add_subdirectory(lifted_multicut)