#pragma once

#include "DeclVisitor.h"

#include "clang/AST/ASTConsumer.h"
#include "clang/AST/ASTContext.h"
#include "clang/Basic/SourceManager.h"

class DeclFinder : public clang::ASTConsumer {
  DeclVisitor Visitor;
public:
  DeclFinder(clang::SourceManager &SM) : Visitor(SM) {}

  void HandleTranslationUnit(clang::ASTContext &Context) final {
    Visitor.TraverseDecl(Context.getTranslationUnitDecl());
  }
};
