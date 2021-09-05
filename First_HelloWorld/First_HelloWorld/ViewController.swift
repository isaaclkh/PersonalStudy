//
//  ViewController.swift
//  First_HelloWorld
//
//  Created by 임건호 on 2021/09/06.
//

import UIKit

class ViewController: UIViewController {

//    title
    var titleLabel: UILabel = {
        let label = UILabel() // instance
        label.text = "Hello World" // text
        label.textAlignment = .center // text center
        label.font = UIFont.boldSystemFont(ofSize: 50) // text size
        label.textColor = .white // text color
        
        return label
    }()

    override func viewDidLoad() {
        super.viewDidLoad()
        view.backgroundColor = .gray // gray background color
        view.addSubview(titleLabel) // text show
        
        titleLabel.translatesAutoresizingMaskIntoConstraints = false // auto sizing mask making false
        titleLabel.centerXAnchor.constraint(equalTo: view.centerXAnchor).isActive = true // X anchor center
        titleLabel.centerYAnchor.constraint(equalTo: view.centerYAnchor).isActive = true // Y anchor center
    }


}

