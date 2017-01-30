PermCheck
-------------

A non-empty zero-indexed array A consisting of N integers is given.

A permutation is a sequence containing each element from 1 to N once, and only once.

For example, array A such that:

    A[0] = 4 </p>
    A[1] = 1 </p>
    A[2] = 3 </p>
    A[3] = 2 </p>
is a permutation, but array A such that:

    A[0] = 4 </p>
    A[1] = 1 </p>
    A[2] = 3 </p>
is not a permutation, because value 2 is missing.

The goal is to check whether array A is a permutation.

Write a function:

int solution(vector<int> &A);

that, given a zero-indexed array A, returns 1 if array A is a permutation and 0 if it is not.

For example, given array A such that:

    A[0] = 4 </p>
    A[1] = 1 </p>
    A[2] = 3 </p>
    A[3] = 2 </p>
the function should return 1.

Given array A such that:

    A[0] = 4 </p>
    A[1] = 1 </p>
    A[2] = 3 </p>
the function should return 0. 

Assume that:

N is an integer within the range [1..100,000]; </p>
each element of array A is an integer within the range [1..1,000,000,000].  </p>
Complexity:

expected worst-case time complexity is O(N); </p>
expected worst-case space complexity is O(N), beyond input storage (not counting the storage required for input arguments).</p>
Elements of input arrays can be modified.

Problem : https://codility.com/programmers/lessons/4-counting_elements/perm_check/ </p>
solution : https://codility.com/demo/results/training3JSJNT-REW/ </p>