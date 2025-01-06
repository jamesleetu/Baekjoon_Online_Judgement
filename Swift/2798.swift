//
//  main.swift
//  2798
//
//  Created by 이태웅 on 1/6/25.
//

import Foundation

let inputs = readLine()!.split(separator: " ").map{ Int($0)! }
let cards = readLine()!.split(separator: " ").map{ Int($0)! }

let N = inputs[0]
let M = inputs[1]

var maxSum = 0

for i in 0..<N-2 {
    for j in i+1..<N-1 {
        for k in j+1..<N {
            let sum = cards[i] + cards[j] + cards[k]
            if sum <= M && sum > maxSum {
                maxSum = sum
            }
        }
    }
}

print(maxSum)
