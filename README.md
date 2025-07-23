# Push Swap
![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white) 
![Unix](https://img.shields.io/badge/Unix-3E4348?style=for-the-badge&logo=linux&logoColor=white) 
![Bash](https://img.shields.io/badge/Bash-4EAA25?style=for-the-badge&logo=gnubash&logoColor=fff) 
![Makefile](https://img.shields.io/badge/Makefile-1f425f?style=for-the-badge&logo=makefile&logoColor=white)
![Push_Swap](https://img.shields.io/badge/Push_Swap-Completed-00BABC?style=for-the-badge)

## Project Description

This repository contains **Push Swap**, a project from the 42 curriculum. The goal is to sort a list of integers using two stacks (A and B) and a restricted set of instructions. This project is a rigorous exercise in algorithmic thinking and optimization, as the solution must sort the numbers using the minimum number of moves possible.

### Data Structure & Operations

  * The solution is implemented using a **doubly linked list** to manage the elements in the stacks.
  * All required operations have been implemented, including:
      * **Swap**: `sa`, `sb`, `ss`
      * **Push**: `pa`, `pb`
      * **Rotate**: `ra`, `rb`, `rr`
      * **Reverse Rotate**: `rra`, `rrb`, `rrr`

### Sorting Algorithm

The project's logic is built on a multi-algorithm approach, distinguishing between the size of the input to ensure optimal performance.

  * **For 3 elements**: A dedicated function, `sort_three`, is used. It employs a specialized, ad-hoc algorithm to sort any three elements with the fewest possible moves.
  * **For 5 elements**: A specific procedure is used to sort the stack. This typically involves pushing the two smallest elements to a secondary stack (B), sorting the remaining three elements in stack A, and then reinserting the two elements back into their correct positions.
  * **For more than 5 elements**: The core `sort_stack` function is called. This general algorithm uses a **divide and conquer** strategy similar to Quicksort. It partitions the stack based on an index, moving elements between stacks A and B until they are sorted. This approach avoids handling bits directly and instead focuses on partitioning by position and value.

### Code Structure

The code is organized into several key files, each responsible for a specific part of the sorting logic.

  * **`push_swap.c`**: The main function, which detects the size of the stack and calls the appropriate sorting routine.
  * **`src/sort_stack.c`**: Contains the `sort_three` function and other specialized sorting logic.
  * **`src/set_node_values.c`**: Assigns an index and a position marker (`is_above`) to each node, which is essential for the general sorting algorithm.
  * **`libft/`**: This project relies on a custom library of C functions. You can find the source code [here](https://github.com/leonel-carrizo/libft).

## How to Use

1.  Clone the repository and compile the program with `make`:
    ```bash
    git clone https://github.com/leonel-carrizo/push_swap.git
    cd push_swap
    make
    ```
2.  Run the program with a list of numbers as arguments. The program will output the list of operations to sort the stack.
    ```bash
    ./push_swap 2 1 3 6 5 4
    ```

### Using the Visualizer

To see your algorithm in action, you can use the `push_swap_visualizer`.

1.  Clone the visualizer repository into the same directory as your `push_swap` project:
    ```bash
    git clone https://github.com/o-reo/push_swap_visualizer.git
    ```
2.  Follow the instructions in the visualizer's repository to compile it.
3.  Pipe the output of your `push_swap` program into the visualizer's executable. This will show a graphical representation of the stacks being sorted.
    ```bash
    ./push_swap 2 1 3 6 5 4 | ./push_swap_visualizer
    ```

## Contact

  * **GitHub**: [leonel-carrizo](https://github.com/leonel-carrizo)

Feel free to explore the code or reach out with any questions.
