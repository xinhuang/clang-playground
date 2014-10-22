CLANG_LEVEL := ../..

include $(CLANG_LEVEL)/../../Makefile.config

PARALLEL_DIRS := find-decl find-vec
DIRS := 

include $(CLANG_LEVEL)/Makefile

