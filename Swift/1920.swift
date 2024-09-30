//
//  1920.swift
//  acmicpc
//
//  Created by 이태웅 on 9/30/24.
//

import Foundation

let N = Int(readLine()!)!

let A = readLine()!.split(separator: " ").map { Int($0)! }.sorted()

let M = Int(readLine()!)!

let B = readLine()!.split(separator: " ").map { Int($0)! }

func binarySearch(_ arr: [Int], _ target: Int) -> Bool {
    var left = 0
    var right = arr.count - 1
    
    while left <= right {
        let mid = (left + right) / 2
        if arr[mid] == target {
            return true
        } else if arr[mid] < target {
            left = mid + 1
        } else {
            right = mid - 1
        }
    }
    
    return false
}

for b in B {
    if binarySearch(A, b) {
        print(1)
    } else {
        print(0)
    }
}
