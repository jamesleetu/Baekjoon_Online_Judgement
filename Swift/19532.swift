//
//  19532.swift
//  BOJ
//
//  Created by 이태웅 on 1/23/25.
//

import Foundation

if let input = readLine() {
    let values = input.split(separator: " ").compactMap { Int($0) }
    if values.count == 6 {
        let a = values[0]
        let b = values[1]
        let c = values[2]
        let d = values[3]
        let e = values[4]
        let f = values[5]
        
        let determinant = a * e - b * d
        
        if determinant != 0 {
            let x = (c * e - b * f) / determinant
            let y = (a * f - c * d) / determinant
            print("\(x) \(y)")
        }
    }
}
