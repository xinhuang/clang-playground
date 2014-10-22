add_clang_executable(find-vec
  FindVec.cpp)
target_link_libraries(find-vec
  clangAST
  clangBasic
  clangFrontend
  clangIndex
  clangRewrite
  clangTooling
  )

install(TARGETS find-vec RUNTIME DESTINATION bin)
