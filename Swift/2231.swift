//
//  2231.swift
//  BOJ
//
//  Created by 이태웅 on 1/6/25.
//

import Foundation

let N = Int(readLine()!)!

var min = 0

func findGenerator(_ n: Int) -> Int {
    for i in 1..<n {
        let sum = i + String(i).reduce(0) { $0 + Int(String($1))! }
        if sum == n {
            return i
        }
    }
    return 0
}

print(findGenerator(N))
