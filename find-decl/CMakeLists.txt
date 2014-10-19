add_clang_executable(find-decl 
  FindDecl.cpp)
target_link_libraries(find-decl
  clangAST
  clangBasic
  clangFrontend
  clangIndex
  clangRewrite
  clangTooling
  )

install(TARGETS find-decl RUNTIME DESTINATION bin)
