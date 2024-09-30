//
//  10816.swift
//  acmicpc
//
//  Created by 이태웅 on 9/30/24.
//

import Foundation

let N = Int(readLine()!)!

let cards = readLine()!.split(separator: " ").map { Int($0)! }

var cardCount = [Int: Int]()
for card in cards {
    cardCount[card, default: 0] += 1
}

let M = Int(readLine()!)!

let queries = readLine()!.split(separator: " ").map { Int($0)! }

var result = [String]()
for query in queries {
    if let count = cardCount[query] {
        result.append(String(count))
    } else {
        result.append("0")
    }
}

print(result.joined(separator: " "))
