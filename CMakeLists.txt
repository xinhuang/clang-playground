add_subdirectory(find-decl)

if(CLANG_ENABLE_STATIC_ANALYZER)
add_subdirectory(unittests)
endif()
