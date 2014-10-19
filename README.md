clang-playground
================

This is the repository for clang-playground series.

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

Tutor: [Clang Playground: Finding Declarations]

[Clang Playground: Finding Declarations]:http://xinhuang.github.io/clang/2014/10/19/clang-playground-finding-declarations

