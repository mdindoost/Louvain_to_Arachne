#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "igraph::igraph" for configuration ""
set_property(TARGET igraph::igraph APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(igraph::igraph PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_NOCONFIG "C;CXX"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib64/libigraph.a"
  )

list(APPEND _cmake_import_check_targets igraph::igraph )
list(APPEND _cmake_import_check_files_for_igraph::igraph "${_IMPORT_PREFIX}/lib64/libigraph.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
