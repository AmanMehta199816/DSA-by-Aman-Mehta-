# Binary Tree Data Structure By Aman Mehta 
![GV5g9Exu09NQZOyzD9](https://github.com/AmanMehta199816/DSA-by-Aman-Mehta-/assets/96304523/89a6c04a-7a82-4fc2-8071-d8371421147f)

Welcome to the Binary Tree Data Structure Repository! This repository contains implementations and algorithms related to binary trees. Whether you're learning about binary trees or looking for code examples to practice tree-related concepts, this repository aims to provide valuable resources for your journey in data structures and algorithms.

## Features

- **Binary Tree Implementations:** Code examples and algorithms for binary trees.
- **Binary Search Tree (BST) Implementations:** Code examples and algorithms for binary search trees.

## Contents

### Binary Tree Examples

Explore the `Binary_Tree` directory for examples related to binary trees. Here are some examples:

#### 1. Binary Tree Traversal (`BinaryTreeTraversal.cpp`):
   - Description: Code for depth-first traversals (inorder, preorder, postorder) and breadth-first traversal (level order).
   - Example Input:
     ```
         1
        / \
       2   3
      / \ / \
     4  5 6  7
     ```
   - Example Output:
     - Inorder traversal: `4 2 5 1 6 3 7`
     - Preorder traversal: `1 2 4 5 3 6 7`
     - Postorder traversal: `4 5 2 6 7 3 1`
     - Level order traversal: `1 2 3 4 5 6 7`

#### 2. Binary Tree Height (`BinaryTreeHeight.cpp`):
   - Description: Algorithm to calculate the height of a binary tree.
   - Example Input:
     ```
         1
        / \
       2   3
      / \
     4   5
     ```
   - Example Output: Height of the binary tree is 3.

#### 3. Binary Tree Diameter (`BinaryTreeDiameter.cpp`):
   - Description: Code for finding the diameter of a binary tree (the longest path between any two nodes).
   - Example Input:
     ```
         1
        / \
       2   3
      / \   \
     4   5   6
     ```
   - Example Output: Diameter of the binary tree is 4 (from node 4 to node 6).

#### 4. Binary Tree Mirroring (`BinaryTreeMirroring.cpp`):
   - Description: Implementation to mirror a binary tree.
   - Example Input:
     ```
         1            1
        / \    ->    / \
       2   3        3   2
      / \ / \      / \ / \
     4  5 6  7    7  6 5  4
     ```

#### 5. Binary Tree Path Sum (`BinaryTreePathSum.cpp`):
   - Description: Algorithm to check if there exists a root-to-leaf path with a given sum.
   - Example Input:
     ```
         5
        / \
       4   8
      /   / \
     11  13  4
    /  \      \
   7    2      1
     ```
   - Example Output:
     - Target sum: 22 -> True
     - Target sum: 27 -> False

#### 6. Binary Tree Level Sum (`BinaryTreeLevelSum.cpp`):
   - Description: Code to calculate the sum of nodes at each level of the binary tree.
   - Example Input:
     ```
         1
        / \
       2   3
      / \   \
     4   5   6
     ```
   - Example Output: Level-wise sums: `[1, 5, 15]` (Level 1: 1, Level 2: 2+3=5, Level 3: 4+5+6=15)

### Binary Search Tree (BST) Examples

Check out the `BST` directory for examples related to binary search trees. Some examples include:

- Binary Search Tree Insertion
- Binary Search Tree Search
- Binary Search Tree Deletion
- Binary Search Tree Validation
- Binary Search Tree Inorder Successor
- Binary Search Tree Inorder Predecessor

## Usage

Feel free to explore the code examples, modify them, and use them for learning or educational purposes. You can compile and run the code snippets to see the algorithms in action. Experiment with different inputs to understand how the algorithms behave under different scenarios.

## Contributions

Contributions to this repository are welcome! If you have additional implementations, optimizations, or improvements related to binary trees or binary search trees, feel free to submit a pull request. Together, we can enhance this repository and create a valuable resource for the DSA community.

## License

This repository is open-source and available under the MIT License. Feel free to use the code for learning, educational, or personal projects.

Happy coding!

--- 

Feel free to customize the descriptions, examples, and formatting according to your preferences and specific implementations.
