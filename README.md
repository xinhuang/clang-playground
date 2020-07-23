clang-playground
================

This is the repository for clang-playground series.

*I haven't follow LLVM/Clang for a long time, so this guide maybe not compile or outdated. Please take the code here for reference only.*

## How to Build

Clone LLVM source:  
`git clone http://llvm.org/git/llvm.git src`

Clone Clang source:  
`git clone http://llvm.org/git/clang.git src/tools/clang`

Clone clang-playground source:  
`git clone https://github.com/xinhuang/clang-playground.git src/tools/clang/tools/clang-playground` 

```
mkdir debug && cd debug
../src/configure
make -j
```

## find-decl

Find all the declarations in a given file.

Tutor: [Clang Playground: Finding Declarations], [Clang Playground: The AST Matcher]

[Clang Playground: Finding Declarations]:https://xinhuang.github.io/posts/2014-10-19-clang-tutorial-finding-declarations.html
[Clang Playground: The AST Matcher]:https://xinhuang.github.io/posts/2015-02-08-clang-tutorial-the-ast-matcher.html
