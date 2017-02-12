import Foundation


// you can write to stdout for debugging purposes, e.g.
// print("this is a debug message")


let OUT_OF_RANGE = 2000000000
let UNDISCOVERED = ~(1<<31)
var size: Int = 0
var cache = [Int]()

func maximalScore(_ A : inout [Int], index idx: Int) -> Int {
    guard idx >= 0 else {
        return OUT_OF_RANGE
    }
    
    if idx == 0 {
        return A[idx]
    }
    
    if cache[idx] != UNDISCOVERED {
        return cache[idx]
    }
    
    cache[idx] = ~(1<<31)
    
    for i in 1..<7 {
        let result = maximalScore(&A, index: idx - i)
        if result == OUT_OF_RANGE {
            continue
        }
        cache[idx] = max(cache[idx], result + A[idx])
    }
    return cache[idx]
}

public func solution(_ A : inout [Int]) -> Int {
    // write your code in Swift 3.0 (Linux)
    
    cache = [Int](repeating: UNDISCOVERED, count: A.count+1)
    
    return maximalScore(&A, index: A.count - 1 )
}

