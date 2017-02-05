Brackets
-------------
A string S consisting of N characters is considered to be properly nested if any of the following conditions is true:

S is empty;
S has the form "(U)" or "[U]" or "{U}" where U is a properly nested string; </p> 
S has the form "VW" where V and W are properly nested strings. </p>
For example, the string "{[()()]}" is properly nested but "([)()]" is not. </p>

Write a function:

    int solution(string &S);

that, given a string S consisting of N characters, returns 1 if S is properly nested and 0 otherwise.

For example, given S = "{[()()]}", the function should return 1 and given S = "([)()]", the function should return 0, as explained above.

Assume that:

N is an integer within the range [0..200,000]; </p>
string S consists only of the following characters: "(", "{", "[", "]", "}" and/or ")".
Complexity:

expected worst-case time complexity is O(N); </p>
expected worst-case space complexity is O(N) (not counting the storage required for input arguments).


Problem : https://codility.com/programmers/lessons/7-stacks_and_queues/brackets/ </p>
solution : https://codility.com/demo/results/trainingV27VNF-PV9/ </p>
