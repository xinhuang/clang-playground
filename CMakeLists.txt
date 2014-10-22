add_subdirectory(find-decl)
add_subdirectory(find-vec)

if(CLANG_ENABLE_STATIC_ANALYZER)
add_subdirectory(unittests)
endif()
