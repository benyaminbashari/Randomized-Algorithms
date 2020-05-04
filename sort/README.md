# Sorting Algorithms

Comparison of MergeSort and QuickSort algorithms.

The pivot in the QuickSort algorithm is chosen uniformly random.

## Test Set

60 tests with the size of n = 1,000,000 are given as inputs to both algorithms. Elements in tests 1 to 50 are chosen uniformly random between 0 to INT_MAX, elements in tests 51 to 60 are sorted, and elements in tests 56 to 60 are reversely sorted.

## Result

Both algorithms are very consistent in their runtime, this is expected for MergeSort algorithm since its running time is <img src="https://render.githubusercontent.com/render/math?math=\theta(n \log n)">, but for QuickSort the randomness helps to achieve a expected runtime of <img src="https://render.githubusercontent.com/render/math?math=n \log n">. This experiment shows that not only the expected runtime of quicksort is <img src="https://render.githubusercontent.com/render/math?math=n \log n"> but also with high probability
the runtime does not significantly exceed the expected runtime. 

<img src="https://raw.githubusercontent.com/benyaminbashari/Randomized-Algorithms/master/sort/comparison.png">