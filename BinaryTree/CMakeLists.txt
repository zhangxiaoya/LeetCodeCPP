cmake_minimum_required(VERSION 3.10)
project(BinaryTree)

set(CMAKE_CXX_STANDARD 11)

add_executable(BinaryTree main.cpp BinaryTree.h
        TraverseTree/PreOrderTraverse/PreTraverseTree.cpp TraverseTree/PreOrderTraverse/PreTraverseTree.h
        TraverseTree/InorderTreverse/InorderTraverseTree.cpp TraverseTree/InorderTreverse/InorderTraverseTree.h
        TraverseTree/PostOrderTraverse/PostOrderTraverseTree.cpp TraverseTree/PostOrderTraverse/PostOrderTraverseTree.h TraverseTree/LevelTraverse/LevelTraverseTree.cpp TraverseTree/LevelTraverse/LevelTraverseTree.h SolveProblem/MaxDepth/MaxDepthSolution.cpp SolveProblem/MaxDepth/MaxDepthSolution.h SolveProblem/SymmetricTree/SymmetricTreeSolution.cpp SolveProblem/SymmetricTree/SymmetricTreeSolution.h SolveProblem/PathSum/PathSumSolution.cpp SolveProblem/PathSum/PathSumSolution.h)