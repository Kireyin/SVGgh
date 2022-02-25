// swift-tools-version:5.3

import PackageDescription

let package = Package(
    name: "SVGgh",
    products: [
        .library(
            name: "SVGgh",
            targets: ["SVGgh"]),
    ],
    targets: [
        .target(
            name: "SVGgh",
            dependencies: [],
            path: "SVGgh",
            exclude: ["SVGgh-Prefix.pch", "Info.plist"],
            cSettings: [
                .headerSearchPath("Includes"),
            ])
    ]
)
