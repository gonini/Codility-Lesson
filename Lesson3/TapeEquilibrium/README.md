TapeEquilibrium
-------------

A non-empty zero-indexed array A consisting of N integers is given. Array A represents numbers on a tape.

Any integer P, such that 0 < P < N, splits this tape into two non-empty parts: A[0], A[1], ..., A[P − 1] and A[P], A[P + 1], ..., A[N − 1].

The difference between the two parts is the value of: |(A[0] + A[1] + ... + A[P − 1]) − (A[P] + A[P + 1] + ... + A[N − 1])|

In other words, it is the absolute difference between the sum of the first part and the sum of the second part.

For example, consider array A such that:

  A[0] = 3 </p>
  A[1] = 1 </p>
  A[2] = 2 </p>
  A[3] = 4 </p>
  A[4] = 3 </p>
We can split this tape in four places:

P = 1, difference = |3 − 10| = 7 </p>
P = 2, difference = |4 − 9| = 5 </p>
P = 3, difference = |6 − 7| = 1 </p>
P = 4, difference = |10 − 3| = 7 </p>
Write a function:

int solution(vector<int> &A);

that, given a non-empty zero-indexed array A of N integers, returns the minimal difference that can be achieved.

For example, given:

  A[0] = 3 </p>
  A[1] = 1 </p>
  A[2] = 2 </p>
  A[3] = 4 </p>
  A[4] = 3 </p>
the function should return 1, as explained above.

Assume that:

N is an integer within the range [2..100,000]; </p>
each element of array A is an integer within the range [−1,000..1,000]. </p>
Complexity:

expected worst-case time complexity is O(N); </p>
expected worst-case space complexity is O(N), beyond input storage (not counting the storage required for input arguments).</p>
Elements of input arrays can be modified. </p>

Problem : https://codility.com/programmers/lessons/3-time_complexity/tape_equilibrium/ </p>
solution : https://codility.com/demo/results/trainingMBNYXN-PNN/ </p>