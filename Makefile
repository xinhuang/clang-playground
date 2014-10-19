CLANG_LEVEL := ../..

include $(CLANG_LEVEL)/../../Makefile.config

PARALLEL_DIRS := find-decl
DIRS := 

include $(CLANG_LEVEL)/Makefile

