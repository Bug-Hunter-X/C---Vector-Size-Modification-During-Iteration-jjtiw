# C++ Vector Size Modification During Iteration
This example demonstrates a common error in C++ when modifying the size of a `std::vector` while iterating over it.  Modifying the vector's size during iteration can lead to unexpected behavior, such as out-of-bounds access or premature termination of the loop.  The solution shows safe alternatives for modifying a vector while iterating.