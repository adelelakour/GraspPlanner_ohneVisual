# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Grasper_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Grasper_autogen.dir/ParseCache.txt"
  "Grasper_autogen"
  )
endif()
