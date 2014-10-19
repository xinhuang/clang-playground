CLANG_LEVEL := ../../..
TOOLNAME = find-decl
include $(CLANG_LEVEL)/../../Makefile.config
LINK_COMPONENTS := $(TARGETS_TO_BUILD) asmparser bitreader support mc option
USEDLIBS = clangTooling.a clangFrontend.a clangSerialization.a clangDriver.a \
					 clangRewriteFrontend.a clangRewrite.a \
					 clangParse.a clangSema.a clangAnalysis.a \
					 clangAST.a clangASTMatchers.a clangEdit.a clangLex.a clangBasic.a

          
include $(CLANG_LEVEL)/Makefile

