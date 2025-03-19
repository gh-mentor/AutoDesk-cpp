Generate a function 'conditionalBitSwap' that takes the following arguments:
- 'arr1': an array of char 
- 'arr2': an array of char 
- 'mask': a char that represents a char bit mask.
- 'arrLen': a size_t that represents the length of the array.

Implementation details:
- the conditionalBitSwap function swaps the bits in the same positions
   of the elements of two char arrays, but only if the corresponding bit
   in the mask is set and the bits to be swapped are different.
- the conditionalBitSwap function should not return anything.
Example with 2 elements in the arrays:
    arr1 = [0b1010, 0b1100]
    arr2 = [0b0110, 0b0011]
    mask = 0b1010

    After calling conditionalBitSwap(arr1, arr2, m), arr1 and arr2 should be:
    arr1 = [0b0010, 0b0110]
    arr2 = [0b1110, 0b1001]
Example with 3 elements in the arrays:
    arr1 = [0b1010, 0b1100, 0b1111]
    arr2 = [0b0110, 0b0011, 0b0000]
    mask = 0b1010

    After calling conditionalBitSwap(arr1, arr2, m), arr1 and arr2 should be:
    arr1 = [0b0010, 0b0110, 0b1111]
    arr2 = [0b1110, 0b1001, 0b0000]