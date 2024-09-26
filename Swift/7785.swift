//
//  7785.swift
//  acmicpc
//
//  Created by 이태웅 on 9/26/24.
//

import Foundation

let n = Int(readLine()!)!
var peopleSet = Set<String>()

for _ in 0..<n {
    let input = readLine()!.split(separator: " ").map { $0 }
    let people = String(input[0])
    let status = String(input[1])
    
    if status == "enter" {
        peopleSet.insert(people)
    } else if status == "leave" {
        peopleSet.remove(people)
    }
}

let sortedNames = peopleSet.sorted(by: >)

for name in sortedNames {
    print(name)
}
