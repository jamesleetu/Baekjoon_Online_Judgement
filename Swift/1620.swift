//
//  1620.swift
//  acmicpc
//
//  Created by 이태웅 on 9/26/24.
//

import Foundation

let input = readLine()!.split(separator: " ").map { Int($0)! }

let n = input[0]
let m = input[1]

var nameToNumber = [String : Int]()
var numberToName = [Int : String]()

for i in 1..<n + 1 {
    let pokemon = readLine()!
    nameToNumber[pokemon] = i
    numberToName[i] = pokemon
}

for _ in 0..<m {
    let question = readLine()!
    
    if let number = Int(question) {
        print(numberToName[number]!)
    } else {
        print(nameToNumber[question]!)
    }
}
