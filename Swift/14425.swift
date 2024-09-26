//
//  14425.swift
//  acmicpc
//
//  Created by 이태웅 on 9/26/24.
//

import Foundation

let input = readLine()!.split(separator: " ").map { Int($0)! }

let N = input[0]
let M = input [1]

var set = Set<String>()
var count : Int = 0

for _ in 0..<N {
    let string = readLine()!
    set.insert(string)
}

for _ in 0..<M {
    let string = readLine()!
    if set.contains(string) {
        count += 1
    }
}

print(count)
